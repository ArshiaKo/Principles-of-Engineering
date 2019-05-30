#include <Adafruit_NeoPixel.h>
#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <ESP8266WiFi.h>
#define PIN 4
#define NUMPIXELS 5
#define BLYNK_PRINT Serial
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
bool breaks = false;

void setup()
{
  Serial.begin(9600);
  Blynk.begin("2b171dacf4da4712b48db126ba66285e", "YULABoys-Guest", "yula9760");
  pixels.begin();
}

void rgb(int r, int g , int b)
{
  for (int i = 0; i < 60; i++)
  {
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();
    //delay(15);
  }
}

//          RAINBOW          RAINBOW          RAINBOW          RAINBOW          RAINBOW          RAINBOW          RAINBOW          RAINBOW

uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return pixels.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return pixels.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return pixels.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

void Rainbow()
{
  rainbowCycle(20);
}


void rainbowCycle(uint8_t wait) {
  
    uint16_t i, j;
    for (j = 0; j < 256 * 5; j++) { // 5 cycles of all colors on wheel
      for (i = 0; i < pixels.numPixels(); i++) {
        pixels.setPixelColor(i, Wheel(((i * 256 / pixels.numPixels()) + j) & 255));
      }
      pixels.show();
      //delay(wait);
    }
  }

//      END      END      END      END      END      END      END      END      END      END      END      END      END      END      END
BLYNK_WRITE(V2)
{
  rgb(0, 0, 0);
  breaks = true;
}

BLYNK_WRITE(V1)
{
  if (V1 == HIGH) {
    int R = param[0].asInt();
    int G = param[1].asInt();
    int B = param[2].asInt();

    Serial.println(R);
    Serial.println(G);
    Serial.println(B);
    rgb(R, G, B);
    breaks = false;
  }
}

BLYNK_WRITE(V3)
{
  Rainbow();
}

void loop()
{
  Blynk.run();
}
