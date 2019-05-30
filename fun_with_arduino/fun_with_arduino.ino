/*
Arshia Kohanteb created: August 20th
D11 = RED;
D10 = YELLOW;
D9 = GREEN;
*/

//THERE ARE 3 SECTIONS OF THE IDE:
//*GLOBAL VARIABLES
//*SETUP
//*LOOP

int LED6 = 6;
int LED5 = 7;
int LED4 = 8;
int LED3 = 9;
int LED2 = 10;
int LED1 = 11;
int timer = 100;
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9,  OUTPUT);
  program();
}
 void TurnOn(int pin) 
{
  digitalWrite(pin, HIGH);
  delay(timer);
  }
   void TurnOff(int pin) 
{
  digitalWrite(pin, LOW);
  delay(timer);
  }
 void lightshow6()
 {
    TurnOn(LED1);
    TurnOn(LED2);
    TurnOn(LED3);
    TurnOn(LED4);
    TurnOn(LED5);
    TurnOn(LED6);
    TurnOff(LED6);
    TurnOff(LED5);
    TurnOff(LED4);
    TurnOff(LED3);
    TurnOff(LED2);
    TurnOff(LED1);
  }
   void lightshow3()
 {
    TurnOn(LED1);
    TurnOn(LED2);
    TurnOn(LED3);
    TurnOff(LED3);
    TurnOff(LED2);
    TurnOff(LED1);
  }
  void program()
  {
        for(int i = 0; i < 5;i++)
        {  Serial.print(i);
          digitalWrite(9,HIGH);
          delay(1000);
          digitalWrite(9,LOW);
          delay(500);
        }
        for(int i = 0; i < 1;i++)
        {  Serial.print(i);
          digitalWrite(10,HIGH);
          delay(500);
          digitalWrite(10,LOW);
          delay(500);
        }
        for(int i = 0; i < 3;i++)
        {  Serial.print(i);
          digitalWrite(11,HIGH);
          delay(500);
          digitalWrite(11,LOW);
          delay(500);
        }
    }
    
void loop() {

  /*Serial.print("Time = ");
  Serial.println(timer);
  Serial.println(millis());
  timer+=10;*/
  
}
