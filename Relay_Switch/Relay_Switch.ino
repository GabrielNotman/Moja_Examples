const int switchPin = 2; // the number of the switch pin
const int relay = 4; // the number of the relay
int switchState = 0;
 
void setup()
{
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  pinMode(relay, OUTPUT);
}
 
void loop()
{
  switchState = digitalRead(switchPin);
  if (switchState == HIGH)
  {
    digitalWrite(relay, HIGH); delay(100);
  }
  else
  {
    digitalWrite(relay, LOW);
  }
}
