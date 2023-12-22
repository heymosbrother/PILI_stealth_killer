//command_service_server.cpp
#include "rclcpp/rclcpp.hpp"
#include "more_interfaces/srv/command_service.hpp"
/*#include <wiringPi.h>
#include <wiringSerial.h>
*/
class CommandServiceServer : public rclcpp::Node
{
public:
    explicit CommandServiceServer()
        : Node("command_service_server")
    {
        // Create the service
        service_ = create_service<more_interfaces::srv::CommandService>(
            "command_service", std::bind(&CommandServiceServer::handle_request, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    void handle_request(const std::shared_ptr<more_interfaces::srv::CommandService::Request> request,
                    std::shared_ptr<more_interfaces::srv::CommandService::Response> response)
    {
        // Format the response as (mode;vm1,tm1;vm2,tm2;...)
        // Populate the allcmd array with values
        /*
        Get user input for the mode field
        std::cout << "Enter the value for mode (uint8): ";
        while (!(std::cin >> request->mode)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid uint8 value for mode: ";
        }
        */
        response->allcmd[0] = static_cast<uint8_t>(request->mode);
        response->allcmd[1] = request->vm1;
        response->allcmd[2] = request->tm1;
        response->allcmd[3] = request->vm2;
        response->allcmd[4] = request->tm2;
        response->allcmd[5] = request->vm3;
        response->allcmd[6] = request->tm3;
        response->allcmd[7] = request->ts;

        RCLCPP_INFO(get_logger(), "Received request ");
        for (const auto& element : response->allcmd) {
        RCLCPP_INFO(get_logger(), "%u", element);
        }

    }


    rclcpp::Service<more_interfaces::srv::CommandService>::SharedPtr service_;
};

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
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CommandServiceServer>());
    rclcpp::shutdown();
    return 0;
}
