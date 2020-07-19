int ledPin=13;
int buttonPin=8;
boolean lastbutton=LOW;
boolean ledOn=false;
boolean currentbutton=LOW;

boolean debounce(boolean last)
{
  boolean current=digitalRead(buttonPin);
  if(last!=current)
  {
    delay(5);
    current=digitalRead(buttonPin);
    
  }
  return current;
}

void setup(){

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  
}

void loop(){

  currentbutton=debounce(lastbutton);
  if(lastbutton==LOW && currentbutton==HIGH)
    {
      ledOn=!ledOn;
    }
      lastbutton=currentbutton
      digitalWrite(ledPin,ledOn)
    
}
