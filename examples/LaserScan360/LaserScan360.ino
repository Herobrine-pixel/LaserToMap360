#include <LaserToMap360.h>
#include <Wire.h>
#include <VL53L5CX.h>      // Make sure you have this installed
#include <Servo.h>

// Pin definitions
#define SERVO_PIN 9

LaserToMap360 scanner(SERVO_PIN);  // Create scanner with servo pin 9

void setup() {
  Serial.begin(115200);
  Wire.begin();

  if (!scanner.begin()) {
    Serial.println("Failed to initialize scanner!");
    while (1);
  }

  Serial.println("LaserToMap360 initialized. Starting 360° scan...");
}

void loop() {
  scanner.scan360(5);  // Step every 5 degrees

  delay(1000); // Wait 1s before next full scan
}
