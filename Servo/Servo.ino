#include<Servo.h>
int servoPin = 9;
int dt = 500;
int servoPosition = 180;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What Angle for the Servo ");
  while(Serial.available() == 0)
  {
    
  }
  servoPosition = Serial.parseInt();
  myServo.write(servoPosition);
}
