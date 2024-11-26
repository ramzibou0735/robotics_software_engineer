#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"

#include <cmath>
#include <chrono>
#include <memory>
#include <functional>

class LogarithmicCurveNode : public rclcpp::Node {
public:
    LogarithmicCurveNode() 
        : Node("logarithmic_curve_node"), r_0(0.5), k(0.1), theta(0.0), angular_speed(0.5) {
        this->declare_parameter<std::string>("cmd_vel_topic", "/turtle1/cmd_vel");
        std::string cmd_vel_topic=this->get_parameter("cmd_vel_topic").as_string();
        cmd_vel_publisher = this->create_publisher<geometry_msgs::msg::Twist>(cmd_vel_topic, 10);

        timer = this->create_wall_timer(
            std::chrono::milliseconds(100),  
            std::bind(&LogarithmicCurveNode::publish_velocity, this)
        );

        RCLCPP_INFO(this->get_logger(), "Logarithmic curve node started");
    }

private:
    void publish_velocity() {

        double r = r_0 * std::exp(k * theta);

        auto msg = geometry_msgs::msg::Twist();


        msg.linear.x = r * std::cos(theta); 
        msg.linear.y = r * std::sin(theta);

        msg.angular.z = angular_speed; 

        cmd_vel_publisher->publish(msg);

        theta += angular_speed * 0.1;
        
    }

   
    double r_0;           
    double k;           
    double theta;           
    double angular_speed; 

  
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher;
    rclcpp::TimerBase::SharedPtr timer;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LogarithmicCurveNode>());
    rclcpp::shutdown();
    return 0;
}
