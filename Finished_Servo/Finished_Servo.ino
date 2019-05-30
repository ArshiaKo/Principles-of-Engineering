#include <Servo.h>

Servo myServo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position
  int red= 9;
  int yellow= 10;
  int green =11;
  int brightness = 180;
void setup() {
  Serial.begin(9600);
  myServo.attach(6);  // attaches the servo on pin 9 to the servo object
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
    pinMode(green,OUTPUT);
  
}

void check()
{
  if (pos > 0 && pos < 80){
    digitalWrite(yellow,LOW); 
      digitalWrite(green,LOW); 
      digitalWrite(red,HIGH);
      
    }
    if(pos > 80 && pos < 160)
    {
    digitalWrite(yellow,HIGH); 
      digitalWrite(green,LOW); 
      digitalWrite(red,LOW); 
    }
    
    if(pos > 160 && pos < 180)
    {
     digitalWrite(yellow,LOW); 
      digitalWrite(green,HIGH); 
      digitalWrite(red,LOW);
    }
}

void off()
{
    digitalWrite(yellow,LOW); 
      digitalWrite(green,LOW); 
      digitalWrite(red,LOW);
}

void loop() {
  
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    myServo.write(pos);
    check();
    Serial.println(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myServo.write(pos);
    check();
    Serial.println(pos);
  }
    
    delay(15);                       // waits 15ms for the servo to reach the position
  }
