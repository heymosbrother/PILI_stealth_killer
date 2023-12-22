// UartSender.cpp
#include <wiringPi.h>
#include <wiringSerial.h>

class UartSender {
public:
    UartSender(const char* serialDevice, int baudRate) : serialDevice_(serialDevice), baudRate_(baudRate) {
        // Open the serial port for communication
        serial_ = serialOpen(serialDevice_, baudRate_);
        if (serial_ == -1) {
            fprintf(stderr, "Unable to open serial device\n");
        }
    }

    ~UartSender() {
        // Close the serial port when the object is destroyed
        if (serial_ != -1) {
            serialClose(serial_);
        }
    }

    // Method to send a uint8_t array over UART
    void sendData(const uint8_t data[], size_t size) {
        for (size_t i = 0; i < size; ++i) {
            // Send each byte of the array over UART
            serialPutchar(serial_, data[i]);
        }
    }

private:
    const char* serialDevice_;
    int baudRate_;
    int serial_;  // File descriptor for the serial port
};
int main() {
    // Modify the serial device and baud rate here
    UartSender uartSender("/dev/ttyS0", 115200);

    // Your code for sending data...
    uint8_t dataToSend[] = [1, 2, 3, 4, 5, 6, 7, 8];
    uartSender.sendData(dataToSend, sizeof(dataToSend));

    return 0;
}