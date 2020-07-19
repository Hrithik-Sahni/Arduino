int greenLed = 10;
int redLed = 11;
int blueLed = 12;

String msg = "Enter the colour you want to ON";
String colorLed;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed , OUTPUT);
  pinMode(redLed , OUTPUT);
  pinMode(blueLed , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  colorLed = Serial.readString();
  if(colorLed == "red")
  {
    digitalWrite(redLed , HIGH);
    digitalWrite(greenLed , LOW);
    digitalWrite(blueLed , LOW);
  }

   if(colorLed == "blue")
  {
    digitalWrite(blueLed , HIGH);
    digitalWrite(redLed , LOW);
    digitalWrite(greenLed , LOW);
  }

    if(colorLed == "green")
  {
    digitalWrite(greenLed , HIGH);
    digitalWrite(redLed , LOW);
    digitalWrite(blueLed , LOW);
  }
  

}
