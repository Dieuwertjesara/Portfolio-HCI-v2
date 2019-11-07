int sensorValue = 0;      //  variable for sensor value
int sensorPin = A0;       //  variable for sensor pin

void setup() {
 pinMode(sensorPin, INPUT);
 Serial.begin(9600); 
}

void loop() {                   
  sensorValue = analogRead(sensorPin);      //  read value/voltage on the sensor pin 
                                            //  and store in variable sensorValue
  Serial.println(sensorValue);              //  print sensorValue to serial monitor
  delay(200);                               //  delay for 0.2 seconds
}
