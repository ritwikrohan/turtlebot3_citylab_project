#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include "robot_patrol/srv/detail/get_direction__struct.hpp"
#include "robot_patrol/srv/get_direction.hpp"
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"
#include <cmath>

using namespace std::chrono_literals;

class Patrol : public rclcpp::Node {
public:
    Patrol() : Node("patrol_node") {

        timer_callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
        scan_callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
        rclcpp::SubscriptionOptions options1;
        options1.callback_group = scan_callback_group_;
        laser_subscriber_ = this->create_subscription<sensor_msgs::msg::LaserScan>("/scan", 10, std::bind(&Patrol::laserCallback, this, std::placeholders::_1),options1);
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(50),std::bind(&Patrol::controlLoop, this), timer_callback_group_);
        client_ = this->create_client<robot_patrol::srv::GetDirection>("/direction_service");
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::Client<robot_patrol::srv::GetDirection>::SharedPtr client_;
    rclcpp::TimerBase::SharedPtr timer_; 
    rclcpp::CallbackGroup::SharedPtr timer_callback_group_;
    rclcpp::CallbackGroup::SharedPtr scan_callback_group_;
    sensor_msgs::msg::LaserScan last_laser_data;
    
    void laserCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
        
        this->last_laser_data = *msg;
    }

    void controlLoop() 
    {
        while (!client_->wait_for_service(1s)) 
        {
            if (!rclcpp::ok()) 
            {
                RCLCPP_ERROR(this->get_logger(), "Client interrupted while waiting for service. Terminating...");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Service Unavailable. Waiting for Service...");
        }
        auto request = std::make_shared<robot_patrol::srv::GetDirection::Request>();
        request->laser_data = this->last_laser_data;
        auto result_future = this->client_->async_send_request(request, std::bind(&Patrol::response_callback, this,std::placeholders::_1));
    }

    void response_callback(rclcpp::Client<robot_patrol::srv::GetDirection>::SharedFuture future) 
    {       
        geometry_msgs::msg::Twist velocity_msg;
        auto status = future.wait_for(1s);
        if (status == std::future_status::ready) {
            auto result = future.get();    
            
    
            if (result) 
            {
                RCLCPP_DEBUG(this->get_logger(), "Service returned: %s", result->direction.c_str());
                if (result->direction == "left")
                {
                    velocity_msg.linear.x = 0.1;
                    velocity_msg.angular.z = 0.5;
                    velocity_publisher_->publish(velocity_msg);
                }
                else if (result->direction == "right")
                {
                    velocity_msg.linear.x = 0.1;
                    velocity_msg.angular.z = -0.5;
                    velocity_publisher_->publish(velocity_msg);
                }
                else
                {
                    velocity_msg.linear.x = 0.1;
                    velocity_msg.angular.z = 0.0;
                    velocity_publisher_->publish(velocity_msg);
                }
            } 
            else 
            {
                RCLCPP_ERROR(this->get_logger(), "Service call failed.");
            }
        } 
        else 
        {
            RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
            velocity_msg.linear.x = 0.0;
            velocity_msg.angular.z = 0.0;
        }
        
            
    }   
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Patrol>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    executor.spin();

    rclcpp::shutdown();
    return 0;
}









