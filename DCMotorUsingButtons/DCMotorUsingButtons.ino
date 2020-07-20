int button1 = 8;
int button2 = 9;
int buttonVal1;
int buttonVal2;
int mSpeed = 0;
int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin , OUTPUT);
  pinMode(dir1 , OUTPUT);
  pinMode(dir2 , OUTPUT);
  pinMode(button1 , INPUT);
  pinMode(button2 , INPUT);
  digitalWrite(button1 , HIGH);
  digitalWrite(button2 , HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(button1);
  buttonVal2 = digitalRead(button2);

  if(buttonVal1 == 0){
    mSpeed = mSpeed - 10;
    delay(dt);
  }
  
  if(buttonVal2 == 0){
    mSpeed = mSpeed + 10;
    delay(dt);
  }
  if(mSpeed > 255){
    mSpeed = 255;
  }
  if(mSpeed < -255){
    mSpeed = -255;
  }
  if(mSpeed == 10){
    mSpeed = 100;
  }
  if(mSpeed == -10){  //AS it does not move in -10 we need to go to 100
    mSpeed == -100;
  }
  if(mSpeed == 90 || mSpeed == 95){
    mSpeed = 0;
  }
  if(mSpeed == -90 || mSpeed == - 95){ //it does not work between 0 to 100 not enough speed
    mSpeed = 0;
  }

  if(mSpeed == 0){
    analogWrite(speedPin , 0);
  }

  if(mSpeed > 0){
    digitalWrite(dir1 , LOW);
    digitalWrite(dir2 , HIGH);
    analogWrite(speedPin , mSpeed); 
  }
  
  if(mSpeed < 0){ //Change the direction of the motor
    digitalWrite(dir1 , HIGH);
    digitalWrite(dir2 , LOW);
    analogWrite(speedPin , abs(mSpeed)); 
  }
}
