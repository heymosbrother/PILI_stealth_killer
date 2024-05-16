#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#define RX_PIN 16  // GPIO pin RX PIN 16
#define ARRAY_SIZE 6 // Size of the received array

int main() {
    //wiringPiSetup();
    if (wiringPiSetup() == -1) {
        std::cerr << "Failed to initialize WiringPi library." << std::endl;
        return 1;
    }
    // open port ttyAMA0
    int serial = serialOpen("/dev/ttyAMA0", 115200);
    if (serial == -1) {
        std::cerr << "Failed to open serial port." << std::endl;
        return 1;
    }
    std::cout << "start receiving" << std::endl;

    // 1 array per sec
    while (true) {
        uint8_t data[ARRAY_SIZE];
        //data = uint8_t(serialGetchar(serial));
        int byte [ARRAY_SIZE];//*
        int e = 0;//*
        while(serialDataAvail(serial) < ARRAY_SIZE){
            
            //byte[e] = serialGetchar(serial);
            //std::cout << byte[e] << std::endl;
            //e++;
            delayMicroseconds(500000/115200);

        }
        printf("elements #: %d \n", serialDataAvail(serial));
        std::cout << "data array" << std::endl;
        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            // return int
            int bytes = serialGetchar(serial); //getchar return int
            data[i] = static_cast<uint8_t>(bytes);
            //printf("elements: %d \n", serialDataAvail(serial));
            printf("data: %d \n", data[i]);
            //printf("received: %s\n", data[i]);
        }
        for (int i = 0; i < ARRAY_SIZE; i++){
            char letter = static_cast<char>(data[i]);
            printf("received: %c \n", letter);
        }
        //it only shows the first char of every array
        delayMicroseconds(1000000-6000000/115200);
/*
        
        char letter = static_cast<char>(data[0]) ; // char
        uint8_t numbers[ARRAY_SIZE - 1]; // uint8_t
        for (int i = 0; i < (ARRAY_SIZE - 1); i++) {
            numbers[i] = data[i + 1];
        }

        printf("received char: %c \n", letter);
        for (int i = 0; i < (ARRAY_SIZE - 1); i++) {
            printf("received num: %d \n", numbers[i]);
        }*/
        std::cout << std::endl;
    }
    serialClose(serial);

    return 0;
}
