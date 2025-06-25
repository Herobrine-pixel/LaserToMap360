
#include <LaserToMap360.h>

LaserToMap360 scanner;

void setup() {
    Serial.begin(115200);
    while (!Serial);

    if (!scanner.begin()) {
        Serial.println("Failed to initialize scanner!");
        while (1);
    }
}

void loop() {
    scanner.scanAndSendJSON();
    delay(100); // Adjust scan frequency
}
