#include <Arduino_MKRRGBLED.h>


RGB_LED led;
void setup() {
  led.begin();
}

void loop() {
  led.red();
}
