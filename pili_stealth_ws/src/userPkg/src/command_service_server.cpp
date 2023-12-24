//command_service_server.cpp
#include "rclcpp/rclcpp.hpp"
#include "more_interfaces/srv/command_service.hpp"
#include <wiringPi.h>
#include <wiringSerial.h>

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
        
        response->allcmd[0] = (request->mode == 255) ? 'n' : static_cast<uint8_t>(request->mode);
        response->allcmd[1] = (request->vm1 == 255) ? 'n' : static_cast<uint8_t>(request->vm1);
        response->allcmd[2] = (request->tm1 == 255) ? 'n' : static_cast<uint8_t>(request->tm1);
        response->allcmd[3] = (request->vm2 == 255) ? 'n' : static_cast<uint8_t>(request->vm2);
        response->allcmd[4] = (request->tm2 == 255) ? 'n' : static_cast<uint8_t>(request->tm2);
        response->allcmd[5] = (request->vm3 == 255) ? 'n' : static_cast<uint8_t>(request->vm3);
        response->allcmd[6] = (request->tm3 == 255) ? 'n' : static_cast<uint8_t>(request->tm3);
        response->allcmd[7] = (request->ts == 255) ? 'n' : static_cast<uint8_t>(request->ts);
        
        uint8_t sendcmd[8] = {request->mode,request->vm1,request->tm1,request->vm2,request->tm2,request->vm3,request->tm3,request->ts};
        /*RCLCPP_INFO(get_logger(), "Received request ");
        for (const auto& element : response->allcmd) {
        RCLCPP_INFO(get_logger(), "%u", element);
        }*/
        RCLCPP_INFO(get_logger(), "Received request %.*s", static_cast<int>(response->allcmd.size()), response->allcmd.data());
        
        // Send the sendcmd array via UART
        int uart_serial = serialOpen("/dev/ttyS0", 115200);  // Adjust the serial port and baud rate
        if (uart_serial != -1) {
            serialPuts(uart_serial, reinterpret_cast<char*>(sendcmd));
            serialClose(uart_serial);
        } else {
            RCLCPP_ERROR(get_logger(), "Unable to open serial device");
        }
    }


    rclcpp::Service<more_interfaces::srv::CommandService>::SharedPtr service_;
};
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    // Initialize WiringPi
    if (wiringPiSetup() == -1) {
        RCLCPP_ERROR(rclcpp::get_logger("main"), "Unable to initialize WiringPi");
        return -1;
    }
    rclcpp::spin(std::make_shared<CommandServiceServer>());
    rclcpp::shutdown();
    return 0;
}