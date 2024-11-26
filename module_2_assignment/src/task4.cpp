#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <cmath>
#include <iostream>
#include <chrono>
#include <memory>
#include <functional>

class Task4 : public rclcpp::Node {
public:
    Task4() : Node("task4") {
    this->declare_parameter<double>("linearx", 1.0);
    linearx = this->get_parameter("linearx").as_double();
    this->declare_parameter<double>("lineary", 1.0);
    lineary = this->get_parameter("lineary").as_double();
    this->declare_parameter<std::string>("cmd_vel_topic", "/turtle1/cmd_vel");
    std::string cmd_vel_topic=this->get_parameter("cmd_vel_topic").as_string();
    cmd_vel_publisher = this->create_publisher<geometry_msgs::msg::Twist>(cmd_vel_topic, 10);

        timer = this->create_wall_timer(
            std::chrono::milliseconds(100),  
            std::bind(&Task4::publish_velocity, this)
        );
    }
private:
    void publish_velocity(){
        auto msg = geometry_msgs::msg::Twist();
        msg.linear.x = linearx;
        msg.linear.y = lineary;
        cmd_vel_publisher->publish(msg);
    }
    double lineary;
    double linearx;

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher;
    rclcpp::TimerBase::SharedPtr timer;
};
int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Task4>());
    rclcpp::shutdown();
    return 0;
}