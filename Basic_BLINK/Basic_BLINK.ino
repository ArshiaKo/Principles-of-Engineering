int red = 9; 
int green = 11; 
int yellow = 10; 

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(300);
digitalWrite(yellow,HIGH);
delay(300);
digitalWrite(green,HIGH);
delay(300);
digitalWrite(red,LOW);
delay(300);
digitalWrite(yellow,LOW);
delay(300);
digitalWrite(green,LOW);
delay(300);
}
