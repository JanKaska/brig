#include <Adafruit_BMP085.h>
#include <Wire.h>
//Addres 0x77
Adafruit_BMP085 bmp;
 
void setup() 
{
  Serial.begin(9600);
  //
  if (!bmp.begin()) 
  {
    Serial.println("Could not find BMP180 sensor");
    while (1) {}
  }
}
 
void loop() 
{
  Serial.print("Temprerature = ");
  Serial.print(bmp.readTemperature());
  Serial.println(" °C");
  
  Serial.print("Presure = ");
  Serial.print(bmp.readPressure());
  Serial.println(" Psi");
 
 
  Serial.println();
  delay(5000);
}
