int MoPin = 2; // vibrator Grove connected to digital pin 2
const int TouchPin=4; // touch Grove Connected to digital pin 4
 
void setup() 
{
  pinMode(TouchPin, INPUT);
  pinMode( MoPin, OUTPUT );
}
 
void loop() 
{
  int sensorValue = digitalRead(TouchPin);
  if(sensorValue==1)
  {
    digitalWrite(MoPin,HIGH);
  }
  else
  {
    digitalWrite(MoPin,LOW);
  }
}
