# IoT-Based Smart Irrigation Monitoring System

This project demonstrates a **low-cost IoT solution** for **real-time monitoring** of soil and environmental conditions to help farmers optimize irrigation manually. Using **NodeMCU ESP8266**, **DHT11 sensors**, and a **soil moisture sensor**, the system streams live data to the **Blynk IoT platform**, allowing farmers to monitor conditions remotely and decide when to irrigate for maximum crop yield and water efficiency.


## 🌱 **Project Objective**

- Enable farmers to track **soil moisture**, **temperature**, and **humidity** in real time.
- Help farmers make **informed irrigation decisions**, reducing water wastage and improving yield.
- Provide an affordable prototype that can be scaled for urban rooftops and plantations.

## ⚙️ **How It Works**

- **Sensors:** Soil moisture sensor measures soil water content; DHT11 captures temperature and humidity.
- **Microcontroller:** NodeMCU ESP8266 reads sensor data and sends it to the Blynk app over Wi-Fi.
- **Blynk App:** Displays live data on a smartphone dashboard, allowing the farmer to monitor and manually control watering as needed.


## 🧩 **Hardware Used**

- NodeMCU ESP8266 Wi-Fi Module
- DHT11 Temperature & Humidity Sensor
- Soil Moisture Sensor
- Solenoid Valve (for demonstration)
- Relay Module
- 12V Battery
- Jumper Wires

## 💻 **Software Used**

- **Arduino IDE** 
- **Blynk IoT Platform** 
- **C / Arduino Code** 


## 🚀 **Getting Started**

1. **Connect Hardware:** Wire up the NodeMCU with the DHT11 and soil moisture sensor.
2. **Configure Blynk:**  
   - Create a Blynk project and get the **auth token**.  
   - Add widgets for temperature, humidity, and soil moisture.  
3. **Upload Code:**  
   - Open the Arduino IDE.  
   - Insert your Blynk auth token, Wi-Fi SSID, and password in the code.  
   - Flash the code to the NodeMCU.
4. **Monitor:** Open the Blynk app to see real-time values and make manual watering decisions.


## 📈 **Impact**

This prototype demonstrates how IoT can help solve water scarcity challenges in agriculture by encouraging **efficient manual irrigation**, saving water, and increasing productivity, especially in water-scarce regions.
