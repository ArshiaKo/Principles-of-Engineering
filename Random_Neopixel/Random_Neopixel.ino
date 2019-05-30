#include <Adafruit_NeoPixel.h>
  
#define PIN 6
   
int r = 3;
int g = 44;
int b = 233;

bool rpos = true;
bool gpos = true;
bool bpos = true;
bool ran = false;

int val = 5;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
    
void setup() {
  
strip.begin();
strip.show();

  Serial.begin(9600);
}

void loop() {

if(!ran){
for (int i = 0; i < 60; i++)
{
strip.setPixelColor(i,r,g,b);
strip.show(); 

//Serial.println(i);
//Serial.print("Red: ");
//Serial.println(r);
//Serial.print("Green: ");
//Serial.println(g);
//Serial.print("Blue: ");
//Serial.println(b);
//Serial.println();

if(rpos) {r += random(0,val);}
else if(!rpos) {r -= random(0,val);}

if(gpos) {g += random(0,val);}
else if(!gpos) {g -= random(0,val);}

if(bpos) {b += random(0,val);}
else if(!bpos) {b -= random(0,val);}

if (r >= 255) {rpos = false;}
if (g >= 255) {gpos = false;}
if (b >= 255) {bpos = false;}
if (r <= 1) {rpos = true;}
if (g <= 1) {gpos = true;}
if (b <= 1) {bpos = true;}
delay(20);

ran = true;
}
}

if (ran){

for (int i = 60; i > 0; i--)
{
strip.setPixelColor(i,r,g,b);
strip.show(); 

//Serial.println(i);
//Serial.print("Red: ");
//Serial.println(r);
//Serial.print("Green: ");
//Serial.println(g);
//Serial.print("Blue: ");
//Serial.println(b);
//Serial.println();

if(rpos) {r += val;}
else if(!rpos) {r -= val;}

if(gpos) {g += val;}
else if(!gpos) {g -= val;}

if(bpos) {b += val;}
else if(!bpos) {b -= val;}

if (r >= 255) {rpos = false;}
if (g >= 255) {gpos = false;}
if (b >= 255) {bpos = false;}
if (r <= 1) {rpos = true;}
if (g <= 1) {gpos = true;}
if (b <= 1) {bpos = true;}
delay(20);

ran = false;
  }
}

}
