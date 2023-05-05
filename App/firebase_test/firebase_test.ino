#include <Arduino.h>
#if defined(ESP32)
  #include <WiFi.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
#endif

#include <Firebase_ESP_Client.h>
#include "addons/TokenHelper.h"
#include "addons/RTDBHelper.h"


const char *ssid     = "HANI 1516"; 
const char *password = "5%87C58nm"; 
const char *api_key  = "AIzaSyDfsN0mgbZYv3i_hn_WYzILe2M6mYX2-Kw"; 
const char *rtdb_url = "https://smartmugstest2-default-rtdb.firebaseio.com/"; 


FirebaseData fbdo;
FirebaseAuth auth;
FirebaseConfig config;

unsigned long sendDataPrevMillis = 0;
int count = 0;
bool signupOK = false;


String get_wifi_status(int status){
    switch(status){
      case WL_NO_SHIELD       :
          return "WL_NO_SHIELD      ";  
      case WL_IDLE_STATUS     :
          return "WL_IDLE_STATUS    ";  
      case WL_NO_SSID_AVAIL   :
          return "WL_NO_SSID_AVAIL  ";  
      case WL_SCAN_COMPLETED  :
          return "WL_SCAN_COMPLETED ";  
      case WL_CONNECTED       :
          return "WL_CONNECTED      ";  
      case WL_CONNECT_FAILED  :
          return "WL_CONNECT_FAILED ";  
      case WL_CONNECTION_LOST :
          return "WL_CONNECTION_LOST";  
      case WL_WRONG_PASSWORD  :
          return "WL_WRONG_PASSWORD ";  
      case WL_DISCONNECTED    :
          return "WL_DISCONNECTED   ";  
    }
    return "Status Not Defined";
}


void setup() {
    Serial.begin(115200);
    delay(1000);
    int status = WL_IDLE_STATUS;
    Serial.println("\nConnecting");
    Serial.println(get_wifi_status(status));
    WiFi.begin(ssid, password);
    while(status != WL_CONNECTED){
        delay(500);
        status = WiFi.status();
        Serial.println(get_wifi_status(status));
    }

    Serial.println("\nConnected to the WiFi network");
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();


    /*https://randomnerdtutorials.com/esp32-firebase-realtime-database/*/
    /* Assign the api key (required) */
    config.api_key = api_key;
    /* Assign the RTDB URL (required) */
    config.database_url = rtdb_url;

    /* Sign up */
    if (Firebase.signUp(&config, &auth, "", "")){
      Serial.println("Signed up ");
      signupOK = true;
    } else {
      Serial.printf("%s\n", config.signer.signupError.message.c_str());
      Serial.println("END OF MESSAGE");
    }

    /* Assign the callback function for the long running token generation task */
    config.token_status_callback = tokenStatusCallback; //see addons/TokenHelper.h
    
    Firebase.begin(&config, &auth);
    Firebase.reconnectWiFi(true);
      Serial.println("\n\n---REACHED THIS POINT---\n\n");

}

void loop() {
  // sleep(1);
  // Serial.println("REACHED THIS POINT [2]");
  // if (Firebase.ready() && signupOK && (millis() - sendDataPrevMillis > 15000 || sendDataPrevMillis == 0)){
  //   sendDataPrevMillis = millis();
  //     Serial.println("REACHED THIS POINT [3]");

  //   // Write an Int number on the database path test/int
  //   if (Firebase.RTDB.setInt(&fbdo, "test/int", count)){
  //     Serial.println("PASSED");
  //     Serial.println("PATH: " + fbdo.dataPath());
  //     Serial.println("TYPE: " + fbdo.dataType());
  //   }
  //   else {
  //     Serial.println("FAILED");
  //     Serial.println("REASON: " + fbdo.errorReason());
  //   }
  //   count++;
    
  //   // Write an Float number on the database path test/float
  //   if (Firebase.RTDB.setFloat(&fbdo, "test/float", 0.01 + random(0,100))){
  //     Serial.println("PASSED");
  //     Serial.println("PATH: " + fbdo.dataPath());
  //     Serial.println("TYPE: " + fbdo.dataType());
  //   }
  //   else {
  //     Serial.println("FAILED");
  //     Serial.println("REASON: " + fbdo.errorReason());
  //   }
  // }
  //   Serial.println("REACHED THIS POINT [4]");

}

// #define LED_Pin 16


// FirebaseData firebaseData;
// FirebaseAuth auth;
// FirebaseConfig config;


// String StartVal = "NULL";



// void connectWifi() {
//   WiFi.mode(WIFI_STA);
//   WiFi.begin(ssid, password);

//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     //Serial.print(".");
//   }
//   Serial.println("WiFi Connected");
//   Serial.print("IP Address: ");
//   Serial.println(WiFi.localIP());

// }

// void setup() {
//   Serial.begin(115200);
//   config.host = rtdb_url;
//   config.api_key = api_key;
//   // auth.user.email = "XX@XX.me";
//   // auth.user.password = "XXX";
//   connectWifi();
//   pinMode(LED_Pin, OUTPUT);
//   Firebase.begin(&config, &auth);
//   Firebase.reconnectWiFi(true);
// }



// void loop() {
//   if(Firebase.RTDB.setDouble(&firebaseData, "/Temperature/ESP-02", 18.77)){
//     Serial.println("It's working!");
//   }
//   else{
//     Serial.println(firebaseData.errorReason());
//   }
// }


