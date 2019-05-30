int red=10;
 int yellow=9;
int green=11;

void setup() {
pinMode (red,OUTPUT);
pinMode (yellow,OUTPUT);
pinMode (green,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(0));
if(analogRead(0)>500){
  digitalWrite(green,HIGH);
  digitalWrite (yellow,HIGH);
  digitalWrite (red,LOW);
}
Serial.println(analogRead(0));
if(analogRead(0)>100  &&  analogRead(0)<300 ){
  digitalWrite(green,LOW);
  digitalWrite (yellow,LOW);
  digitalWrite(red,HIGH);

if(analogRead(0)>200  &&  analogRead(0)<400 )
    {
        digitalWrite(green,LOW);
        digitalWrite (yellow,LOW);
        digitalWrite(red,LOW);
    }
  }
}




  
