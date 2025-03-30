#include <Arduino_MKRRGBLED.h>


MKRRGBLED RGBled;
void setup() {
  RGBled.begin();
}

void loop() {
  RGBled.red();
}
