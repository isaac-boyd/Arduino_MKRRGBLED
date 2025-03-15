#ifndef Arduino_MKRRGBLED_H
#define Arduino_MKRRGBLED_H

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
    void customColor(int R, int G, int B);
private:
};

#endif // Arduino_MKRRGBLED_H
