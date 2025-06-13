#ifndef LaserToMap_h
#define LaserToMap_h

#include <Arduino.h>
#include <VL53L0X.h>
#include <AccelStepper.h>

class LaserToMap {
public:
  LaserToMap();
  void begin();
  void scan360();
  void printMap();

private:
  VL53L0X sensor;
  AccelStepper stepper;
  static const int totalSteps = 4096; // Full rotation
  uint16_t distances[360];
};

#endif
