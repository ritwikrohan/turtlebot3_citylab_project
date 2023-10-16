#include <functional>
#include <memory>
#include <thread>
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "robot_patrol/action/go_to_pose.hpp"
#include "geometry_msgs/msg/pose2_d.hpp"


class GoToPose : public rclcpp::Node {
public:
    explicit GoToPose(const rclcpp::NodeOptions &node_options = rclcpp::NodeOptions())
        : Node("goto_node", node_options) {
        using namespace std::placeholders;

        aserver_ = rclcpp_action::create_server<robot_patrol::action::GoToPose>(
            this,
            "/go_to_pose",
            std::bind(&GoToPose::handle_goal, this, _1, _2),
            std::bind(&GoToPose::handle_cancel, this, _1),
            std::bind(&GoToPose::handle_accepted, this, _1));

        vel_pub_ = create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

        odom_sub_ = create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10, std::bind(&GoToPose::odom_callback, this, _1));
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp_action::Server<robot_patrol::action::GoToPose>::SharedPtr aserver_;
    geometry_msgs::msg::Pose2D current_pos_;
    geometry_msgs::msg::Pose2D desired_pos_;
    double current_yaw;

    void odom_callback(const std::shared_ptr<nav_msgs::msg::Odometry> msg) 
    {    
        double qx = msg->pose.pose.orientation.x;
        double qy = msg->pose.pose.orientation.y;
        double qz = msg->pose.pose.orientation.z;
        double qw = msg->pose.pose.orientation.w;
        double unnormalized_yaw = atan2(2.0 * (qw * qz + qx * qy), qw * qw + qx * qx - qy * qy - qz * qz);
        current_yaw = normalizeAngle(unnormalized_yaw);
        this->current_pos_.x = msg->pose.pose.position.x;
        this->current_pos_.y = msg->pose.pose.position.y;
        this->current_pos_.theta = current_yaw; 

    }

    double normalizeAngle(double angle) 
    {
        while (angle > M_PI) 
        {
            angle -= 2.0 * M_PI;
        }
        while (angle < -M_PI) 
        {
            angle += 2.0 * M_PI;
        }
        return angle;
    }


    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &uid, std::shared_ptr<const robot_patrol::action::GoToPose::Goal> goal) 
    {
        this->desired_pos_.x = goal->goal_pos.x;
        this->desired_pos_.y = goal->goal_pos.y;
        this->desired_pos_.theta = (goal->goal_pos.theta) * M_PI / 180.0;
        (void)uid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<robot_patrol::action::GoToPose>> goal_handle) 
    {
        RCLCPP_INFO(get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<rclcpp_action::ServerGoalHandle<robot_patrol::action::GoToPose>> goal_handle) 
    {
        std::thread{std::bind(&GoToPose::control_loop, this, std::placeholders::_1), goal_handle}.detach();
    }

    void control_loop(const std::shared_ptr<rclcpp_action::ServerGoalHandle<robot_patrol::action::GoToPose>> goal_handle) {
        RCLCPP_INFO(get_logger(), "Executing goal");
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<robot_patrol::action::GoToPose::Feedback>();
        auto result = std::make_shared<robot_patrol::action::GoToPose::Result>();
        auto vel_ = geometry_msgs::msg::Twist();
        rclcpp::Rate loop_rate(5);
        bool goal_reached = false;
        bool covering_distance = true;
        bool covering_orientation = true;
        while(!goal_reached && rclcpp::ok()){
        
        if (goal_handle->is_canceling()) {
                result->status = false;
                goal_handle->canceled(result);
                RCLCPP_INFO(get_logger(), "Goal canceled");
                return;
            }
        double dtg_tolerance = 0.1; //distance to goal tolerance
        double atg_tolerance = 0.5; //angle to goal tolerance
        double orientation_tolerance = 0.3;
        double delta_x = this->desired_pos_.x - this->current_pos_.x;
        double delta_y = this->desired_pos_.y - this->current_pos_.y;
        double euclidean_distance = sqrt(pow(delta_x,2)+pow(delta_y,2));
        double angle_towards_goal = atan2(delta_y,delta_x);
        double angle_difference = angle_towards_goal - this->current_pos_.theta;
        double angle_diff_norm = normalizeAngle(angle_difference);
        double orientation_difference = this->desired_pos_.theta - this->current_pos_.theta;
        RCLCPP_DEBUG(this->get_logger(), "orientation: %f", orientation_difference);
        if (euclidean_distance > dtg_tolerance && covering_distance){
            vel_.linear.x = 0.2;
            vel_.angular.z = angle_diff_norm;
            vel_pub_->publish(vel_);
        }
        else if (std::abs(orientation_difference) > orientation_tolerance && covering_orientation){
            covering_distance = false;
            double delta_yaw_n = normalizeAngle(this->desired_pos_.theta);
            if (delta_yaw_n > 0) {
                 vel_.angular.z = 1.0;
                vel_.linear.x = 0.0;
                vel_pub_->publish(vel_);
            } else {
                vel_.angular.z = -1.0;
                vel_.linear.x = 0.0;
                vel_pub_->publish(vel_); 
            }   
        }
        else{
            covering_distance = false;
            vel_.angular.z = 0.0;
            vel_.linear.x = 0.0;
            vel_pub_->publish(vel_);
            goal_reached = true;
        }

            feedback->current_pos = this->current_pos_;
            goal_handle->publish_feedback(feedback);
            loop_rate.sleep();

        
        }

        if (rclcpp::ok()) {
                result->status = true;
                goal_handle->succeed(result);
                RCLCPP_INFO(get_logger(), "Goal succeeded");
            }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    auto action_server = std::make_shared<GoToPose>();

    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(action_server);
    executor.spin();

    rclcpp::shutdown();
    return 0;
}

