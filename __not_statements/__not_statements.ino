
int red=8;
int yellow=9;
long currenttime = 0;
long currenttime2 = 0;

void setup() {
  
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
}

void loop() {

if (millis()>10000) {
 if (millis()-currenttime2>500){
        digitalWrite(yellow,!digitalRead(yellow));
      currenttime2 =millis();
 }
 

}
if (millis()-currenttime>500)
 
  {
  digitalWrite(red,!digitalRead(red));
  currenttime =millis();  //currenttime gets set to millis
  }

  
}
