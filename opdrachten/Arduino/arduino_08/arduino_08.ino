float sensorValue = 0;      //  variable for sensor value
int sensorPin = A0;       //  variable for sensor pin
int redLedPin = 10;

void setup() {
 Serial.begin(9600); 
 pinMode(redLedPin, OUTPUT);
 pinMode(sensorPin, INPUT);

}

void loop() {                   
  sensorValue = analogRead(sensorPin);
  sensorValue = map(sensorValue, 0, 1023, 230, 200);
  analogWrite(redLedPin, sensorValue);      //  set red LED brightness to sensorValue
  Serial.println(sensorValue);
  delay(100);                               //  delay for 0.2 seconds
}
