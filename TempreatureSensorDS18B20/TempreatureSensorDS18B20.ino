#include <OneWire.h>
#include <DallasTemperature.h>
//Sensors pin D2
const int oneWireBus = 4;     

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(oneWireBus);

// Pass our oneWire reference to Dallas Temperature sensor 
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  //starts up the sensor
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures(); 
  Serial.print("Temperature in celsius: ");
  Serial.print(sensors.getTempCByIndex(0));
  Serial.println("ºC");

  Serial.print("Temperature in fahrenheit: ");
  Serial.print(sensors.getTempFByIndex(0));
  Serial.println("ºF");
  delay(5000);
}
