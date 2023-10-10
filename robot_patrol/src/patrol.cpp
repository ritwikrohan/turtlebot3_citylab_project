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
        timer_ = this->create_wall_timer(std::chrono::milliseconds(220),std::bind(&Patrol::controlLoop, this), timer_callback_group_);
    }

private:
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_publisher_;
    rclcpp::TimerBase::SharedPtr timer_; 
    double direction_; 
    rclcpp::CallbackGroup::SharedPtr timer_callback_group_;
    rclcpp::CallbackGroup::SharedPtr scan_callback_group_;
    int index = 0;
    double mx_dist = 0;
    int xedni = 0;
    

    // void laserCallback(const sensor_msgs::msg::LaserScan::SharedPtr laser_data) {

    //     std::vector<float> ranges = laser_data->ranges;

    //     double safest_angle = 0.0;
    //     double max_distance = 0.0;
    //     double range1 = ranges[180];
    //     double range2 = ranges[360];
    //     double range3 = ranges[540];
    //     // double range4 = ranges[i];

    //     int num_ranges = ranges.size();
    //     int start_index = num_ranges / 4;
    //     int end_index = 3 * num_ranges / 4;

    //     for (int i = start_index; i <= end_index; ++i) {
    //         double range = ranges[i];

    //         if (!std::isinf(range) && range > max_distance) {
    //             max_distance = range;
    //             safest_angle = laser_data->angle_min + i * laser_data->angle_increment;
    //             this->index = i;
    //             this->mx_dist = max_distance;
    //         }

    //     }

    //     // direction_ = safest_angle;
    //     RCLCPP_INFO(this->get_logger(), "safe set at index and distance [%f, %d, %f]", direction_,index, mx_dist);
    //     RCLCPP_INFO(this->get_logger(), "dist right and front and your max [%f, %f, %f ]", range1,range2,range3);
        
    
    //     direction_ = safest_angle;
    //     // RCLCPP_INFO(this->get_logger(), "safe set at angle and max average distance [%f, %f]", direction_, max_average_distance);
    // }
    void laserCallback(const sensor_msgs::msg::LaserScan::SharedPtr laser_data) {
        std::vector<float> ranges = laser_data->ranges;

        int num_ranges = ranges.size();
        int window_size = 100;  
        double safest_angle = 0.0;
        double max_average_distance = 0.0;

        for (int i = 180; i < 540; ++i) {
            // Calculate the starting and ending indices of the window
            int start_index = i - window_size / 2;
            int end_index = i + window_size / 2;

            // Ensure that the window indices are within valid bounds
            if (start_index < 0) start_index = 0;
            if (end_index >= num_ranges) end_index = num_ranges - 1;

            // Calculate the average distance within the window
            double average_distance = 0.0;
            for (int j = start_index; j <= end_index; ++j) {
                double range = ranges[j];
                if (!std::isinf(range)) {
                    average_distance += range;
                }
            }
            average_distance /= (end_index - start_index + 1);

            // Update the safest direction if the current window has a larger average distance
            if (average_distance > max_average_distance) {
                max_average_distance = average_distance;
                safest_angle = laser_data->angle_min + i * laser_data->angle_increment;
                this->xedni = i;
            }
        }

        direction_ = safest_angle;
        RCLCPP_INFO(this->get_logger(), "Safe set at angle and max average distance [%f, %f, %d]", direction_, max_average_distance, xedni);
    }



    void controlLoop() {

        geometry_msgs::msg::Twist velocity_msg;
        velocity_msg.linear.x = 0.05; //0.1 - (std::abs(0.25*direction_));
        velocity_msg.angular.z = (direction_/2.0);
        RCLCPP_INFO(this->get_logger(), "safe pub = %f", direction_/2);
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
