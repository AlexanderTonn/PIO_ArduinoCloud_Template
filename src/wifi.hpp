#ifndef WIFI_HPP
#define WIFI_HPP

#include <Arduino.h>
#include <WiFiNINA.h>


class WifiHandler
{
    private: 
        int status = WL_IDLE_STATUS;     // the Wifi radio's status

    public: 
        auto tryReconnect(String, String) -> int;

};




#endif // WIFI_HPP