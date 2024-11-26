#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <iostream>
#include <chrono>
#include <memory>
#include <functional>

class BackAndForth : public rclcpp::Node {
public:
    BackAndForth() : Node("back_and_forth_node"), y(1.0) {
    this->declare_parameter<std::string>("cmd_vel_topic", "/turtle1/cmd_vel");
    std::string cmd_vel_topic=this->get_parameter("cmd_vel_topic").as_string();
    cmd_vel_publisher = this->create_publisher<geometry_msgs::msg::Twist>(cmd_vel_topic, 10);

        timer = this->create_wall_timer(
            std::chrono::milliseconds(1000),  
            std::bind(&BackAndForth::publish_velocity, this)
        );

        RCLCPP_INFO(this->get_logger(), "3 central turtles will be going back and forth");
    }
private:
    void publish_velocity(){
        auto msg = geometry_msgs::msg::Twist();
        msg.linear.y = y;
        cmd_vel_publisher->publish(msg);
        y = -y;
    }
    double y;

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher;
    rclcpp::TimerBase::SharedPtr timer;
};
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<BackAndForth>());
    rclcpp::shutdown();
    return 0;
}