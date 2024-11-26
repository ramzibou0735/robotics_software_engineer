#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <iostream>
#include <chrono>
#include <memory>
#include <functional>

class DrawCircleNode : public rclcpp::Node {
public:
    DrawCircleNode() 
        : Node("draw_circle_node"), theta(1.0), angular_speed(1.0) {

        this->declare_parameter<double>("radius", 1.0);
        radius = this->get_parameter("radius").as_double();
        this->declare_parameter<std::string>("cmd_vel_topic", "/turtle1/cmd_vel");
        std::string cmd_vel_topic=this->get_parameter("cmd_vel_topic").as_string();
        cmd_vel_publisher = this->create_publisher<geometry_msgs::msg::Twist>(cmd_vel_topic, 10);

        timer = this->create_wall_timer(
            std::chrono::milliseconds(100),  
            std::bind(&DrawCircleNode::publish_velocity, this)
        );

        RCLCPP_INFO(this->get_logger(), "Drawing a Circle");
    }

private:
    void publish_velocity() {
        auto msg = geometry_msgs::msg::Twist();
        msg.linear.x = radius * std::cos(theta);
        msg.linear.y = radius * std::sin(theta);
        msg.angular.z = angular_speed; 
        cmd_vel_publisher->publish(msg);
    }

    double radius;                 
    double theta;           
    double angular_speed; 

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher;
    rclcpp::TimerBase::SharedPtr timer;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DrawCircleNode>());
    rclcpp::shutdown();
    return 0;
}
