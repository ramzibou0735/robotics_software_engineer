#include "../include/task3.hpp"

using namespace std;

namespace Sensors {
template <typename Temperature>
TemperatureSensor<Temperature>::TemperatureSensor(Temperature temp)
    : temperature(temp) {
  cout << "You've installed a Temperature Sensor" << endl;
}
template <typename Temperature>
void TemperatureSensor<Temperature>::readSensor() const {
  cout << "Reading Temperature sensor...: " << temperature << endl;
}
template <typename Distance>
DistanceSensor<Distance>::DistanceSensor(Distance dist) : distance(dist) {
  cout << "You've installed a Distance Sensor" << endl;
}
template <typename Distance> void DistanceSensor<Distance>::readSensor() const {
  cout << "Reading Distance sensor...: " << distance << endl;
}

}

int main() {
    Sensors::DistanceSensor<char> Dsensor1('1');
    Dsensor1.readSensor();
    Sensors::DistanceSensor<double> Dsensor2(100.1);
    Dsensor2.readSensor();
    Sensors::DistanceSensor<std::string> Dsensor3("100");
    Dsensor3.readSensor();
    Sensors::TemperatureSensor<char> Tsensor1('1');
    Tsensor1.readSensor();
    Sensors::TemperatureSensor<double> Tsensor2(100.1);
    Tsensor2.readSensor();
    Sensors::TemperatureSensor<std::string> Tsensor3("100");
    Tsensor3.readSensor();
    return 0;
}