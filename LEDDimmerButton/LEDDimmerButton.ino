int buttonPin1 = 12;
int buttonPin2 = 11;
int ledPin = 6;
int LEDBright = 0;
int buttonVal1;
int buttonVal2;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1 , INPUT);
  pinMode(ledPin , OUTPUT);
  pinMode(buttonPin2 , INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1 : ");
  Serial.print(buttonVal1);
  Serial.print("Button 2 : " );
  Serial.println(buttonVal2);
  delay(dt);

  if(buttonVal1 == 0){
    LEDBright = LEDBright + 15;
  }

  if(buttonVal2 == 0){
    LEDBright = LEDBright - 15;
  }

  if(LEDBright > 255){
    LEDBright = 255;
  }
  
  if(LEDBright <= 0){
    LEDBright = 0;
  }
  analogWrite(ledPin , LEDBright);
}
