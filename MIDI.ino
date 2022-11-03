void setup() {
 Serial.begin(115200);
 pinMode(2,INPUT_PULLUP);

}

void loop() {
  if(digitalRead(2)==LOW)
  {
    Serial.println("Me presionaste");
  }
/*
Serial.write(144); Serial.write(60); Serial.write(100); delay(100);
Serial.write(144); Serial.write(60); Serial.write(0); delay(1000);

}++Serial.write(144); Serial.write(70); Serial.write(90); delay(100);
Serial.write(144); Serial.write(70); Serial.write(0); delay(1000);

Serial.write(144); Serial.write(60); Serial.write(110); delay(100);
Serial.write(144); Serial.write(60); Serial.write(0); delay(2000);

Serial.write(144); Serial.write(50); Serial.write(80); delay(1000);
Serial.write(144); Serial.write(50); Serial.write(0); delay(2000);
*/


}
