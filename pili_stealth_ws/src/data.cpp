#include <wiringPi.h>
#include <iostream>
#include <cstdint>
#define DATA_PIN 16  // GPIO pin RX
#define ARRAY_SIZE 6 // Size of the received array

// Function to detect start bit
bool detectStartBit() {
    while (digitalRead(DATA_PIN) == HIGH);  // Wait for start bit (logic low)
    delayMicroseconds(500000 / 115200);     // Wait for half of the first bit duration
    return true;                            // Start bit detected
}

int main() {
    if (wiringPiSetup() == -1) {  // Initialize WiringPi
        std::cerr << "Unable to initialize WiringPi" << std::endl;
        return 1;
    }

    pinMode(DATA_PIN, INPUT);  // Set GPIO pin as input

    // Read data continuously
    while (true) {
        // Read first char and uint8_t data from GPIO pin into receivedData
        if (!detectStartBit()) {
            std::cerr << "Error: Start bit not detected" << std::endl;
            return 1;
        }

        // Read first char
        char firstChar = 0;
        
        for (int bit = 0; bit < 8; bit++) {
            firstChar |= digitalRead(DATA_PIN) << bit;
            delayMicroseconds(1000000 / 115200);  // Wait for next bit
        }
        uint8_t dataArray[ARRAY_SIZE - 1];
        // Read remaining uint8_t data
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
            if (!detectStartBit()) {
                std::cerr << "Error: Start bit not detected" << std::endl;
                return 1;
            }
            uint8_t receivedByte = 0;
            for (int bit = 0; bit < 8; bit++) {
                receivedByte |= digitalRead(DATA_PIN) << bit;
                delayMicroseconds(1000000 / 115200);  // Wait for next bit
            }
            dataArray[i] = receivedByte;
        }

        // Process receivedData as needed
        // Example: print received data
        std::cout << "Received char: " << firstChar << std::endl;
        std::cout << "Received data: ";
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
            std::cout << static_cast<int>(dataArray[i]) << " ";
        }
        std::cout << std::endl;

        delay(950);  // Delay for 1 second before reading again
    }

    return 0;
}

/*
class CharAndData {
public:
    CharAndData() : firstChar(0) {}

    void readFromGPIO() {
        // Read first char
        firstChar = readCharFromGPIO();

        // Read remaining uint8_t data
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
            dataArray[i] = readByteFromGPIO();
        }
    }

    void printData() const {
        std::cout << "Received char: " << firstChar << std::endl;
        std::cout << "Received data: ";
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
            std::cout << static_cast<int>(dataArray[i]) << " ";
        }
        std::cout << std::endl;
    }

private:
    char firstChar;
    uint8_t dataArray[ARRAY_SIZE - 1];

    char readCharFromGPIO() {
        char value = 0;
        for (int bit = 0; bit < 8; bit++) {
            value |= digitalRead(DATA_PIN) << bit;
            delayMicroseconds(1000000 / 115200);  // Wait for next bit
        }
        return value;
    }

    uint8_t readByteFromGPIO() {
        uint8_t value = 0;
        for (int bit = 0; bit < 8; bit++) {
            value |= digitalRead(DATA_PIN) << bit;
            delayMicroseconds(1000000 / 115200);  // Wait for next bit
        }
        return value;
    }
};

// Function to detect start bit
bool detectStartBit() {
    while (digitalRead(DATA_PIN) == HIGH);  // Wait for start bit (logic low)
    delayMicroseconds(500000 / 115200);     // Wait for half of the first bit duration
    return true;                            // Start bit detected
}

int main() {
    if (wiringPiSetup() == -1) {  // Initialize WiringPi
        std::cerr << "Unable to initialize WiringPi" << std::endl;
        return 1;
    }

    pinMode(DATA_PIN, INPUT);  // Set GPIO pin as input

    CharAndData receivedData;  // Create an instance of the CharAndData class

    // Read data continuously
    while (true) {
        if (!detectStartBit()) {
            std::cerr << "Error: Start bit not detected" << std::endl;
            return 1;
        }

        receivedData.readFromGPIO();  // Read data from GPIO pin into receivedData

        // Process receivedData as needed
        receivedData.printData();  // Example: print received data

        delay(1000);  // Delay for 1 second before reading again
    }

    return 0;
}
*/
/*
// Function to detect start bit
bool detectStartBit() {
    while (digitalRead(DATA_PIN) == HIGH);  // Wait for start bit (logic low)
    delayMicroseconds(500000 / 115200);  // Wait for half of the first bit duration
    return true;  // Start bit detected
}

int main() {
    uint8_t dataArray[ARRAY_SIZE];  // Define the array to store received data

    if (wiringPiSetup() == -1) {  // Initialize WiringPi
        std::cerr << "Unable to initialize WiringPi" << std::endl;
        return 1;
    }

    pinMode(DATA_PIN, INPUT);  // Set GPIO pin as input

    // Read data continuously
    while (true) {
        // Read data from GPIO pin into dataArray
        for (int i = 0; i < ARRAY_SIZE; i++) {
            // Wait for start bit
            if (!detectStartBit()) {
                std::cerr << "Error: Start bit not detected" << std::endl;
                return 1;
            }
            
            uint8_t receivedByte = 0;
            for (int bit = 0; bit < 8; bit++) {
                receivedByte |= digitalRead(DATA_PIN) << bit;
                delayMicroseconds(1000000 / 115200);  // Wait for next bit
            }
            
            dataArray[i] = receivedByte;
        }

        // Process dataArray as needed
        // Example: print received data
        std::cout << "Received data: ";
        for (int i = 0; i < ARRAY_SIZE; i++) {
            std::cout << static_cast<int>(dataArray[i]) << " ";
        }
        std::cout << std::endl;

        delay(1000);  // Delay for 1 second before reading again
    }

    return 0;
}

/*
int main() {
  while (true) {
            for (int j = 0; j < 8; ++j) {
                // Wait for start bit
                while (digitalRead(RX_PIN) != LOW);
                // Wait half a bit time to sample data
                delayMicroseconds(500000 / 9600);
                // Read data bit
                data[i] |= digitalRead(RX_PIN) << j;
                // Wait for next bit
                delayMicroseconds(1000000 / 9600);
            }
        }
}
*/
