float x = 100;
void setup() {
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(mysecondsub());
}

float mysecondsub()
{
 x = x/ 2;
 delay(1000);
 return x; 
  }
