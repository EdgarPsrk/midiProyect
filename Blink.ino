

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(11, HIGH);   
  delay(500);     
  digitalWrite(11, LOW);   
  delay(500);              
  digitalWrite(12, LOW);    
  delay(500);              
  digitalWrite(13, LOW);  
  delay(500);
  digitalWrite(11, HIGH);   
  delay(500);     
  digitalWrite(11, LOW);   
  delay(500);              
  digitalWrite(12, HIGH);    
  delay(500);              
  digitalWrite(13, HIGH);  
  delay(500);
  digitalWrite(13, LOW);   
  delay(500);     
  digitalWrite(12, LOW);   
  delay(500);              
  digitalWrite(13, HIGH);    
  delay(500);              
  digitalWrite(13, LOW);  
  delay(500);
  digitalWrite(12, HIGH);   
  delay(500);     
  digitalWrite(12, LOW);   
  delay(500);              
  digitalWrite(11, HIGH );    
  delay(500);              
  digitalWrite(12, HIGH);  
  delay(500);
  digitalWrite(13, HIGH);   
  delay(5000);     
  digitalWrite(11, LOW);   
  delay(500);              
  digitalWrite(12, LOW);    
  delay(500);              
  digitalWrite(13, LOW);  
  delay(500);
}
