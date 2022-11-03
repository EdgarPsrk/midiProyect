int pulsador=2;
int amarillo=3;
int verde=4;
int rojo=5;
int estado=LOW;
int push=LOW;

void setup()
{
  pinMode(pulsador,INPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop()
{


  if(digitalRead(pulsador)== HIGH)
  {
    digitalWrite(amarillo,HIGH);
    digitalWrite(verde,LOW);
  }
  else
  {
    digitalWrite(verde,HIGH);
    digitalWrite(amarillo,LOW);
  }

}
