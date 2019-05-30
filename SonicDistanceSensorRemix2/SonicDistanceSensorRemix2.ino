int trigPin = 12;
int echoPin = 13;

int yellow = 10;
int red = 9;
int green = 11;
int brightness = 5;    
int fadeAmount = 5; 

long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
Serial.begin(9600); 

pinMode(yellow,OUTPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);

}

void loop() {

digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration/74/2;

Serial.print("Distance: ");
Serial.println(distance);
Serial.print("Brightness: ");
Serial.println(analogRead(0));
delay(250);
if(analogRead(0) <= 250 )
  {
  analogWrite(red,255);
  analogWrite(green,0);
  analogWrite(yellow,0);
  }
  if(analogRead(0) > 300 && analogRead(0) <=600)
  {
  analogWrite(red,0);
  analogWrite(green,0);
  analogWrite(yellow,255);
  }
  if(analogRead(0)> 700)
  {
  analogWrite(red,0);
  analogWrite(green,255);
  analogWrite(yellow,0);
  }














}
