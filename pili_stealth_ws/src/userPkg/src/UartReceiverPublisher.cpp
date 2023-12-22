// UartReceiverPublisher.cpp
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/u_int8_multi_array.hpp>
#include <wiringPi.h>
#include <wiringSerial.h>

class UartReceiverPublisher : public rclcpp::Node {
public:
    UartReceiverPublisher(const char* serialDevice, int baudRate)
        : Node("uart_receiver_publisher"), serialDevice_(serialDevice), baudRate_(baudRate) {

        // Open the serial port for communication
        uart_serial_ = serialOpen(serialDevice_, baudRate_);
        if (uart_serial_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open serial device");
            rclcpp::shutdown();
        }

        // Create a ROS 2 publisher for the "uart_data" topic
        uart_publisher_ = this->create_publisher<std_msgs::msg::UInt8MultiArray>("uart_data", 10);

        // Create a timer to periodically read data and publish
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000),
                                         std::bind(&UartReceiverPublisher::publishUartData, this));
    }

    ~UartReceiverPublisher() {
        // Close the serial port when the object is destroyed
        if (uart_serial_ != -1) {
            serialClose(uart_serial_);
        }
    }

private:
    void publishUartData() {
        uint8_t receivedData[8];

        // Read 8 bytes of data from the serial port
        for (size_t i = 0; i < 8; ++i) {
            if (serialDataAvail(uart_serial_)) {
                receivedData[i] = serialGetchar(uart_serial_);
            }
        }

        // Publish the received data to the ROS 2 topic
        auto msg = std_msgs::msg::UInt8MultiArray();
        msg.data = {receivedData[0], receivedData[1], receivedData[2], receivedData[3],
                    receivedData[4], receivedData[5], receivedData[6], receivedData[7]};
        uart_publisher_->publish(msg);
    }

    const char* serialDevice_;
    int baudRate_;
    int uart_serial_;  // File descriptor for the serial port
    rclcpp::Publisher<std_msgs::msg::UInt8MultiArray>::SharedPtr uart_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv) {
    // Initialize ROS 2
    rclcpp::init(argc, argv);

    // Create an instance of UartReceiverPublisher
    auto uartReceiverPublisher = std::make_shared<UartReceiverPublisher>("/dev/ttyS0", 115200);

    // Spin the node to handle ROS 2 events
    rclcpp::spin(uartReceiverPublisher);

    // Shutdown ROS 2
    rclcpp::shutdown();

    return 0;
}
