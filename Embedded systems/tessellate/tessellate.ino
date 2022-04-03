// Library
#include <WiFi.h>
#include <ESP8266WiFi.h>
#include <Hash.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <Arduino.h>
#include <espnow.h>


// Network Setup

const char* ssid     = "Tessellate_network";
const char* password = "123456789";

// MAC Address of your receiver 
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

void setup() {
  mac_setup();

}

void loop() {
  

}
