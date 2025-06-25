#ifndef LASER_TO_MAP_H
#define LASER_TO_MAP_H

#include <Arduino.h>
#include <Wire.h>
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
  int distances[360];
  static const int totalSteps = 2048; // steps for full rotation (adjust for your motor/driver)
};

#endif
