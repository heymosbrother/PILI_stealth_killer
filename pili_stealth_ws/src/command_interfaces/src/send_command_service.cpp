#include <iomanip>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/command.hpp"

#include <memory>

int HandleCommand(const std::shared_ptr<command_interfaces::srv::Command::Request> request,
          std::shared_ptr<command_interfaces::srv::Command::Response> response)
{   uint8_t command_array[] = {0, 0, 0, 0, 0, 0};
    response->command_array = {request->input1, request->input2 , request->input3, request->input4, request->input5, request->input6};
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\n type in command: %hhu, %u, %u, %u, %u, %u",
                request->input1, request->input2, request->input3, request->input4, request->input5, request->input6);

    //std::string CommandString =
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "confirmed response: %hhu, %u, %u, %u, %u, %u", response->command_array[0], response->command_array[1]
    , response->command_array[2], response->command_array[3], response->command_array[4], response->command_array[5]);
    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm now_tm = *std::localtime(&now_c);
    // Open CSV file in append mode
    std::string filename = "/root/PILI_stealth_killer/pili_stealth_ws/src/record/command_log.csv";
    std::ofstream file(filename, std::ios::app);
    //filename = "/root/PILI_stealth_killer/pili_stealth_ws/src/record/data.csv"
    if (file.is_open()) {
        // Write the inputs to the CSV file
        file << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S") << ",   "
                << std::setw(3) << static_cast<int>(command_array[0]) << ", "
                << std::setw(3) << static_cast<int>(command_array[1]) << ", "
                << std::setw(3) << static_cast<int>(command_array[2]) << ", "
                << std::setw(3) << static_cast<int>(command_array[3]) << ", "
                << std::setw(3) << static_cast<int>(command_array[4]) << ", "
                << std::setw(3) << static_cast<int>(command_array[5]) << "\n";
        file.close();
        }
    //uart to stm
    int serial = 0;
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
        //sent-command log

        for(int i = 0; i < 6; i++){
            serialPutchar(serial, command_array[i]);
        }
        std::cout << "send command bytes:";
        //consider to save csv here

        for (int j = 0; j < 6; j++) {
            std::cout << static_cast<int>(command_array[j]) << " ";
        }
        std::cout << std::endl;
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

    // Get current time
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm now_tm = *std::localtime(&now_c);
    // Format the current time as a string
    std::ostringstream oss;
    oss << std::put_time(&now_tm, "%Y%m%d_%H%M%S");
    std::string current_time_str = oss.str();

    // Construct the filename
    std::string filename = "/root/PILI_stealth_killer/pili_stealth_ws/src/record/command_log.csv";

    std::ofstream file(filename, std::ios::app);
    if (file.is_open()) {
        // write to the CSV file
        file << "\n########################\n"
             << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S") << "\n";
        file.close();
    } 


    rclcpp::spin(node);
    rclcpp::shutdown();
}
