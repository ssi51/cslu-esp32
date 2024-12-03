# UART Data Decoder Challenge

This project challenges participants to decode hexadecimal data sent by the ESP32 over UART to retrieve a hidden flag. It focuses on decoding data formats and interpreting raw serial output.

---

## **Objective**
- Learn how to send and receive data via UART communication.
- Practice decoding hexadecimal data into ASCII.
- Develop problem-solving skills in interpreting encoded information.

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
   - Copy and paste the UART Data Decoder code into a new Arduino sketch.
   - Save the sketch as `UARTDataDecoder.ino`.

3. **Select Your Board and Port**:
   - Follow the same steps outlined in the Wi-Fi Scanner guide.

4. **Upload the Code**:
   - Click the **Upload** button in the Arduino IDE.

5. **Open the Serial Monitor**:
   - Set the baud rate to **115200**.

---

## **Usage**
1. Type `send` in the Serial Monitor to receive the encoded hexadecimal data
2. Decode the data manually or using tools to reveal the flag.

---

## **Learning Outcomes**
- Understand UART communication and how data is sent over a serial connection.
- Learn how to decode hexadecimal data into ASCII format.
- Enhance problem-solving skills in data interpretation.

---

## **Bonus**
You can decode the hex data using Python:
```python
data = "[Input hex here]"
print(bytearray.fromhex(data).decode())
```
