/* 
 
  CloudColoredLight color; add this as a varible in the arduino cloud things setup page.
  video on how to do it:https://raw.githubusercontent.com/isaac-boyd/Arduino_MKRRGBLED/refs/heads/main/examples/Arduino_Cloud_Control/Cloud_Control_video.gif
 Copy This Sketch into the Arduino Cloud Thing.
*/

#include "thingProperties.h"
#include <Arduino_MKRRGBLED.h>
MKRRGBLED RGBled;
void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500); 

  // Defined in thingProperties.h
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  uint8_t r, g, b;
  color.getValue().getRGB(r, g, b);
   RGBled.customColor(r, b, g);
}

/*
  Since Color is READ_WRITE variable, onColorChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onColorChange()  {
  // Add your code here to act upon Color change
}



