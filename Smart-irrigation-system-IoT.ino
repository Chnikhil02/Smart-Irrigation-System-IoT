#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3sFrlwCeJ"
#define BLYNK_TEMPLATE_NAME "DHT 11"
#define BLYNK_AUTH_TOKEN "uq40CyzeE9sVuKzEPgtGpJvV5ngMajvz"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "iPhone";
char pass[] = "chp12345";

#define DHTPIN D4 // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // Change this to DHT22 or DHT21 if you're using different sensor

DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor object

void setup() {
  // Debug console
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  dht.begin();
}

void loop() {
  Blynk.run();
  
  // Read sensor data
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if readings are valid
  if (!isnan(humidity) && !isnan(temperature)) {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C, Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    // Send sensor data to Blynk
    Blynk.virtualWrite(V0, humidity);
    Blynk.virtualWrite(V1, temperature);
  } else {
    Serial.println("Failed to read from DHT sensor!");
  }

  delay(5000); // Update every 3 seconds
}
