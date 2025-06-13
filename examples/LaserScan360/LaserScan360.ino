#include <LaserToMap.h>

LaserToMap mapper;

void setup() {
  Serial.begin(115200);
  mapper.begin();
  delay(1000);
}

void loop() {
  mapper.scan360();
  mapper.printMap();
  delay(3000); // Wait before next scan
}
