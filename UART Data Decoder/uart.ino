void setup() {
  // Start the serial communication at 115200 baud rate
  Serial.begin(115200);
  while (!Serial) {
    ; // Wait for the serial port to connect
  }

  // Send instructions
  Serial.println("Welcome to the UART Data Decoder Challenge!");
  Serial.println("Decode the following hexadecimal data to retrieve the flag:");
  Serial.println("Enter 'send' to receive the encoded data.");
}

void loop() {
  // Check if there's incoming data
  if (Serial.available() > 0) {
    String command = Serial.readString();
    command.trim(); // Remove extra whitespace or newlines

    if (command.equalsIgnoreCase("send")) {
      // Send the encoded flag in hexadecimal format
      Serial.println("Encoded Data: 45 53 50 7B 55 41 52 54 5F 44 65 63 30 64 33 7D");
      Serial.println("Decode the hex to reveal the flag.");
    } else {
      Serial.println("Invalid command. Type 'send' to get the encoded data.");
    }
  }
}
