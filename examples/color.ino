#include <Arduino_MKRRGBLED.h>


MKRRGBLED led;
void setup() {
  led.begin();
}

void loop() {
  led.red();
}
