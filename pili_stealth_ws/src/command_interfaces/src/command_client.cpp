#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/Command.srv"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    if (argc != 6) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: type in 6 commands");
        return 1;
    }
    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("send_command_client");
    rclcpp::Client<command_interfaces::srv::Command>::SharedPtr client = node->create_client<command_interfaces::srv::Command>("send_command");

    auto request = std::make_shared<command_interfaces::srv::Command::Request>();               // CHANGE
    request->mode_input = argv[1];
    request->int1_input = std::stoi(argv[2]);
    request->int2_input = std::stoi(argv[3]); 

    while (!client->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
            return 0;
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "mode: %c, input1: %d, input2: %d", request->mode_input, request->int1_input, request->int2_input);
    }
    

}