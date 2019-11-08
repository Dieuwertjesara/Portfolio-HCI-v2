#include <Servo.h>
Servo myServo;
int servoPin = 9;
int pos = 0;

void setup() {
  myServo.attach(servoPin);
}

void loop() {                   
  for(pos = 0; pos <= 180; pos += 10){
    myServo.write(pos);
    delay(15);                          
  }
  for(pos = 180; pos >=50; pos -= 10){
    myServo.write(pos);
    delay(15);
  }
  for(pos = 180; pos >=1; pos -= 10){
    myServo.write(pos);
    delay(15);
  }
}
