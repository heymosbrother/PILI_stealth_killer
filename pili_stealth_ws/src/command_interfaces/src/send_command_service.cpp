#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/Command.hpp"

#include <memory>

void HandleCommand(const std::shared_ptr<command_interfaces::srv::Command::Request> request,
          std::shared_ptr<command_interfaces::srv::Command::Response> response)
{
    response->command_array = {request->input1, request->input2 , request->input3, request->input4, request->input5, request->input6};
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\n type in command: %hhu, %u, %u, %u, %u, %u",
                request->input1, request->input2, request->input3, request->input4, request->input5, request->input6);

    //std::string CommandString =
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "confirmed response: %hhu, %u, %u, %u, %u, %u", response->command_array[0], response->command_array[1]
    , response->command_array[2], response->command_array[3], response->command_array[4], response->command_array[5]);

    //uart to stm
    int serial =0;
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
    for(int i = 0; i < 6; i++){
        //buffer[0] = static_cast<uint8_t>(command_array);
        ssize_t bytesWritten = write(serial, command_array, 6);

        if (bytesWritten != 6){
            std::cerr << "Failed to write to serial port. Bytes written: " << bytesWritten << std::endl;
        }
        else {
            std::cout << "send command bytes:";
            //consider to save csv here
            for (int j = 0; j < 6; j++) {
                std::cout << static_cast<int>(command_array[j]) << " ";
            }

        }
            std::cout << std::endl;
        }
        delay(1000);
    }
    // Close the serial port
    serialClose(serial);
}

int main(int argc, char **argv)
{

    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("send_command_server");

    rclcpp::Service<command_interfaces::srv::Command>::SharedPtr service =
    node->create_service<command_interfaces::srv::Command>("send_command", &HandleCommand);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to send command.");



    rclcpp::spin(node);
    rclcpp::shutdown();
}
