#include "wifi.hpp"

auto WifiHandler::tryReconnect(String SSID, String passphrase) -> int
{
    if(WiFi.status() == WL_CONNECTED)
        return 0;
    
    if(WiFi.status() == WL_CONNECTION_LOST || WiFi.status() == WL_CONNECT_FAILED)
        WiFi.disconnect();

    while(WiFi.status() != WL_CONNECTED)
    {
        Serial.print("Connecting to WiFi...");
        WiFi.begin(SSID.c_str(), passphrase.c_str());

        // wait 10s for connection
        delay(10000);
    }
    Serial.println("...Connection established");
    Serial.println("Signal Strength: " + String(WiFi.RSSI()) + " dBm");

    return WiFi.status();
}