//command_service_client.cpp
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/executors.hpp"
#include "more_interfaces//srv/command_service.hpp"

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    // client node name
    auto node = rclcpp::Node::make_shared("command_service_client");
    // Create the service client
    //service name
    auto client = node->create_client<more_interfaces::srv::CommandService>("command_service");
        // Wait for the service to be available
    if (!client->wait_for_service(std::chrono::seconds(5))) {
        RCLCPP_ERROR(node->get_logger(), "Service not available.");
        return 1;
    }

    // Prepare the request
    auto request = std::make_shared<more_interfaces::srv::CommandService::Request>();
    // Get user input for the mode field
    std::cout << "Enter the value or n for the following sequence\nmode Vm1 Tm1 Vm2 Tm2 Vm3 Tm3 Ts: \n";
    std::string mode_input;
    std::cin >> mode_input;
    request->mode = (mode_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(mode_input));
    std::string vm1_input;
    std::cin >> vm1_input;
    request->vm1 = (vm1_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(vm1_input));
    std::string tm1_input;
    std::cin >> tm1_input;
    request->tm1 = (tm1_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(tm1_input));
    std::string vm2_input;
    std::cin >> vm2_input;
    request->vm2 = (vm2_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(vm2_input));
    std::string tm2_input;
    std::cin >> tm2_input;
    request->tm2 = (tm2_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(tm2_input));
    std::string vm3_input;
    std::cin >> vm3_input;
    request->vm3 = (vm3_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(vm3_input));
    std::string tm3_input;
    std::cin >> tm3_input;
    request->tm3 = (tm3_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(tm3_input));
    std::string ts_input;
    std::cin >> ts_input;
    request->ts = (ts_input == "n") ? 255 : static_cast<uint8_t>(std::stoi(ts_input));

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
        if (element == 'n') {
            RCLCPP_INFO(node->get_logger(), "'n' ");
        } else {
            RCLCPP_INFO(node->get_logger(), "%u" , element);
        }
    }


    rclcpp::shutdown();
    return 0;
}
