#include <WiFiNINA.h>
#include <utility/wifi_drv.h>
#include "Arduino_MKRRGBLED.h"

RGB_LED::RGB_LED() {}
void RGB_LED::begin(){
  WiFiDrv::pinMode(25, OUTPUT); //define green pin
  WiFiDrv::pinMode(26, OUTPUT); //define red pin
  WiFiDrv::pinMode(27, OUTPUT); //
}
void RGB_LED::red() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 0);
    WiFiDrv::analogWrite(27, 0);
}

void RGB_LED::orange() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 165);
    WiFiDrv::analogWrite(27, 0);
}

void RGB_LED::yellow() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 255);
    WiFiDrv::analogWrite(27, 0);
}

void RGB_LED::green() {
    WiFiDrv::analogWrite(25, 0);
    WiFiDrv::analogWrite(26, 255);
    WiFiDrv::analogWrite(27, 0);
}

void RGB_LED::blue() {
    WiFiDrv::analogWrite(25, 0);
    WiFiDrv::analogWrite(26, 0);
    WiFiDrv::analogWrite(27, 255);
}

void RGB_LED::purple() {
    WiFiDrv::analogWrite(25, 160);
    WiFiDrv::analogWrite(26, 32);
    WiFiDrv::analogWrite(27, 240);
}

void RGB_LED::pink() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 192);
    WiFiDrv::analogWrite(27, 203);
}

void RGB_LED::gold() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 215);
    WiFiDrv::analogWrite(27, 0);
}
void RGB_LED::customColor(int R, int G, int B) {
    WiFiDrv::analogWrite(25, R);
    WiFiDrv::analogWrite(26, G);
    WiFiDrv::analogWrite(27, B);
}
 
