#include "FS.h"
#include "SPIFFS.h"

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // Wait for serial port to connect
  }

  // Initialize SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("SPIFFS Mount Failed");
    return;
  }

  Serial.println("SPIFFS Initialized Successfully");

  // Create some example files for participants to explore
  createExampleFiles();

  // Provide instructions
  Serial.println("Welcome to the SPIFFS Explorer Challenge!");
  Serial.println("Use commands to explore and retrieve the hidden flag.");
  Serial.println("Commands:");
  Serial.println("- list: List all files in SPIFFS.");
  Serial.println("- read <filename>: Read the contents of a file.");
  Serial.println("- hint: Get a hint about where the flag is.");
}

void loop() {
  // Wait for serial input
  if (Serial.available() > 0) {
    String command = Serial.readString();
    command.trim(); // Remove extra spaces or newlines

    if (command == "list") {
      listFiles();
    } else if (command.startsWith("read ")) {
      String filename = command.substring(5); // Extract filename
      readFile(filename);
    } else if (command == "hint") {
      Serial.println("Hint: The flag is hidden in a file that starts with 'flag'.");
    } else {
      Serial.println("Invalid command. Use 'list', 'read <filename>', or 'hint'.");
    }
  }
}

void createExampleFiles() {
  // Create a few example files
  writeFile("/hello.txt", "Welcome to the SPIFFS challenge!");
  writeFile("/instructions.txt", "Look for the hidden flag in the files.");
  writeFile("/flag_hidden.txt", "Congratulations! Your flag is: ESP{SPIFFS_3xplorer}");
}

void listFiles() {
  Serial.println("Listing files:");
  File root = SPIFFS.open("/");
  File file = root.openNextFile();
  while (file) {
    Serial.print("FILE: ");
    Serial.print(file.name());
    Serial.print(" (");
    Serial.print(file.size());
    Serial.println(" bytes)");
    file = root.openNextFile();
  }
}

void readFile(String path) {
  // Add leading slash if it's missing
  if (!path.startsWith("/")) {
    path = "/" + path;
  }

  Serial.print("Reading file: ");
  Serial.println(path);

  File file = SPIFFS.open(path, FILE_READ);
  if (!file) {
    Serial.println("Failed to open file for reading");
    return;
  }

  while (file.available()) {
    Serial.write(file.read());
  }
  Serial.println();
  file.close();
}

void writeFile(String path, String message) {
  File file = SPIFFS.open(path, FILE_WRITE);
  if (!file) {
    Serial.println("Failed to open file for writing");
    return;
  }
  file.print(message);
  file.close();
}
