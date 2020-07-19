int photoRes = A0;
int photoVal;
int delayT = 500;
int redLed = 9;
int greenLed = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(photoRes , INPUT);
  pinMode(redLed , OUTPUT);
  pinMode(greenLed , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoRes);
  Serial.println(photoVal);
  while(photoVal > ){
    digitalWrite(redLed , HIGH);
    photoVal = analogRead(photoRes);
  }
  delay(delayT);
}
