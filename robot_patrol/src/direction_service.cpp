#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include "rclcpp/service.hpp"
#include "robot_patrol/srv/get_direction.hpp"


using namespace std::chrono_literals;

class DirectionService : public rclcpp::Node{

    public:
        DirectionService() : Node("direction_server_node"){
            this->server_ = this->create_service<robot_patrol::srv::GetDirection>("/direction_service", std::bind(&DirectionService::direction_callback, this, std::placeholders::_1, std::placeholders::_2));

        }
    
    private: 
        rclcpp::Service<robot_patrol::srv::GetDirection>::SharedPtr server_;
        


        void direction_callback(const std::shared_ptr<robot_patrol::srv::GetDirection::Request> req, const std::shared_ptr<robot_patrol::srv::GetDirection::Response> res){
            sensor_msgs::msg::LaserScan laser_scan_data = req->laser_data;
            std::vector<float> range = laser_scan_data.ranges;
            int rays = range.size();
            int start_index = rays/4;
            int end_index = 3*(rays/4);
            int ray_in_each_partition = rays/6;
            double total_dist_sec_right = 0;
            double total_dist_sec_front = 0;
            double total_dist_sec_left = 0;
            for (int i = start_index; i<=end_index;i++){

                if(i<(start_index+ray_in_each_partition) && !std::isinf(range[i])){
                    total_dist_sec_right += range[i];
                }

                else if (i>(start_index+ray_in_each_partition) && i < (start_index+(2*ray_in_each_partition)) && !std::isinf(range[i])){
                    total_dist_sec_front += range[i];
                }
                else if(i > (start_index+(2*ray_in_each_partition)) && !std::isinf(range[i])){
                    total_dist_sec_left += range[i];
                }
            }

            RCLCPP_DEBUG(this->get_logger(), "left: %f", total_dist_sec_left);
            RCLCPP_DEBUG(this->get_logger(), "right: %f", total_dist_sec_right);
            RCLCPP_DEBUG(this->get_logger(), "forward: %f", total_dist_sec_front);
            if (total_dist_sec_right > total_dist_sec_front && total_dist_sec_right > total_dist_sec_left){
                res->direction = "Right";
            }
            else if (total_dist_sec_front > total_dist_sec_left){
                res->direction = "Forward";
            }
            else {
                res->direction = "Left";
            }
        }

};

int main(int argc, char **argv){
    rclcpp::init(argc,argv);
    auto node = std::make_shared<DirectionService>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}