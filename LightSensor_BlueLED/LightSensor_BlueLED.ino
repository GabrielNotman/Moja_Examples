#include <math.h>

const int ledPin=4; //Connect the LED Grove module to Pin4, Digital 4
const int thresholdvalue=50; //The threshold for which the LED should turn on.
float Rsensor; //Resistance of sensor in K
 
void setup() 
{
  pinMode(ledPin,OUTPUT); //Set the LED on Digital 4 as an OUTPUT
}
 
void loop() 
{
  int sensorValue = analogRead(0);
  Rsensor=(float)(1023-sensorValue)*10/sensorValue; 
  
  if(Rsensor>thresholdvalue)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
