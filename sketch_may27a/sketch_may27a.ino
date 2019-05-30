//LIBRARIES
#include <Adafruit_NeoPixel.h>


//VARIABLES
int LEDPIN = 7;//The Pin The LEDS Are Connected TO
const int sensorMin = 0;     // sensor minimum
const int sensorMax = 1024;  // sensor maximum

//strip start #'s
int s1start = 0;
int s2start = 54;
int s3start = 77;
int s4start = 100;
int s5start = 122;
int s6start = 145;

//strip end #'s
int s1end = s2start -1;
int s2end = s3start-1;
int s3end = s4start-1;
int s4end = s5start-1;
int s5end = s6start-1;
int s6end = 200;

//The analog readout from analogRead(i);
int sensor1;//A0
int sensor2;//A1
int sensor3;//A2
int sensor4;//A3
int sensor5;//A4
int sensor6;//A5

int range1;//map 1
int range2;//map 2
int range3;//map 3
int range4;//map 4
int range5;//map 5
int range6;//map 6


//DECLARE THE LED STRIP
Adafruit_NeoPixel strip = Adafruit_NeoPixel(202, LEDPIN, NEO_GRB + NEO_KHZ800);

 //declaring colors
uint32_t red = strip.Color(255, 0, 0);
uint32_t green = strip.Color(0, 255, 0);
uint32_t blue = strip.Color(0, 0, 255);


//SETUP
void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.setBrightness(50);
}

void loop() 
{
  GreenToRed(0,54,false);
}
  

//attributes = lightswipe(ledStart#, ledEnd#, strip.Color(255, 0, 0), shows? = t/f, for/backwards? t/f )

void GreenToRed(int start, int ends,  bool forwards)
{
  
  
  if (forwards) {
    int r = 255;
  int g = 0;
  int b = 0;
    for (int i = start; i <= ends; i++)
    {
      strip.setPixelColor(i, strip.Color(r, g, b));
        strip.show();
        delay(200);
        if(i <= ends / 2)
        {r -= 7;
        g += 7;}
        if(i >= ends / 2)
        {r += 8;
        g -= 8;}
    }
  }

   if (!forwards) {
    int r = 0;
  int g = 255;
  int b = 0;
    for (int i = ends; i >= start; i--)
    {
      strip.setPixelColor(i, strip.Color(r, g, b));
        strip.show();
        if(i >= ends /2)
        {g -= 8;
        r += 8;}
        if(i <= ends /2)
        {g += 7;
        r -= 7;}
    }
  }
}

void Clear()
{
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0));
  }
  strip.show();
}
