int yellowLed = 9;
int greenLed = 6;
int yellowTime = 200;
int greenTime = 200;
int yellowBlink = 3;
int greenBlink = 5;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed , OUTPUT);
  pinMode(yellowLed , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j = 1 ; j <= greenBlink ; j = j + 1){
  digitalWrite(greenLed , HIGH);
  delay(greenTime);
  digitalWrite(greenLed , LOW);
  delay(greenTime);
  }
  for(j = 1 ; j <= yellowBlink; j = j + 1) {
  digitalWrite(yellowLed , HIGH);
  delay(yellowTime);
  digitalWrite(yellowLed , LOW);
  delay(yellowTime);
  }
}
