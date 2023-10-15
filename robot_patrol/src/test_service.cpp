#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include "rclcpp/service.hpp"
#include "rclcpp/subscription.hpp"
#include "robot_patrol/srv/detail/get_direction__struct.hpp"
#include "robot_patrol/srv/get_direction.hpp"
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"


#include <chrono>
#include <cstdlib>
#include <future>
#include <memory>

using namespace std::chrono_literals;

class DistanceClient : public rclcpp::Node {
private:
  rclcpp::Client<robot_patrol::srv::GetDirection>::SharedPtr client_;
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
  rclcpp::TimerBase::SharedPtr timer_;
  bool service_done_ = false;


  void timer_callback() {
    while (!client_->wait_for_service(1s)) {
      if (!rclcpp::ok()) {
        RCLCPP_ERROR(
            this->get_logger(),
            "Client interrupted while waiting for service. Terminating...");
        return;
      }
      RCLCPP_INFO(this->get_logger(),
                  "Service Unavailable. Waiting for Service...");
    }
  }

public:
  DistanceClient() : Node("service_client") {
    client_ = this->create_client<robot_patrol::srv::GetDirection>("/direction_service");
    scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>("/scan", 10, std::bind(&DistanceClient::laser_callback,this,std::placeholders::_1));
    timer_ = this->create_wall_timer(
        1s, std::bind(&DistanceClient::timer_callback, this));
  }

  bool is_service_done() const { return this->service_done_; }

  void laser_callback(const std::shared_ptr<sensor_msgs::msg::LaserScan> msg){
    // Create a service request with the received LaserScan data
    auto request = std::make_shared<robot_patrol::srv::GetDirection::Request>();
    request->laser_data = *msg;

    // Send the request to the service
    auto result_future = client_->async_send_request(request, std::bind(&DistanceClient::response_callback, this,std::placeholders::_1));
  }
    void response_callback(rclcpp::Client<robot_patrol::srv::GetDirection>::SharedFuture future) {
            auto status = future.wait_for(1s);
            if (status == std::future_status::ready) {
                auto result = future.get();
                if (result) {
                    RCLCPP_INFO(this->get_logger(), "Service returned: %s", result->direction.c_str());
                } else {
                    RCLCPP_ERROR(this->get_logger(), "Service call failed.");
                }
                service_done_ = true;
            } else {
                RCLCPP_INFO(this->get_logger(), "Service In-Progress...");
            }
        }

};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);

  auto service_client = std::make_shared<DistanceClient>();
  while (!service_client->is_service_done()) {
    rclcpp::spin_some(service_client);
  }

  rclcpp::shutdown();
  return 0;
}