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
        


        // void direction_callback(const std::shared_ptr<robot_patrol::srv::GetDirection::Request> req, const std::shared_ptr<robot_patrol::srv::GetDirection::Response> res){
        //     sensor_msgs::msg::LaserScan laser_scan_data = req->laser_data;
        //     std::vector<float> range = laser_scan_data.ranges;
        //     int rays = range.size();
        //     int start_index = rays/4;
        //     int end_index = 3*(rays/4);
        //     int ray_in_each_partition = rays/6;
        //     double total_dist_sec_right = 0;
        //     double total_dist_sec_front = 0;
        //     double total_dist_sec_left = 0;
        //     for (int i = start_index; i<=end_index;i++){

        //         if(i<(start_index+ray_in_each_partition) && !std::isinf(range[i])){
        //             total_dist_sec_right += range[i];
        //         }

        //         else if (i>(start_index+ray_in_each_partition) && i < (start_index+(2*ray_in_each_partition)) && !std::isinf(range[i])){
        //             total_dist_sec_front += range[i];
        //         }
        //         else if(i > (start_index+(2*ray_in_each_partition)) && !std::isinf(range[i])){
        //             total_dist_sec_left += range[i];
        //         }
        //     }

        //     RCLCPP_INFO(this->get_logger(), "left: %f", total_dist_sec_left);
        //     RCLCPP_INFO(this->get_logger(), "right: %f", total_dist_sec_right);
        //     RCLCPP_INFO(this->get_logger(), "forward: %f", total_dist_sec_front);
        //     if (total_dist_sec_right > total_dist_sec_front && total_dist_sec_right > total_dist_sec_left){
        //         res->direction = "right";
        //     }
        //     else if (total_dist_sec_front > total_dist_sec_left){
        //         res->direction = "forward";
        //     }
        //     else {
        //         res->direction = "left";
        //     }
        // }
        double MinRay(const std::vector<float>& range, int start_index) 
        {
            
            int end_index = start_index + 50;
            double min_length = std::numeric_limits<double>::max();
            for (int i = start_index-50; i <= end_index; i++) {
                if (!std::isinf(range[i]) && range[i] < min_length) {
                    min_length = range[i];
                }
            }

            return min_length;
        }

        void direction_callback(const std::shared_ptr<robot_patrol::srv::GetDirection::Request> req, const std::shared_ptr<robot_patrol::srv::GetDirection::Response> res) {
            sensor_msgs::msg::LaserScan laser_scan_data = req->laser_data;
            std::vector<float> range = laser_scan_data.ranges;
            int rays = range.size();
            int start_index = rays / 4;
            int end_index = 3 * (rays / 4);
            int ray_in_each_partition = rays / 6;
            double total_dist_sec_right = 0;
            double total_dist_sec_front = 0;
            double total_dist_sec_left = 0;
            double max_dist_sec_right = 0;
            double max_dist_sec_front = 0;
            double max_dist_sec_left = 0;

            for (int i = start_index; i <= end_index; i++) {
                if (i < (start_index + ray_in_each_partition) && !std::isinf(range[i])) {
                    total_dist_sec_right += MinRay(range, i);
                    max_dist_sec_right = std::max(max_dist_sec_right, static_cast<double>(range[i]));
                } else if (i > (start_index + ray_in_each_partition) && i < (start_index + (2 * ray_in_each_partition)) && !std::isinf(range[i])) {
                    total_dist_sec_front += MinRay(range, i);
                    max_dist_sec_front = std::max(max_dist_sec_front, static_cast<double>(range[i]));
                } else if (i > (start_index + (2 * ray_in_each_partition)) && !std::isinf(range[i])) {
                    total_dist_sec_left += MinRay(range, i);
                    max_dist_sec_left = std::max(max_dist_sec_left, static_cast<double>(range[i]));
                }
            }

            RCLCPP_INFO(this->get_logger(), "left: %f (max: %f)", total_dist_sec_left, max_dist_sec_left);
            RCLCPP_INFO(this->get_logger(), "right: %f (max: %f)", total_dist_sec_right, max_dist_sec_right);
            RCLCPP_INFO(this->get_logger(), "forward: %f (max: %f)", total_dist_sec_front, max_dist_sec_front);

            // Calculate a score that combines max and sum values
            double score_right = max_dist_sec_right + total_dist_sec_right;
            double score_front = max_dist_sec_front + total_dist_sec_front;
            double score_left = max_dist_sec_left + total_dist_sec_left;

            // Choose the direction based on the score
            if (score_right >= score_front && score_right >= score_left) {
                res->direction = "right";
            } else if (score_front >= score_left) {
                res->direction = "forward";
            } else {
                res->direction = "left";
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