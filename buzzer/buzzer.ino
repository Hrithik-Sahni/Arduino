int buzzer=10;
int button=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)==HIGH)
  digitalWrite(buzzer,HIGH);
//  delay(2000);
  else
  digitalWrite(buzzer,LOW);
//  delay(2000);
}
