#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <cmath>

class Patrol : public rclcpp::Node {
public:
    Patrol() : Node("patrol_node") {

        timer_callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

        scan_callback_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

        rclcpp::SubscriptionOptions options1;
        options1.callback_group = scan_callback_group_;

        laser_subscriber_ = this->create_subscription<sensor_msgs::msg::LaserScan>("/scan", 10, std::bind(&Patrol::laserCallback, this, std::placeholders::_1),options1);
        velocity_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        direction_ = 0.0;
        timer_ = this->create_wall_timer(std::chrono::milliseconds(50),std::bind(&Patrol::controlLoop, this), timer_callback_group_);
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::TimerBase::SharedPtr timer_; 
    double direction_; 
    rclcpp::CallbackGroup::SharedPtr timer_callback_group_;
    rclcpp::CallbackGroup::SharedPtr scan_callback_group_;
    int index = 0;
    

    void laserCallback(const sensor_msgs::msg::LaserScan::SharedPtr laser_data) {
        std::vector<float> ranges = laser_data->ranges;
        
        int window_size = 100;  
        double safest_angle = 0.0;
        double max_minimum_distance = -1.0;  

        for (int i = 180; i < 540; ++i) {
            int start_index = i - window_size / 2;
            int end_index = i + window_size / 2;
            
            double min_distance = std::numeric_limits<double>::max(); 

            for (int j = start_index; j <= end_index; ++j) {
                double range = ranges[j];
                if (!std::isinf(range) && range < min_distance) {
                    min_distance = range;
                }
            }

            if (min_distance > max_minimum_distance) {
                max_minimum_distance = min_distance;
                safest_angle = laser_data->angle_min + i * laser_data->angle_increment;
            }
        }

        direction_ = safest_angle;
        RCLCPP_DEBUG(this->get_logger(), "Safe set at angle and max minimum distance [%f, %f]", direction_, max_minimum_distance);
    }



    void controlLoop() {

        geometry_msgs::msg::Twist velocity_msg;
        velocity_msg.linear.x = 0.1; 
        // velocity_msg.angular.z = (direction_/1.5); // simulation (COMMENT WHEN USING ACTUAL ROBOT)
        velocity_msg.angular.z = (direction_/2.0); // actual robot  (UNCOMMENT WHEN USING ACTUAL ROBOT)
        RCLCPP_DEBUG(this->get_logger(), "safe pub = %f", direction_/2);
        velocity_publisher_->publish(velocity_msg);
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









