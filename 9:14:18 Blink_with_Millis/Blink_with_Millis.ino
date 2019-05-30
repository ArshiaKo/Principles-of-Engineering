int red = 13;
int yellow = 9;
void setup() 
{
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
}

void loop() 
{
if(millis() > 1000)
  {
digitalWrite(yellow,!digitalRead(yellow));
delay(500);
}
digitalWrite(red,!digitalRead(red));
delay(500);
}
