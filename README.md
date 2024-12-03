# Cyber Skills Level Up! @ UPM

Welcome to **Cyber Skills Level Up**, an event organized at Universiti Putra Malaysia (UPM), powered by RE:HACK to empower participants with -. This repository contains three exciting projects to help participants enhance their skills in **Wi-Fi scanning**, **file system exploration**, and **UART communication and data decoding** using the **ESP32**.

---

## **Challenges Overview**

### **1. Wi-Fi Scanner Challenge**
Learn to scan for nearby Wi-Fi networks using the ESP32 and detect specific SSIDs. This challenge introduces participants to the basics of wireless networking and interacting with ESP32 via the Serial Monitor.

### **2. SPIFFS Explorer Challenge**
Discover how to utilize the SPIFFS file system on the ESP32 by exploring, listing, and reading files. Participants will find a hidden flag by interacting with the ESP32 through the Serial Monitor.

### **3. UART Data Decoder Challenge**
Dive into UART communication and learn to decode hexadecimal data sent by the ESP32. Participants must decode the transmitted data to reveal the hidden flag, making this an excellent introduction to data encoding and decoding.

---

## **How to Get Started**

### **1. Prerequisites**
- ESP32 development board.
- USB cable for programming the ESP32.
- Computer with **Arduino IDE** installed.

### **2. Setup ESP32 Development Environment**
1. Open the **Arduino IDE**.
2. Install the ESP32 board package:
   - Go to `File > Preferences`.
   - Add the following URL under "Additional Board Manager URLs":
     ```
     https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
     ```
   - Go to `Tools > Board > Boards Manager`, search for "ESP32," and install the package.
3. Select your ESP32 board model in `Tools > Board`.
4. Connect your ESP32 and select the correct COM port in `Tools > Port`.

### **3. Load and Upload the Code**
- Each challenge is located in its respective folder in this repository.
- Open the `.ino` file for the challenge you wish to complete, upload it to the ESP32, and follow the instructions in the Serial Monitor.

---

## **Event Learning Objectives**
By participating in Cyber Skills Level Up, you will:
1. Gain hands-on experience with ESP32 development.
2. Learn practical skills in Wi-Fi scanning, file system interaction, and UART communication.
3. Enhance your problem-solving abilities in cybersecurity scenarios.
4. Explore the intersection of IoT, embedded systems, and cybersecurity.

Let the exploration begin! 🚀
