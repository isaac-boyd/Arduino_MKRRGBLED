#include <WiFiNINA.h>
#include <utility/wifi_drv.h>
#include "Arduino_MKRRGBLED.h"

MKRRGBLED::MKRRGBLED() {}
void MKRRGBLED::begin(){
  WiFiDrv::pinMode(25, OUTPUT); //define green pin
  WiFiDrv::pinMode(26, OUTPUT); //define red pin
  WiFiDrv::pinMode(27, OUTPUT); //
}
void MKRRGBLED::red() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 0);
    WiFiDrv::analogWrite(27, 0);
}

void MKRRGBLED::orange() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 165);
    WiFiDrv::analogWrite(27, 0);
}

void MKRRGBLED::yellow() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 255);
    WiFiDrv::analogWrite(27, 0);
}

void MKRRGBLED::green() {
    WiFiDrv::analogWrite(25, 0);
    WiFiDrv::analogWrite(26, 255);
    WiFiDrv::analogWrite(27, 0);
}

void MKRRGBLED::blue() {
    WiFiDrv::analogWrite(25, 0);
    WiFiDrv::analogWrite(26, 0);
    WiFiDrv::analogWrite(27, 255);
}

void MKRRGBLED::purple() {
    WiFiDrv::analogWrite(25, 160);
    WiFiDrv::analogWrite(26, 32);
    WiFiDrv::analogWrite(27, 240);
}

void MKRRGBLED::pink() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 192);
    WiFiDrv::analogWrite(27, 203);
}

void MKRRGBLED::gold() {
    WiFiDrv::analogWrite(25, 255);
    WiFiDrv::analogWrite(26, 215);
    WiFiDrv::analogWrite(27, 0);
}
void MKRRGBLED::customColor(int R, int G, int B) {
    WiFiDrv::analogWrite(25, R);
    WiFiDrv::analogWrite(26, G);
    WiFiDrv::analogWrite(27, B);
}
 
