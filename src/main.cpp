#include <Arduino.h>
#include "LaserToMap.h"

LaserToMap scanner;

void setup() {
  Serial.begin(115200);
  while (!Serial); // Wait for Serial to connect

  scanner.begin();
  Serial.println("LaserToMap scanner initialized.");
}

void loop() {
  Serial.println("Starting 360° scan...");
  scanner.scan360();        // Rotates and collects data
  scanner.printMap();       // Optional: pretty-print for debug (can be removed if using only JSON)

  delay(2000); // Wait before next scan (adjust if needed)
}
