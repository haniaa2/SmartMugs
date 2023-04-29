#include <WiFi.h>
#include <FirebaseESP32.h>
#include <OneWire.h>
#include <DS18B20.h>

#define wifi "Srishtis iPhone"
#define pass "Vatsal99!"

const char* WIFI_SSID = wifi;
const char* WIFI_PASSWORD = pass;

// Replace with your Firebase project details
const char* FIREBASE_HOST = "smartmug-2d912-default-rtdb.firebaseio.com";
const char* FIREBASE_AUTH = "DJX6DfitzdCrnIc1oGLEI5O1zX6nnVQwdZ9NSNM4";

#define LED_PIN 2
#define ONE_WIRE_BUS 4
// #define heat_pin 34

OneWire oneWire(ONE_WIRE_BUS);
DS18B20 sensor(&oneWire);

void setup() {
  Serial.begin(115200);

  Serial.println(WIFI_SSID);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  unsigned long startTime = millis();
  while (WiFi.status() != WL_CONNECTED && millis() - startTime < 30000) {
    delay(500);
    Serial.print(".");
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("");
    Serial.println("Failed to connect to WiFi");
    Serial.println("Please check the SSID and password");
    while (1) {
      delay(1000);
    }
  }

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

  pinMode(LED_PIN, OUTPUT);
 // Initialize the LED_BUILTIN pin as an output
}

void loop() {
  FirebaseData firebaseData;
  sensor.requestTemperatures();

  // Test reading from Firebase
  float value;
  if (Firebase.getInt(firebaseData, "test/temperature")) {
    value = firebaseData.intData();
    Serial.print("User input temperature: "); //comment it for final demo
    Serial.println(value);
  }


  while (!sensor.isConversionComplete());  // wait until sensor is ready
  float temp_sensor = sensor.getTempC();

  // Get the current power status from the database
  Firebase.getInt(firebaseData, "test/power");
  int power = firebaseData.intData();

  // Turn the power on or off based on the status
  if (power == 1) {
    // Turn the power on
    //digitalWrite(POWER_PIN, LOW); // Replace POWER_PIN with the pin number for your power control
    
    if (temp_sensor < value){
      // Serial.println("Power turned ON");
      Serial.print("Temp from sensor: ");
      Serial.println(temp_sensor);
      Serial.println("Heater turned ON");
      digitalWrite(LED_PIN, HIGH); // Turn the LED off by making the voltage HIGH
    }
    else{
      Serial.println("Heater turned OFF");
      Serial.print("Temp from sensor: ");
      Serial.println(temp_sensor);
      digitalWrite(LED_PIN, LOW); // Turn the LED off by making the voltage HIGH
    }
      
  } else {
    // Turn the power off
    //digitalWrite(POWER_PIN, LOW);
    Serial.print("Temp from sensor: ");
    Serial.println(temp_sensor);
    Serial.println("Power turned OFF");
    digitalWrite(LED_PIN, LOW); // Turn the LED on (Note that LOW is the voltage level)
  }

  delay(1000); // Wait for 1 second before checking the status again
  Serial.print("///////////////////////////////////\n");
}