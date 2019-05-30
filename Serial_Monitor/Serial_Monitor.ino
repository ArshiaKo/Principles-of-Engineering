int green = 11;
int yellow = 10;
int red = 9;
int time = 0;
bool redstatus = false;
void setup()
{
  Serial.begin(9600);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);

}

void loop()
{
  Serial.println("MR.GOMEZ ROX");
digitalWrite(red,HIGH);
delay(time);
digitalWrite(red,LOW);
delay(time);

}
