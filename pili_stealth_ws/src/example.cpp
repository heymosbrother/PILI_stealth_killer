#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>

int main() {
    // 初始化 WiringPi 库
    if (wiringPiSetup() == -1) {
        std::cerr << "Failed to initialize WiringPi library." << std::endl;
        return 1;
    }

    // 打开串口，假设串口文件描述符是 serial
    int serial = serialOpen("/dev/ttyAMA10", 115200);
    if (serial == -1) {
        std::cerr << "Failed to open serial port." << std::endl;
        return 1;
    }

    // 从串口中读取字符并打印
    while (true) {
        int data = serialGetchar(serial);
        if (data == -1) {
            std::cerr << "Failed to read from serial port." << std::endl;
            return 1;
        }
        std::cout << "Received character: " << static_cast<char>(data) << std::endl;
    }

    // 关闭串口
    serialClose(serial);

    return 0;
}
