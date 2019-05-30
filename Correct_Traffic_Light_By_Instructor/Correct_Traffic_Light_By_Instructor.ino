int red=10;
 int yellow=9;
int green=11;
// Regular == 400 Bright == 500 Dark == 150
void setup()
{
  pinMode (red,OUTPUT);
  pinMode (yellow,OUTPUT);
  pinMode (green,OUTPUT);
  Serial.begin(9600);
  Serial.println("done with setup.... continue.");
}

void loop() 
{
Serial.print("PhotoRead:");
Serial.println(analogRead(0));

if(analogRead(0)>150 && analogRead(0)<500)
  {
digitalWrite(red,LOW);
digitalWrite(green,LOW);
digitalWrite(yellow,LOW);

  }
}
