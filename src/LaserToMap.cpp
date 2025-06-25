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

  stepper.setCurrentPosition(0);
}

void LaserToMap::scan360() {
  int stepsPerDegree = totalSteps / 360;

  for (int angle = 0; angle < 360; angle++) {
    stepper.runToNewPosition(angle * stepsPerDegree);
    delay(20); // settle

    int distance = sensor.readRangeContinuousMillimeters();
    distances[angle] = distance;

    // Send JSON for web app
    Serial.print("{\"angle\":");
    Serial.print(angle);
    Serial.print(",\"distance\":");
    Serial.print(distance);
    Serial.println("}");
  }

  // Return to start
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
