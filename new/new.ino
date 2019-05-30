int red=10;
 int yellow=9;
int green=11;

// Regular == 400 Bright == 500 Dark == 150

void setup() {
  Serial.begin(9600);  
pinMode(13, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

 Serial.println("done with setup.... continue.");
}



void loop() {
  Serial.print("PhotoRead: ");
  Serial.println(analogRead(0));
  if (analogRead(0)>300)
  {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
 
 if (analogRead(0)>300 )
 
 digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    delay(200);
    digitalWrite(red, LOW);
    delay(200);
   
    
  Serial.println("Darkness... Danger red light");
}

}
