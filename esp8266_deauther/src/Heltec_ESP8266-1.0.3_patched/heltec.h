#ifndef _HELTEC_H_
#define _HELTEC_H_

#if defined(ESP8266)

#include <Arduino.h>


#define WIFI_Kit_8 true

#define PIN_WIRE_SDA (4)
#define PIN_WIRE_SCL (5)

#define LED_BUILTIN 0

static const uint8_t OLED_RST = 16;

static const uint8_t D0   = 16;
static const uint8_t D1   = 5;
static const uint8_t D2   = 4;
static const uint8_t D3   = 0;
static const uint8_t D6   = 12;
static const uint8_t D7   = 13;
static const uint8_t D8   = 15;
static const uint8_t RX   = 3;
static const uint8_t TX   = 1;



#if defined( WIFI_Kit_8 )
#include <Wire.h>
#include "oled/SSD1306Wire.h"

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 32

#endif

class Heltec_ESP8266 {

 public:
    Heltec_ESP8266();
	~Heltec_ESP8266();

    void begin(bool DisplayEnable=true, bool SerialEnable=true);
    SSD1306Wire *display;
};

extern Heltec_ESP8266 Heltec;

#else
#error "This library only supports boards with ESP8266 processor."
#endif


#endif
