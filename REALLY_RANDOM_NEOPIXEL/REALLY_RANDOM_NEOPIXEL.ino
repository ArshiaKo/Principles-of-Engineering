#include <Adafruit_NeoPixel.h>
  
#define PIN 6
   
int r = 0;
int g = 0;
int b = 0;

bool rpos = true;
bool gpos = true;
bool bpos = true;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
    
void setup() {
  
strip.begin();
strip.show();

  Serial.begin(9600);
}

void loop() {
for (int i = 0; i < 60; i++)
{
strip.setPixelColor(i,random(0,155),random(0,155),random(0,155));

}
delay(250);
strip.show(); 
}
