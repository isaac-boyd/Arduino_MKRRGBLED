#ifndef RGB_LED_H
#define RGB_LED_H

#include <WiFiNINA.h>
#include <utility/wifi_drv.h>

class RGB_LED {
public:
    RGB_LED();
    void red() {
        WiFiDrv::analogWrite(25, 255);
        WiFiDrv::analogWrite(26, 0);
        WiFiDrv::analogWrite(27, 0);
    }
    void orange() {
        WiFiDrv::analogWrite(25, 255);
        WiFiDrv::analogWrite(26, 165);
        WiFiDrv::analogWrite(27, 0);
    }
    void yellow() {
        WiFiDrv::analogWrite(25, 255);
        WiFiDrv::analogWrite(26, 255);
        WiFiDrv::analogWrite(27, 0);
    }
    void green() {
        WiFiDrv::analogWrite(25, 0);
        WiFiDrv::analogWrite(26, 255);
        WiFiDrv::analogWrite(27, 0);
    }
    void blue() {
        WiFiDrv::analogWrite(25, 0);
        WiFiDrv::analogWrite(26, 0);
        WiFiDrv::analogWrite(27, 255);
    }
    void purple() {
        WiFiDrv::analogWrite(25, 160);
        WiFiDrv::analogWrite(26, 32);
        WiFiDrv::analogWrite(27, 240);
    }
    void pink() {
        WiFiDrv::analogWrite(25, 255);
        WiFiDrv::analogWrite(26, 192);
        WiFiDrv::analogWrite(27, 203);
    }
    void gold() {
        WiFiDrv::analogWrite(25, 255);
        WiFiDrv::analogWrite(26, 215);
        WiFiDrv::analogWrite(27, 0);
    }
    void customColor (int R, int G, int B) {
        WiFiDrv::analogWrite(25, R);
        WiFiDrv::analogWrite(26, G);
        WiFiDrv::analogWrite(27, B);
    }
private:
};

#endif // RGB_LED_H
