#include <wiringPi.h>
#include <iostream>

#define DATA_PIN 17 // Example GPIO pin for data reception

int main() {
    // Initialize WiringPi library
    if (wiringPiSetupGpio() == -1) {
        std::cerr << "Failed to initialize WiringPi library\n";
        return 1;
    }

    // Set the GPIO pin for data reception
    pinMode(DATA_PIN, INPUT);

    // Assuming the STM32 sends data byte by byte
    while (true) {
        // Read data byte by byte
        uint8_t receivedByte = 0;
        for (int i = 0; i < 8; ++i) {
            // Read each bit of the byte
            receivedByte |= (digitalRead(DATA_PIN) << i);

            // Optionally, you may need to introduce a delay here to match the STM32's baud rate
        }

        // Process the received byte
        // You can store it in an array or perform any other required operations
        //they are not saved yet
        std::cout << "Received byte: " << static_cast<int>(receivedByte) << std::endl;

        // Repeat the process for the next byte
    }

    return 0;
}
#include <iostream>
#include <cstdint>
#include <wiringPi.h>

#define DATA_PIN 0  // GPIO pin connected to data line from STM32
#define ARRAY_SIZE 6 // Size of the uint8_t array

int main() {
    uint8_t dataArray[ARRAY_SIZE];  // Define the array to store received data

    if (wiringPiSetup() == -1) {  // Initialize WiringPi
        std::cerr << "Unable to initialize WiringPi" << std::endl;
        return 1;
    }

    pinMode(DATA_PIN, INPUT); // Set GPIO pin as input

    // Read data continuously
    while (1) {
        // Read data from GPIO pin into dataArray
        for (int i = 0; i < ARRAY_SIZE; i++) {
            uint8_t receivedByte = 0;
            for (int bit = 0; bit < 8; bit++) {
                receivedByte |= digitalRead(DATA_PIN) << bit;
                // Shift received byte by 1 bit to the left for next bit
                //delay(1); // Adjust delay based on your STM32 transmission speed
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
    }

    return 0;
}
#include <wiringPi.h>
//#include <stdint.h>
#include <iostream>

#define RX_PIN  0  // Use the GPIO pin number where you connected the STM32's TX pin
#define TX_PIN  1  // Use the GPIO pin number where you connected the STM32's RX pin

int main() {
    if (wiringPiSetup() == -1) {
        std::cerr << "Failed to initialize WiringPi." << std::endl;
        return 1;
    }

    pinMode(RX_PIN, INPUT);
    pinMode(TX_PIN, OUTPUT);

    while (true) {
        uint8_t data[10];  // Assuming your array size is 10
        for (int i = 0; i < 10; ++i) {
            // Receive data byte by byte
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

        // Now you have received the uint8_t array from STM32
        // Do something with the data, e.g., print it
        std::cout << "Received data: ";
        for (int i = 0; i < 10; ++i) {
            std::cout << static_cast<int>(data[i]) << " ";
        }
        std::cout << std::endl;

        delay(1000);  // Delay for 1 second before reading again
    }

    return 0;
}
