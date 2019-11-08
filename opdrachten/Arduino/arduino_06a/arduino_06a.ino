float sensorValue = 0;      //  variable for sensor value
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
  sensorValue = analogRead(sensorPin);      //  read value/voltage on the sensor pin 
                                            //  and store in variable sensorValue
  sensorValue = (sensorValue/1023)*255;     //  scale sensorValue to 0-255 range
  analogWrite(redLedPin, sensorValue);      //  set red LED brightness to sensorValue
  analogWrite(yellowLedPin, sensorValue--);   //  set yellow LED brightness to sensorValue
  Serial.println(sensorValue);              //  print sensorValue to serial monitor
  delay(200);                               //  delay for 0.2 seconds
}
