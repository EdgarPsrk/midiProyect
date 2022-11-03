int lectura;
void setup() {
  Serial.begin(115200);

}

void loop() {
  lectura = map(analogRead(0), 0, 1023, 0, 127);
  Serial.write(176); Serial.write(45); Serial.write(lectura);
  delay(100);
  
  //EL COMANDO 144 EN MIDI ACTIVA NOTAS Y EN COMANDO 176 ACTIVA CAMBIOS CONTROL CHANGES
}
