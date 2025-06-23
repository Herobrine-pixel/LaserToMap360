#ifndef LASERTOMAP_H
#define LASERTOMAP_H

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

  static const int totalSteps = 2048; // 28BYJ-48 one full rotation

private:
  VL53L0X sensor;
  AccelStepper stepper;
  int distances[360]; // store distance for each degree
};

#endif
