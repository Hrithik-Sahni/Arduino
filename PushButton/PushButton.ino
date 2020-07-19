int buttonPin = 8;
int ledPin = 7;
int LEDState = 0;
int buttonNew;
int buttonOld = 1;
int delayT = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin , INPUT);
  pinMode(ledPin , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  Serial.println(buttonNew);

  if(buttonNew == 1 && buttonOld == 0){
    if(LEDState == 0){
      digitalWrite(ledPin , HIGH);
      LEDState = 1;
    }else{
      digitalWrite(ledPin , LOW);
      LEDState = 0;
    }
  }  
  buttonOld = buttonNew;
  delay(delayT);
  
}
