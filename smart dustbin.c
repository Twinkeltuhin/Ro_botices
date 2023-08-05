 #include<Servo.h>
 int distance_Function(int echo,int trig);
Servo myservo;
int echo=5;
int trig=4;
void setup()
{
  Serial.begin(9600);
   myservo.attach(8);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
   
}

void loop()
{
    if( distance_Function(echo,trig)<30)
    {
      myservo.write(90);
      delay(2000);
    }
  if(distance_Function(echo,trig)>30&&distance_Function(echo,trig)<200)
  {
    myservo.write(0);
  }
}

int distance_Function(int echo,int trig)
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  int duration=pulseIn(echo,HIGH);
  int distance=(0.034*duration)/2;
  return distance;
}
  
