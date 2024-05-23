#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#define RX_PIN 16  // GPIO pin RX PIN 16

int main() {
    int serial;
    const int bufferSize = 6;
    uint8_t buffer[bufferSize];
    int bytesRead = 0;
    int data;
    wiringPiSetup();
    if (wiringPiSetup() == -1) {
        std::cerr << "Failed to initialize WiringPi library." << std::endl;
        return 1;
    }
    // open port ttyAMA0
    serial = serialOpen("/dev/ttyAMA0", 115200);
    if (serial == -1) {
        std::cerr << "Failed to open serial port." << std::endl;
        return 1;
    }
    std::cout << "start receiving" << std::endl;

    // 1 array per sec
    while (true) {
        bytesRead = 0;

        while(bytesRead < bufferSize){
            if (serialDataAvail(serial)){
                data = serialGetchar(serial);
                if (data != -1){
                    buffer[bytesRead] = static_cast<uint8_t>(data);
                    bytesRead++;
                }
            }
        }
        std::cout << "Received 6 bytes:";
        for (int i =0; i < bufferSize; i++){
            if (buffer[i] < 47){
                std::cout << static_cast<int>(buffer[i]) << " ";
            }
            else{
                std::cout << buffer[i] << " ";
            }
        }
        std::cout << std::endl;

        delay(1000);

    }
        
    serialClose(serial);

    return 0;
}
