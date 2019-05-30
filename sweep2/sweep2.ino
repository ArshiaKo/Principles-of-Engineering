int red=9; // red= 9 yellow=10 green=11
int yellow=10;
int green=11;
#include <Servo.h>
Servo myServo;

// regular = 460ish,  darkness = 100ish maybe 150ish,  extra light = 700ish
 

void setup() {
myServo.attach(6);
  Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {




Serial.print("PhotoRead: ");
Serial.println(analogRead(0));

if ( analogRead(0)<250) 
{

myServo.write(0);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
digitalWrite(red,LOW);
  
  
}

if ( analogRead(0)>250 && analogRead(0)<600)
{
 
myServo.write(90);
digitalWrite(yellow,HIGH);
digitalWrite(green,LOW);
digitalWrite(red,LOW);
}

if (analogRead(0)>600)
{
myServo.write(180);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
digitalWrite(red,HIGH);
}





}
