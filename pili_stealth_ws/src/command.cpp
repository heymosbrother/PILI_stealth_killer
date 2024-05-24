#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <unistd.h>

int main() {
    int serial;
    const int bufferSize = 6;
    uint8_t buffer[bufferSize] = {0, 25, 68, 95, 79, 86};// setting array's size to send

    // Initialize wiringPi
    if (wiringPiSetup() == -1) {
        std::cerr << "Unable to start wiringPi" << std::endl;
        return 1;
    }
    // Open the serial port
    if ((serial = serialOpen("/dev/ttyAMA0", 115200)) == -1) {
        std::cerr << "Failed to open serial device" << std::endl;
        return 1;
    }
    while(true){
        for(int i = 0; i < 3; i++){
            buffer[0] = 97 + static_cast<uint8_t>(i);
            buffer[3] = static_cast<uint8_t>(i);
            ssize_t bytesWritten = write(serial, buffer, bufferSize);
        
            if (bytesWritten != bufferSize){
                std::cerr << "Failed to write to serial port. Bytes written: " << bytesWritten << std::endl;
            }
            else {
                std::cout << "Sent bytes:";

                for (int j = 0; j < bufferSize; j++) {
                    if (j ==0) {
                        std::cout << static_cast<char>(buffer[j]) << " ";
                    }
                    else{
                        std::cout << static_cast<int>(buffer[j]) << " ";
                    }

                }
                std::cout << std::endl;
            }
            delay(1000);
        }
    }
    // Close the serial port
    serialClose(serial);

    return 0;
}