int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {                   
  tone(speakerPin, 1915, 100);
  delay(250);
  
  tone(speakerPin, 1700, 100);
  delay(250);

  tone(speakerPin, 1519, 100);
  delay(250);
  
  tone(speakerPin, 1432, 100);
  delay(250);
  
  tone(speakerPin, 1275, 100);
  delay(250);

  tone(speakerPin, 1136, 100);
  delay(250);

  tone(speakerPin, 1014, 100);
  delay(250);

  tone(speakerPin, 956, 200);
  delay(250);
}
