int redLedPin = 10;
int yellowLedPin = 9;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {                   
  //  for loop 0 brightness gets increased if under 256
  for (int brightness=0; brightness <256; brightness++){
    analogWrite(redLedPin, brightness);   
    delay(5);
  }                             
  //  for loop 255 brightness gets decreased if over 0
    for (int brightness=255; brightness >0; brightness--){
    analogWrite(yellowLedPin, brightness);
    delay(5);
  }                        
  //  for loop 255 brightness gets decreased if over 0
    for (int brightness=255; brightness >0; brightness--){
    analogWrite(redLedPin, brightness);
    delay(5);
  }
  //  for loop 0 brightness gets increased if under 256
  for (int brightness=0; brightness <256; brightness++){
    analogWrite(yellowLedPin, brightness);   
    delay(5);
  }     
}
