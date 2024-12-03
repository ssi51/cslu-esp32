#include <WiFi.h>

// Define the access point credentials
const char* ssid = "ESP32_AP";
const char* password = "password123";

// Store hidden flag
const char* hidden_flag = "YOUR_SSID_HERE";

// Setup the Wi-Fi access point
void setupAP() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Setting up Wi-Fi Access Point...");
  
  // Start the access point
  WiFi.softAP(ssid, password);
  
  Serial.print("Access Point '");
  Serial.print(ssid);
  Serial.println("' set up successfully.");
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
}

// Scan for nearby networks
void scanNetworks() {
  Serial.println("Scanning for networks...");
  int n = WiFi.scanNetworks();
  
  if (n == 0) {
    Serial.println("No networks found.");
  } else {
    Serial.print(n);
    Serial.println(" networks found:");
    for (int i = 0; i < n; ++i) {
      // Print SSID and signal strength of each network
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm)");
      
      // Check if this network contains the hidden flag
      if (strcmp(WiFi.SSID(i).c_str(), hidden_flag) == 0) {
        Serial.println("Flag found!");
      }
    }
  }
}

void setup() {
  // Set up the ESP32 as an access point
  setupAP();
  delay(1000);

  // Start scanning for nearby Wi-Fi networks
  scanNetworks();
}

void loop() {
  // Continuously scan for networks every 10 seconds
  delay(10000);
  scanNetworks();
}
