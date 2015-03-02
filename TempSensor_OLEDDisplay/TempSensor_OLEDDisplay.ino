#include <Wire.h>
#include <SeeedGrayOLED.h>
#include <avr/pgmspace.h>
#include <math.h>

int a;
float temperature;
int B=3975; //B value of the thermistor
float resistance;
 
void setup()
{
  Wire.begin();
  SeeedGrayOled.init(); //initialize SEEED OLED display
  SeeedGrayOled.clearDisplay(); //Clear Display.
  SeeedGrayOled.setNormalDisplay(); //Set Normal Display Mode
  SeeedGrayOled.setVerticalMode(); //Set addressing mode to Page Mode
 
  for(char i=0; i < 12 ; i++);
}
 
void loop()
{
  SeeedGrayOled.setTextXY(0,0); //Set the cursor to Xth Page, Yth Column
  SeeedGrayOled.putString("Temp (oC):"); //Print the String
  SeeedGrayOled.putNumber(temperature);
  
  a=analogRead(0);
  resistance=(float)(1023-a)*10000/a; //get the resistance of the sensor
  temperature=1/(log(resistance/10000)/B+1/298.15)-273.15; //convert to temperature via datasheet
 
  delay(1000);
}
