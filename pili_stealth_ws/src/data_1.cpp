#include <iomanip>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>

int main() {
    int serial;
    const int bufferSize = 6;
    uint8_t buffer[bufferSize];
    int Data[bufferSize];
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

    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm now_tm = *std::localtime(&now_c);
    // Format the current time as a string
    std::ostringstream oss;
    oss << std::put_time(&now_tm, "%Y%m%d_%H%M%S");
    std::string current_time_str = oss.str();

    // Construct the filename
    std::string filename = "/root/PILI_stealth_killer/pili_stealth_ws/src/record/data_" + current_time_str + ".csv";

    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        // write to the CSV file
        file << "\n########################\n"
             << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S") << "\n";
        file.close();
    }   

    // 1 array per sec
    while (true) {
        bytesRead = 0;
        while(bytesRead < bufferSize){
            if (serialDataAvail(serial)){
                data = serialGetchar(serial);
                if (data != -1){
                    buffer[bytesRead] = static_cast<uint8_t>(data);
                    Data[bytesRead] = static_cast<int>(data);
                    bytesRead++;
                }
            }
        }

        std::cout << "Received 6 uint8_t bytes:";
        for (int i =0; i < bufferSize; i++){
            int numData = static_cast<int>(buffer[i]);
            std::cout << numData << " ";
            }
        
        // Get current time
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        std::tm now_tm = *std::localtime(&now_c);
        // Open CSV file in append mode
        std::ofstream file(filename, std::ios::app);
        //filename = "/root/PILI_stealth_killer/pili_stealth_ws/src/record/data.csv"
        if (file.is_open()) {
            // Write the inputs to the CSV file
            file << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S") << ",   "
                    << std::setw(3) << static_cast<int>(buffer[0]) << ", "
                    << std::setw(3) << static_cast<int>(buffer[1]) << ", "
                    << std::setw(3) << static_cast<int>(buffer[2]) << ", "
                    << std::setw(3) << static_cast<int>(buffer[3]) << ", "
                    << std::setw(3) << static_cast<int>(buffer[4]) << ", "
                    << std::setw(3) << static_cast<int>(buffer[5]) << "\n";
            file.close();
            }

        std::cout << "\n//// \n";

        std::cout << "in int:";
        for (int i = 0; i < bufferSize; i++){
            std::cout << Data[i] << " ";
        }
        std::cout << std::endl;

        delay(1000);
    }

    serialClose(serial);
    return 0;
}