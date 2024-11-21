#ifndef SENSORLIB_H
#define SENSORLIB_H

#include <iostream>

namespace Sensors {
  
template <typename Temperature>
class TemperatureSensor {
private:
  Temperature temperature;

public:
  TemperatureSensor(Temperature temp);
  void readSensor() const;
};
template <typename Distance> 
class DistanceSensor {
private:
  Distance distance;

public:
  DistanceSensor(Distance dist);
  void readSensor() const;
};

} // namespace Sensors
#endif // SENSORLIB_H