#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#define RX_PIN 16  // GPIO pin RX
#define ARRAY_SIZE 6 // Size of the received array

int main() {
    std::cout << "1" << " ";
    wiringPiSetup();
    if (wiringPiSetup() == -1) {
        std::cerr << "Failed to initialize WiringPi library." << std::endl;
        return 0;
    }
    std::cout << "1" << " ";

    // open port ttyS0 tty50 ttyAMA10 ttyACM0:-1 ttyAMA0:fail to open, serial: fail, AMA1: fail
    int serial = serialOpen("/dev/ttyAMA0", 115200);
    std::cout << serial << " ";
    if (serial == -1) {
        std::cerr << "Failed to open serial port." << std::endl;
        return 0;
    }
    std::cout << "end1 start receiving" << std::endl;

    // 1 array per sec
    while (true) {
        uint8_t data[ARRAY_SIZE];
        std::cout << "data array" << std::endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            // return int
            int elements = serialGetchar(serial);
            data[i] = elements;
            std::cout << elements << std::endl;
            //printf("received: %s\n", data[i]);
        }

        
        char letter = static_cast<char>(data[0]) ; // char
        uint8_t numbers[ARRAY_SIZE - 1]; // uint8_t
        for (int i = 0; i < (ARRAY_SIZE - 1); i++) {
            numbers[i] = data[i + 1];
        }

        printf("received char: %c \n", letter);
        for (int i = 0; i < (ARRAY_SIZE - 1); i++) {
            printf("received num: %d \n", numbers[i]);
        }
        std::cout << std::endl;
    }
    serialClose(serial);

    return 0;
}
