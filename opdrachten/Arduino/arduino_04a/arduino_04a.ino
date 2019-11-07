int redLedPin = 10;
int yellowLedPin = 9;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
  analogWrite(redLedPin, 255);      //  rood LED lampje op max helderheid
  analogWrite(yellowLedPin, 128);   //  geel LED lampje op halve helderheid
  delay(1000);                      //  wacht 1 seconde
  analogWrite(redLedPin, 0);        //  rood LED lampje op nul helderheid
  analogWrite(yellowLedPin, 255);   //  geel LED lampje op max helderheid
  delay(1000);                      //  wacht 1 seconde 
}
