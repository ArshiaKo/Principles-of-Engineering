int timer = 100;

  void setup()
  {
      Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,  OUTPUT);
        for(int i = 0; i < 3;i++)
        {  Serial.print(i);
          digitalWrite(9,HIGH);
          delay(1000);
          digitalWrite(9,LOW);
          delay(500);
        }
        for(int i = 0; i < 2;i++)
        {  Serial.print(i);
          digitalWrite(10,HIGH);
          delay(2000);
          digitalWrite(10,LOW);
          delay(2000); 
        }
        for(int i = 0; i < 1;i++)
        {  Serial.print(i);
          digitalWrite(11,HIGH);
          delay(2000);
          digitalWrite(11,LOW);
        }
    }
    
void loop() {


  
}
