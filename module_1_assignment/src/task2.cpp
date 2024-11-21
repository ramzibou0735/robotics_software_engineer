#include <iostream>
#include <string>

using namespace std;

class Robot {
private:
  const string sensor1 = "Thermometer";
  const string sensor2 = "Distance Sensor";
  const int temperature = 20;
  const int distance = 100;

public:
  Robot() {
    cout << "Successfully created a robot with a " << sensor1 << " and a "
         << sensor2 << "." << endl;
  }
  void tempReading() {
    cout << "Reading " << sensor1 << " data ... " << temperature << " °C"
         << endl;
  }
  void distReading() {
    cout << "Reading " << sensor2 << " data ... " << distance << " cm" << endl;
  }
};

int main() {
  Robot robot;
  robot.tempReading();
  robot.distReading();

  return 0;
}