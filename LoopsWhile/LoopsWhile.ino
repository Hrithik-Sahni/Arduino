int potVal;
int potPin = A0;
int greenLed = 7;
int delayT = 100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin , INPUT);
pinMode(greenLed , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayT);

  while(potVal > 1000)
  {
    digitalWrite(greenLed , HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(delayT);
  }

  digitalWrite(greenLed , LOW);
}
