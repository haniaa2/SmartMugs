//
//    FILE: DS18B20_simple.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: equivalent of DallasTemperature library Simple
//     URL: https://github.com/RobTillaart/DS18B20_RT


#include <OneWire.h>
#include <DS18B20.h>

#define ONE_WIRE_BUS              2

OneWire oneWire(ONE_WIRE_BUS);
DS18B20 sensor(&oneWire);

#define LED_BUTTON 13

void setup(void)
{
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.print("DS18B20 Library version: ");
  Serial.println(DS18B20_LIB_VERSION);

  pinMode(LED_BUTTON,OUTPUT);
  sensor.begin();
}


void loop(void)
{
  sensor.requestTemperatures();
  float temp_user = 27;


  while (!sensor.isConversionComplete());  // wait until sensor is ready
  float temp_sensor = sensor.getTempC();
  if(temp_sensor < temp_user){
    digitalWrite(LED_BUTTON,HIGH);
    Serial.println("Heater is on");
  }
  else{
    digitalWrite(LED_BUTTON,LOW);
    Serial.println("Heater is off");
  }

  Serial.print("Temp: ");
  Serial.println(temp_sensor);
  delay(2000);
}


// -- END OF FILE --


