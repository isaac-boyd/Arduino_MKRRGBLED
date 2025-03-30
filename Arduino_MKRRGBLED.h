#ifndef MKRRGBLED_H
#define MKRRGBLED_H

#include <WiFiNINA.h>
#include <utility/wifi_drv.h>

class MKRRGBLED {
public:
    MKRRGBLED();
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

#endif // MKRRGBLED_H
