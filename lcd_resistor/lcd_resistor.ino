//Global Values
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define ROUNDFACTOR 5

bool noInput = true;
int analogPin= 0;
int raw= 0;
int Vin= 5;
float Vout= 0;
float R1= 220;
int R2= 0;
float buffer= 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);
//SETUP
void setup()
{
Serial.begin(9600);
lcd.begin();
lcd.backlight();
}

void loop()
{
raw= analogRead(analogPin);
if(raw) 
{
buffer= raw * Vin;
Vout= (buffer)/1024.0;
buffer= (Vin/Vout) -1;
R2= R1 * buffer;
Serial.print("Vout: ");
Serial.println(Vout);
lcd.clear();
Serial.print("R2: ");
  lcd.print("Resistor Value:");
  lcd.setCursor(0,1);
  lcd.print(Round(R2));
Serial.println(Round(R2));
delay(1000);  


}
else
    {
  if (raw)
  {
    noInput = false;
    }
  if(noInput){
    lcd.clear();
  lcd.print("  No Resistor");
    lcd.setCursor(0,1);
      lcd.print("     Input");
      delay(500);}
    }
}

static int Round(int val)
{
  int rem;
  rem = val % ROUNDFACTOR ;
  if (rem < 3){
    val -= rem;}
  else{
    val += ROUNDFACTOR - rem;}
return val;
  }
