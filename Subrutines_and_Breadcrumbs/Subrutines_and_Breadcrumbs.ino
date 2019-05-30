void setup() 
{
  Serial.begin(9600);
  //setup
pinMode(9,OUTPUT);
  Serial.print("setting up...");
}

void loop() 
{
  //inintializing the subrutine
  Serial.print("starting redblink...");
   myfirstsub();
  Serial.print("...redblink finished");
}


void myfirstsub()
  {
    //blinking red for 1/2 a second
  digitalWrite( 9, HIGH);
  delay(500);
  digitalWrite( 9, LOW);
  delay(500);
  Serial.print("...redblink...");
  }
