int red=10;
 int yellow=9;
int green=11;

//Regular == 400 
//Bright  == 500 
//Dark    == 150

//JEREMY
// regular = 460ish
// darkness = 100ish maybe 150ish
// extra light = 700ish

void setup() {
  
  Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);


Serial.println("done with setup... continue");
}

void loop() {
  
Serial.print("PhotoRead: ");
Serial.println(analogRead(0));
delay(100);

 if(analogRead(0) > 150 && analogRead(0) < 400)
{
   digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    Serial.println("regular light level all lights off");
    delay(300);
  }

if(analogRead(0)<150){
digitalWrite(red, HIGH);
digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    delay(300);
    digitalWrite(red, LOW);
    delay(300);
    
    
Serial.println("darkness red flashes");
}

 if(analogRead(0)>600)
{
   digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
   delay(500);
     digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
          delay(500);
    digitalWrite(green, LOW);
     
    Serial.println("extra light green and yellow flash");
  }


}
