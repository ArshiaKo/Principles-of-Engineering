#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int photoread;
int Shift;
//max 999
//min 80
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,OUTPUT);
  lcd.begin();
    lcd.backlight();
  
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print(Shift);
photoread = analogRead(0);

Shift = map(photoread,70,999,0,255);

Serial.print("Photoread:");
Serial.print(photoread);
Serial.print("       ");
Serial.print("Shift:");
Serial.println(Shift);
analogWrite(9,Shift);
lcd.clear();
}
