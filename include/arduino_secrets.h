#ifndef ARDUINO_SECRETS_H
#define ARDUINO_SECRETS_H

#include <Arduino_ConnectionHandler.h>

/* A complete list of supported boards with WiFi is available here:
 * https://github.com/arduino-libraries/ArduinoIoTCloud/#what
 */
#if defined(BOARD_HAS_WIFI)
  #define SECRET_WIFI_SSID "YOUR-SSID" //TODO!!! Enter your WiFi SSID
  #define SECRET_WIFI_PASS "YOUR-WLAN-PASSPHRASE" //TODO!!! Enter your WiFi Password
#endif

/* ESP8266 ESP32 */
#if defined(BOARD_HAS_SECRET_KEY)
  #define SECRET_DEVICE_KEY "my-device-password"
#endif

/* MKR GSM 1400 */ /* MKR NB 1500 */ /* Portenta CAT.M1/NB IoT GNSS Shield */
#if defined(BOARD_HAS_GSM) || defined(BOARD_HAS_NB) || defined(BOARD_HAS_CATM1_NBIOT)
  #define SECRET_PIN ""
  #define SECRET_APN ""
  #define SECRET_LOGIN ""
  #define SECRET_PASS ""
#endif

/* MKR WAN 1300/1310 */
#if defined(BOARD_HAS_LORA)
  #define SECRET_APP_EUI ""
  #define SECRET_APP_KEY ""
#endif

/* Portenta H7 + Ethernet shield */
#if defined(BOARD_HAS_ETHERNET)
  #define SECRET_OPTIONAL_IP ""
  #define SECRET_OPTIONAL_DNS ""
  #define SECRET_OPTIONAL_GATEWAY ""
  #define SECRET_OPTIONAL_NETMASK ""
#endif

#endif /* ARDUINO_SECRETS_H */