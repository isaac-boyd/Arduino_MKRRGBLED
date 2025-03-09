#include <WiFiNINA.h>
#include <utility/wifi_drv.h>
#inlcude "RGB_LED.h"
RGB_LED::RGB_LED(){}
void RGB_LED::red(){}
void RGB_LED::orange(){}
void RGB_LED::yellow(){}
void RGB_LED::green(){}
void RGB_LED::blue(){}
void RGB_LED::purple(){}
void RGB_LED::pink(){}
void RGB_LED::gold(){}
void RGB_LED::customColor(){
  WiFiDrv::analogWrite(25, R);
  WiFiDrv::analogWrite(26, G);
  WiFiDrv::analogWrite(27, B);
}
