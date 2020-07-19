int j;
int led = 7;
int numBlinks;
String msg = "How many Blinks you want ";
int delayT = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available() == 0){ //Until the data is enterted we have stopped or paused the program
  }

  numBlinks = Serial.parseInt();
  for(j = 1 ; j <= numBlinks ; j = j + 1)
  {
    digitalWrite(led , HIGH);
    delay(delayT);
    digitalWrite(led , LOW);
    delay(delayT);
  }
}
