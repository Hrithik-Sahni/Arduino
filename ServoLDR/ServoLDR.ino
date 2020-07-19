#include<Servo.h>
int lightResistor = A2;
int servoPin = 7;
int lightVal;
int positionServo;
int dt = 250;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightResistor , INPUT);
  pinMode(servoPin , OUTPUT);
  myServo.attach(servoPin);
}
   
void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightResistor);
  positionServo = (-180./730.)*lightVal + (180./730.)*980.;
  myServo.write(positionServo);
  Serial.println(lightVal);
  delay(dt);
}
