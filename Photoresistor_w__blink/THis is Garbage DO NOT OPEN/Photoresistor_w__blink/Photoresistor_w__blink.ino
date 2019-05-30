int red = 10;
int yellow = 8;
int green = 11;

int redbright = 0;
int greenbright = 0;
int yellowbright = 0;



int sensorMin = 1023;     
int sensorMax = 0;
void setup() 
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void blinks()
{
  analogWrite(red, redbright);
  delay(500);
  analogWrite(red, !redbright);
  delay(500);
  analogWrite(green, greenbright);
  delay(500);
  analogWrite(green, !greenbright);
  delay(500);
  analogWrite(yellow, yellowbright);
  delay(500);
  analogWrite(yellow, !yellowbright);
  delay(500);

  }

void loop()
{
Serial.println(analogRead(0));
//Normal
if(analogRead(0) >= 350 && analogRead(0) <= 420)
{
  redbright = 0;
  greenbright = 0;
  yellowbright = 0;
  }
  
  //Darkness
  if(analogRead(0) <= 350)
{
  redbright = 255;
  greenbright = 0;
  yellowbright = 0;
  }
  
  //Light
  if(analogRead(0) >= 450)
{
  greenbright = 255;
  yellowbright = 255;
  redbright = 0;

  }
  blinks();
}
