int potPin = 2;    // select the input pin for the potentiometer
int ledPin = 13;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor
#include <Servo.h>
Servo myservo;
void setup() {
    myservo.attach(9);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}

void loop() {
    val = map(analogRead(potPin),0,1023,0,180);    // read the value from the sensor
    myservo.write(val);
    Serial.println(val);
}
