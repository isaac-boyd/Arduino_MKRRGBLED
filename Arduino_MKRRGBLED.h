#ifndef RGB_LED_H
#define RGB_LED_H

#include <WiFiNINA.h>
#include <utility/wifi_drv.h>

class RGB_LED {
public:
    RGB_LED();
    void begin();
    void red();
    void orange();
    void yellow();
    void green();
    void blue();
    void purple();
    void pink();
    void gold();
    void slide();
    void fade(uint_8 color);
    void customColor(int R, int G, int B);
private:
};

#endif // RGB_LED_H
