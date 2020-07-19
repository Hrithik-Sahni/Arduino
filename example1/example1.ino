int ledPin=13;
int ButtonPin=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(ButtonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(ButtonPin)==HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
