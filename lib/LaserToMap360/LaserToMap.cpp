#include "LaserToMap.h"

LaserToMap::LaserToMap()
  : stepper(AccelStepper::HALF4WIRE, 8, 10, 9, 11) {}

void LaserToMap::begin() {
  Wire.begin();
  sensor.init();
  sensor.setTimeout(500);
  sensor.startContinuous();
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(500);
  stepper.setSpeed(500);
}

void LaserToMap::scan360() {
  int stepsPerDegree = LaserToMap::totalSteps / 360;

  for (int angle = 0; angle < 360; angle++) {
    stepper.runToNewPosition(angle * stepsPerDegree);
    delay(20); // allow stepper to settle
    distances[angle] = sensor.readRangeContinuousMillimeters();
  }

  // Return to starting position
  stepper.runToNewPosition(0);
}

void LaserToMap::printMap() {
  for (int angle = 0; angle < 360; angle++) {
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print("°, Distance: ");
    Serial.print(distances[angle]);
    Serial.println(" mm");
  }
}
