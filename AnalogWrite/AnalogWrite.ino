int redPin = 9;
int bright1 = 50;
int bright2 = 100;
int bright3 = 150;
int bright4 = 200;
int bright5 = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,bright1);
  delay(500);
  analogWrite(redPin,bright2);
  delay(500); 
  analogWrite(redPin,bright3);
  delay(500);
  analogWrite(redPin,bright4);
  delay(500);
  analogWrite(redPin,bright5);
  delay(500);
}
