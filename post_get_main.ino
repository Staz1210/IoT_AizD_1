/**
 * AizD
 * (IoT-2) - Kirim dan Terima data terhadap Internet
 * Komunikasi NodeMCU-Internet
 *
 * Satrio Adi, Teknik Komputer
 * Jum'at, 14 Desember 2018
 * Politeknik Elektronika Negeri Surabaya 
 * 
 **/
 
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>
 
const char* ssid = "hahahaha";
const char* password = "waawiiiiwuuu";
 
void setup () {
 
  Serial.begin(115200);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
 
    delay(1000);
    Serial.print("Connecting.."); //Menghubungkan ke wifi dengan ssid dan password di atas
 
  }
}
 

