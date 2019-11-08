float sensorValue = 0;      //  variable for sensor value
float sensorValue2 = 1023;      //  variable for sensor value
int sensorPin = A0;       //  variable for sensor pin
int redLedPin = 10;
int yellowLedPin = 9;

void setup() {
 pinMode(redLedPin, OUTPUT);
 pinMode(yellowLedPin, OUTPUT);
 pinMode(sensorPin, INPUT);
 Serial.begin(9600); 
}

void loop() {                   
  int sensorValue = analogRead(sensorPin);
  sensorValue = map(sensorValue, 0, 1023, 0, 255);
  int sensorValue2 = analogRead(sensorPin);
  sensorValue2 = map(sensorValue2, 0, 1023, 255, 0); 
  analogWrite(redLedPin, sensorValue);      //  set red LED brightness to sensorValue
  analogWrite(yellowLedPin, sensorValue2);   //  set yellow LED brightness to sensorValue
  delay(20);                               //  delay for 0.2 seconds
}
