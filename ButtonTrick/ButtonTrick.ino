int buttonPin = 2;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin , INPUT);
  digitalWrite(buttonPin , HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  Serial.println(buttonVal);
  delay(100);
}
