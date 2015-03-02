#define ROTARY_ANGLE_SENSOR A0
#define ADC_REF 3.3 //reference voltage of ADC is 3v3
#define GROVE_VCC 5 //VCC of the grove interface is normally 5v
#define FULL_ANGLE 300 //full value of the rotary angle is 300 degrees
 
void setup()
{
  Serial.begin(9600);
  pinsInit();
}
 
void loop()
{
  int degrees; degrees = getDegree();
  Serial.println("The angle between the mark and the starting position:");
  Serial.println(degrees); delay(500);
}
 
void pinsInit()
{
  pinMode(ROTARY_ANGLE_SENSOR, INPUT);
}
 
int getDegree()
{
  int sensor_value = analogRead(ROTARY_ANGLE_SENSOR);
  float voltage;
  voltage = (float)sensor_value*ADC_REF/1023; 
  float degrees = (voltage*FULL_ANGLE)/GROVE_VCC; 
  
  return degrees;
}
