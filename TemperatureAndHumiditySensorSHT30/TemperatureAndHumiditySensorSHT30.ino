//libarary neni v manage libraries  https://github.com/wemos/WEMOS_SHT3x_Arduino_Library
#include <WEMOS_SHT3X.h>
//addres 0x45 
SHT3X sht30(0x45);
 
void setup() 
{
  Serial.begin(9600);
}
 
void loop() {
 
  if(sht30.get()==0){
    Serial.print("Temperature in Celsius : ");
    Serial.print(sht30.cTemp);
    Serial.println("°C");
    
    Serial.print("Temperature in Fahrenheit : ");
    Serial.print(sht30.fTemp);
    Serial.println("°F");
    
    Serial.print("Relative Humidity : ");
    Serial.println(sht30.humidity);
    Serial.println();
  }
  else
  {
    Serial.println("Error!");
  }
  delay(1000); 
}
