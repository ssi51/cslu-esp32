# SPIFFS Explorer Challenge

This project introduces participants to the SPIFFS (SPI Flash File System) on ESP32. Participants will use commands via the Serial Monitor to explore the file system, read files, and retrieve a hidden flag.

---

## **Objective**
- Learn how to initialize and use SPIFFS on ESP32.
- Practice creating, listing, and reading files in SPIFFS.
- Develop skills in interacting with embedded file systems.

---

## **How-To Run**
### **Hardware Requirements**
- ESP32 development board
- USB cable for programming
- Computer with Arduino IDE installed

### **Setup Steps**
1. **Install ESP32 Board Manager**:
   - Follow the same steps outlined in the Wi-Fi Scanner guide.

2. **Load the Code**:
   - Copy and paste the SPIFFS Explorer code into a new Arduino sketch.
   - Save the sketch as `SPIFFSExplorer.ino`.

3. **Select Your Board and Port**:
   - Follow the same steps outlined in the Wi-Fi Scanner guide.

4. **Upload the Code**:
   - Click the **Upload** button in the Arduino IDE.

5. **Open the Serial Monitor**:
   - Set the baud rate to **115200**.

---

## **Usage**
1. Type commands in the Serial Monitor to interact with the ESP32:
   - `list`: Lists all files in SPIFFS.
   - `read <filename>`: Reads the contents of a file.
   - `hint`: Provides a clue about the flag's location.
2. Explore the files and read the correct one (e.g., `/flag_hidden.txt`) to retrieve the flag.

---

## **Learning Outcomes**
- Understand SPIFFS file systems and their applications.
- Learn file operations: create, list, and read files.
- Enhance serial communication skills while exploring embedded systems.
