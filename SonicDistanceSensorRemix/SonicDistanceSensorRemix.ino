int trigPin = 12;
int echoPin = 13;

int yellow = 10;
int red = 9;
int green = 11;

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
Serial.print("Brightness:              ");
Serial.println(analogRead(0));
if(distance <= 3)
  {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  }
  if(distance >= 3 && distance <= 10)
  {
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  }
  if(distance >= 10)
  {
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  }

  
}
