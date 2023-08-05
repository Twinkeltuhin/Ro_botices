 int relay=8;
 int pir=7;
void setup()
{  Serial.begin(9600);
   pinMode(pir,INPUT);
	pinMode(relay,OUTPUT);
}

void loop()
{
 if(digitalRead(pir)==HIGH)
 {Serial.println("MOtion Dected");
  digitalWrite(relay,HIGH);
 }
  else
  {  Serial.println("No motion Dected");
     digitalWrite(relay,LOW);
  }
}
