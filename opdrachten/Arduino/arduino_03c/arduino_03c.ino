void setup() {
  pinMode(13, OUTPUT);    //red
  pinMode(12, OUTPUT);    //yellow
}

void loop() {
  digitalWrite(13, HIGH); // red LED ON
  digitalWrite(12, HIGH); // yellow LED ON
  delay(1000); //pause
  digitalWrite(13, LOW); // red LED OFF
  digitalWrite(12, HIGH); // yellow LED ON
  delay(1000); //pause
  digitalWrite(13, LOW); // red LED OFF   
  digitalWrite(12, LOW); // yellow LED OFF
  delay(1000); //pause
}
