const int buttonPin = 2; //set pin 2 for the buttonconst
int buzzerPin = 4; //set pin 4 for the buzzer
int buttonState = 0; //buzzer starts off
 
void setup()
{
  pinMode(buzzerPin, OUTPUT);
  //define the output and input in the  equation here
  pinMode(buttonPin, INPUT);
}
 
void loop()
{
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) 
  {
    //turn buzzer on:
    digitalWrite(buzzerPin, HIGH);
  }
  else
  {
    // turn buzzer off:
    digitalWrite(buzzerPin, LOW);
  }
}
