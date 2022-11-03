void setup() 
{
 Serial.begin(115200);
 pinMode(2,INPUT_PULLUP);
 pinMode(3,INPUT_PULLUP);
 pinMode(4,INPUT_PULLUP);
 pinMode(5,INPUT_PULLUP);
 pinMode(6,INPUT_PULLUP);


}

void loop()
{
  if(digitalRead(2)==LOW)
  {
    Serial.write(144); Serial.write(66); Serial.write(100);
    delay(300);
    Serial.write(144); Serial.write(66); Serial.write(0);
    delay(0);
  }
    if(digitalRead(3)==LOW)
  {
    Serial.write(144); Serial.write(67); Serial.write(100);
    delay(300);
    Serial.write(144); Serial.write(67); Serial.write(0);
    delay(0);
  }
     if(digitalRead(4)==LOW)
  {
    Serial.write(144); Serial.write(68); Serial.write(100);
    delay(300);
    Serial.write(144); Serial.write(68); Serial.write(0);
    delay(0);
  }
    if(digitalRead(5)==LOW)
  {
    Serial.write(144); Serial.write(70); Serial.write(100);
    delay(300);
    Serial.write(144); Serial.write(70); Serial.write(0);
    delay(0);
  }
  if(digitalRead(6)==LOW)
  {
    Serial.write(144); Serial.write(72); Serial.write(100);
    delay(300);
    Serial.write(144); Serial.write(72); Serial.write(0);
    delay(0);
  }
}
