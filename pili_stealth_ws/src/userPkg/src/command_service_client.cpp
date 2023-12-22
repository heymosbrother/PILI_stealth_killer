//command_service_client.cpp
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/executors.hpp"
#include "more_interfaces//srv/command_service.hpp"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    // client node name
    auto node = rclcpp::Node::make_shared("command_service_client");

    // Create the service client
    //service node name
    auto client = node->create_client<more_interfaces::srv::CommandService>("command_service");
        // Wait for the service to be available
    if (!client->wait_for_service(std::chrono::seconds(5))) {
        RCLCPP_ERROR(node->get_logger(), "Service not available.");
        return 1;
    }

    // Prepare the request
    auto request = std::make_shared<more_interfaces::srv::CommandService::Request>();
    // Get user input for the mode field
    std::cout << "Enter the value or n for mode: ";
    std::string mode_input;
    std::cin >> mode_input;
    request->mode = (mode_input == "n") ? 0 : std::stoi(mode_input);
    
    std::cout << "Enter the value for Vm1: ";
    std::cin >> request->vm1;
    std::cout << "Enter the value for Tm1: ";
    std::cin >> request->tm1;
    std::cout << "Enter the value for Vm2: ";
    std::cin >> request->vm2;
    std::cout << "Enter the value for Tm2: ";
    std::cin >> request->tm2;

    std::cout << "Enter the value for Vm3: ";
    std::cin >> request->vm3;
    std::cout << "Enter the value for Tm3: ";
    std::cin >> request->tm3;
    std::cout << "Enter the value for Ts: ";
    std::cin >> request->ts ;


    // Send the request
    auto result_future = client->async_send_request(request);
    // Wait for the response
    if (rclcpp::spin_until_future_complete(node, result_future) !=
       rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_ERROR(node->get_logger(), "Service call failed.");
        return 1;
    }
    // Process the response
    auto response = result_future.get();
    // Print each element of the array individually
    RCLCPP_INFO(node->get_logger(), "All commands received:");
    for (const auto& element : response->allcmd) {
        RCLCPP_INFO(node->get_logger(), "%u", element);
    }


    rclcpp::shutdown();
    return 0;
}
