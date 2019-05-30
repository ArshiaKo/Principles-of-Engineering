
        // the PWM pin the LED is attached to
int brightness = 5;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int red = 9;
int yellow = 10;
int green = 11;

void setup() 
{
  // declare pin 9 to be an output:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
while(brightness != 0)
{
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  analogWrite(red, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) 
  {
    fadeAmount = -fadeAmount;
  }
delay(30);
}

brightness = 5;

while(brightness != 0)
{
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  analogWrite(yellow, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) 
  {
    fadeAmount = -fadeAmount;
  }
delay(30);
}
brightness = 5;

while(brightness != 0){
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  analogWrite(green, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
brightness = 5;
}
