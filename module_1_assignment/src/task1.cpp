#include <iostream>
#include <string>

using namespace std;

namespace SlowRobot {
class Robot {
private:
  const string name;
  double speed;
  float weight;
  float size;
  int num_of_sensors;

public:
  Robot(const string robotName, double robotSpeed, float robotWeight,
        float robotSize, int numSensors)
      : name(robotName), speed(robotSpeed), weight(robotWeight),
        size(robotSize), num_of_sensors(numSensors) {
    cout << "You have created a robot named: " << name
         << " with a speed of: " << speed
         << " m/s, the robot weights: " << weight << " KG and is: " << size
         << " meter(s) long, equiped with: " << num_of_sensors << " sensor(s)"
         << endl;
  }
  void moveForward() {
    cout << "The robot moves forward at a speed of: " << speed / 4 << endl;
  }
  void moveBackward() {
    cout << "The robot moves backwards at a speed of: " << -speed / 4 << endl;
  }
  void stop() { cout << "The robot's speed drops to 0" << endl; }
};
} // namespace SlowRobot
namespace FastRobot {
class Robot {
private:
  const string name;
  double speed;
  float weight;
  float size;
  int num_of_sensors;

public:
  Robot(const string robotName, double robotSpeed, float robotWeight,
        float robotSize, int numSensors)
      : name(robotName), speed(robotSpeed), weight(robotWeight),
        size(robotSize), num_of_sensors(numSensors) {
    cout << "You have created a robot named: " << name
         << " with a speed of: " << speed
         << " m/s, the robot weights: " << weight << " KG and is: " << size
         << " meter(s) long, equiped with: " << num_of_sensors << " sensor(s)"
         << endl;
  }
  void moveForward() {
    cout << "The robot moves forward at a speed of: " << speed << endl;
  }
  void moveBackward() {
    cout << "The robot moves backwards at a speed of: " << -speed << endl;
  }
  void stop() { cout << "The robot's speed drops to 0" << endl; }
};
} // namespace FastRobot

int main() {
  FastRobot::Robot robot1("F11", 12.0, 10.0, 0.3, 4);
  robot1.moveForward();
  robot1.moveBackward();
  robot1.stop();

  SlowRobot::Robot robot2("Turtlebot3", 3.0, 3.0, 0.6, 5);
  robot2.moveForward();
  robot2.moveBackward();
  robot2.stop();
  return 0;
}
