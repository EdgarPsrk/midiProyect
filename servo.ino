#include<Servo.h>
Servo servo1;
int PINSERVO=2;
int PULSOMIN=900;
int PULSOMAX=2100;
int VALORPOT;
int ANGULO;
int POT =0;

void setup()
{
  servo1.attach(PINSERVO, PULSOMIN, PULSOMAX);
  //LOS PUERTOS ANALOGOS NO SE INCIALIZAN.
}
void loop()
{
  servo1.write(0);
  delay(20);
  servo1.write(180);
  delay(20);
  /*VALORPOT=analogRead(POT);
  ANGULO = map(VALORPOT,0,1023,0,180);
  servo1.write(ANGULO);
  delay(30);*/
}
