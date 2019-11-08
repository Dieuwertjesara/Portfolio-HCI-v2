void setup() {
  pinMode(13, OUTPUT);    //red LED
  pinMode(12, OUTPUT);    //yellow LED
}

void loop() {
  digitalWrite(13, HIGH); //red LED ON
  digitalWrite(12, HIGH); //yellow LED ON
  delay(500); //pause
  digitalWrite(13, LOW); //red LED OFF
  digitalWrite(12, LOW); //yellow LED OFF
  delay(500);
}
