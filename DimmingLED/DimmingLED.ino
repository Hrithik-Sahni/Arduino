int potPin = A3;
int ledPin = 3;
int potVal;
float LEDVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  LEDVal = (255./1023.)*potVal;
  analogWrite(ledPin , LEDVal);
  Serial.println(LEDVal);
}
