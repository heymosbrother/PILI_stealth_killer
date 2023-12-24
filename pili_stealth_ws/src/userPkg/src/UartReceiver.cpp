//UartReceiver.cpp
// date:12/24 for receiving uart data
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/uint8_multi_array.hpp"
#include <wiringPi.h>
#include <wiringSerial.h>

class UartSubscriber : public rclcpp::Node {
public:
    UartSubscriber() : Node("uart_subscriber") {
        // Assuming UART0 and baud rate 115200
        uart_serial_ = serialOpen("/dev/ttyS0", 115200);

        if (uart_serial_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open serial device");
            rclcpp::shutdown();
        }

        uart_subscriber_ = this->create_subscription<std_msgs::msg::UInt8MultiArray>(
            "uart_data", 10, std::bind(&UartSubscriber::uartDataCallback, this, std::placeholders::_1));
    }

private:
    void uartDataCallback(const std_msgs::msg::UInt8MultiArray::SharedPtr msg) {
        if (msg->data.size() != 8) {
            RCLCPP_WARN(this->get_logger(), "Received invalid data size from UART");
            return;
        }

        // Process the received data
        uint8_t receivedData[8];
        for (size_t i = 0; i < msg->data.size(); ++i) {
            receivedData[i] = msg->data[i];
        }

        // Your code to process the receivedData array goes here
        // Example: Print received data to console
        RCLCPP_INFO(this->get_logger(), "Received data from STM32: %u, %u, %u, %u, %u, %u, %u, %u",
                    receivedData[0], receivedData[1], receivedData[2], receivedData[3],
                    receivedData[4], receivedData[5], receivedData[6], receivedData[7]);
    }

    int uart_serial_;
    rclcpp::Subscription<std_msgs::msg::UInt8MultiArray>::SharedPtr uart_subscriber_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);

    // Initialize WiringPi
    if (wiringPiSetup() == -1) {
        RCLCPP_ERROR(rclcpp::get_logger("main"), "Unable to initialize WiringPi");
        return -1;
    }

    rclcpp::spin(std::make_shared<UartSubscriber>());
    rclcpp::shutdown();
    return 0;
}

/*
class UartPublisher : public rclcpp::Node {
public:
    UartPublisher() : Node("uart_publisher") {
        uart_serial_ = serialOpen("/dev/ttyS0", 115200); // Assuming UART0 and baud rate 115200
        if (uart_serial_ == -1) {
            RCLCPP_ERROR(this->get_logger(), "Unable to open serial device");
            rclcpp::shutdown();
        }

        uart_publisher_ = this->create_publisher<std_msgs::msg::UInt8>("uart_data", 10);

        // Create a timer to periodically read data and publish
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000),
                                         std::bind(&UartPublisher::publishUartData, this));
    }

private:
    void publishUartData() {
        uint8_t dataToSend = 42;
        serialPutchar(uart_serial_, dataToSend);

        // Read the received data
        uint8_t receivedData;
        if (serialDataAvail(uart_serial_)) {
            receivedData = serialGetchar(uart_serial_);

            // Publish the received data to the ROS 2 topic
            auto msg = std_msgs::msg::UInt8();
            msg.data = receivedData;
            uart_publisher_->publish(msg);
        }
    }

    int uart_serial_;
    rclcpp::Publisher<std_msgs::msg::UInt8>::SharedPtr uart_publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};
*/