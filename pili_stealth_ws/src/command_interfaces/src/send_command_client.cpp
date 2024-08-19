#include <iomanip>
#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/command.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    if (argc != 7) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "type in 6 commands ");
        return 1;
    }
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("send_command_client");
    rclcpp::Client<command_interfaces::srv::Command>::SharedPtr client =
      node->create_client<command_interfaces::srv::Command>("send_command");

    auto request = std::make_shared<command_interfaces::srv::Command::Request>();
    request->input1 = std::stoi(argv[1]); //to uint8？ static_cast<uint8_t>(intValue)
    request->input2 = std::stoi(argv[2]);
    request->input3 = std::stoi(argv[3]); 
    request->input4 = std::stoi(argv[4]);
    request->input5 = std::stoi(argv[5]);
    request->input6 = std::stoi(argv[6]); 

    while (!client->wait_for_service(std::chrono::seconds(1))) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
    }
    auto result = client->async_send_request(request);
    // Wait for the result.
    if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
    {
        //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "response command uint8_t : "+ std::to_string(result.get()->command_array));
        //or send as string?
        // Get current time
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        std::tm now_tm = *std::localtime(&now_c);
        // Open CSV file in append mode
        std::ofstream file("/root/PILI_stealth_killer/pili_stealth_ws/record/command_history.csv", std::ios::app);
        if (file.is_open()) {
            // Write the inputs to the CSV file
            file << std::put_time(&now_tm, "%Y-%m-%d %H:%M:%S") << ","
                 << static_cast<int>(result.get()->command_array[0]) << ","
                 << static_cast<int>(result.get()->command_array[1]) << ","
                 << static_cast<int>(result.get()->command_array[2]) << ","
                 << static_cast<int>(result.get()->command_array[3]) << ","
                 << static_cast<int>(result.get()->command_array[4]) << ","
                 << static_cast<int>(result.get()->command_array[5]) << "\n";
            file.close();
            }

    } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");
    }
    
    rclcpp::spin(node);
    std::ofstream file("/root/PILI_stealth_killer/pili_stealth_ws/record/command_history.csv", std::ios::app);
    if (file.is_open()) {
        // Write the end to the CSV file
        file <<"\n####################\n";
        file.close();
    }
    rclcpp::shutdown();
    return 0;

}
