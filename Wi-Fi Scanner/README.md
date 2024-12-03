# Wi-Fi Scanner 

This project demonstrates how to use the ESP32 to scan for nearby Wi-Fi networks and detect a specific SSID. Participants will learn how to utilize Wi-Fi scanning capabilities and interact with the ESP32 using a serial monitor.

---

## **Objective**
- Learn how to scan for nearby Wi-Fi networks using the ESP32.
- Understand SSID detection logic.
- Develop skills in using the Arduino Serial Monitor for interaction.

---

## **How-To Run**
### **Hardware Requirements**
- ESP32 development board
- USB cable for programming
- Computer with Arduino IDE installed

### **Setup Steps**
1. **Install ESP32 Board Manager**:
   - Open Arduino IDE.
   - Go to `File > Preferences`.
   - Add this URL under "Additional Board Manager URLs":
     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
   - Go to `Tools > Board > Boards Manager`, search for "ESP32," and install it.

2. **Load the Code**:
   - Copy and paste the Wi-Fi Scanner code into a new Arduino sketch.
   - Save the sketch as `WiFiScanner.ino`.

3. **Select Your Board and Port**:
   - Go to `Tools > Board` and select your ESP32 model (e.g., `ESP32 Dev Module`).
   - Go to `Tools > Port` and select the port your ESP32 is connected to.

4. **Upload the Code**:
   - Click the **Upload** button in the Arduino IDE.

5. **Open the Serial Monitor**:
   - Go to `Tools > Serial Monitor` or press `Ctrl+Shift+M`.
   - Set the baud rate to **115200**.

---

## **Usage**
1. Once the ESP32 boots, it will scan for nearby Wi-Fi networks.
2. The Serial Monitor will list available networks and their signal strengths.
3. If the target SSID (e.g., `FLAG_123`) is detected, the monitor will display: Flag found!

---

## **Learning Outcomes**
- Explore Wi-Fi scanning functionality with ESP32.
- Understand SSID detection and network signal strength interpretation.
- Practice serial communication for monitoring ESP32 outputs.
