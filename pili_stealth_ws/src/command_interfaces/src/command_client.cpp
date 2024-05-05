#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/MyCommand.hpp"
#include <list>

using namespace std;
using MyCommand = your_package_name::srv::MyCommand;

uint8_t TransCmd(input){
    if (input == 'n'){
        int cmd = 255;
    }
    else{
        int cmd = std::stoi(input);
    }
    cmd = std::max(0, std::min(cmd, 255));
    cmd = static_cast<uint8_t>(cmd);
    return cmd;
}
int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("command_client");
    auto client = node->create_client<MyCommand>("command");

    while (!client->wait_for_service(std::chrono::seconds(1))) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(node->get_logger(), "Interrupted while waiting for the service. Exiting.");
            return 1;
        }
        RCLCPP_INFO(node->get_logger(), "Waiting for the service to be available...");
    }

    RCLCPP_INFO(node->get_logger(), "\nEnter command: mode, motor:0 1 2, direction:0/1, step, velocity \n type in integer 0-254 for command, n if no updated instruction");
    rclcpp::Rate loop_rate(10);
    while (rclcpp::ok()) {
        auto request = std::make_shared<MyCommand::Request>();
        RCLCPP_INFO(node->get_logger(), "\nNow enter mode");
        std::string mode_input;
        std::cin >> mode_input;
        switch(mode_input)
        {
            case '0' :
                int mode = std::stoi(mode_input);
                request->mode = static_cast<uint8_t>(mode);
                std::list<uint8_t, 10> AllCommandList = {mode, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                RCLCPP_INFO(node->get_logger(), "\nEnter all motor commands\n");

                std::string direction1_input;
                std::cin >> direction1_input;
                uint8_t direction1 = TransCmd(direction1_input);
                srd::string velocity1_input;
                std::cin >> velocity1_input;
                uint8_t velocity1 = TransCmd(velocity1_input);
                std::string step1_input;
                std::cin >> step1_input;
                uint8_t step1 = TransCmd(step1_input);

                std::string direction2_input;
                std::cin >> direction2_input;
                uint8_t direction2 = TransCmd(direction2_input);
                srd::string velocity2_input;
                std::cin >> velocity2_input;
                uint8_t velocity2 = TransCmd(velocity2_input);
                std::string step2_input;
                std::cin >> step2_input;
                uint8_t step2 = TransCmd(step2_input);

                std::string direction3_input;
                std::cin >> direction3_input;
                uint8_t direction3 = TransCmd(direction3_input);
                srd::string velocity3_input;
                std::cin >> velocity3_input;
                uint8_t velocity3 = TransCmd(velocity3_input);
                std::string step3_input;
                std::cin >> step3_input;
                uint8_t step3 = TransCmd(step3_input);


                AllCommandList = {mode,direction1, velocity1, step1, direction2, velocity2, step2, direction3, velocity3, step3};
                request->mode = mode;
                request->direction1 = direction1;
                request->velocity1 = velocity1;
                request->step1 = step1;
                request->direction2 = direction2;
                request->velocity2 = velocity2;
                request->step2 = step2;
                request->direction3 = direction3;
                request->velocity3 = velocity3;
                request->step3 = step3;

                break;
            case '1' :
                RCLCPP_INFO(node->get_logger(), "\nEnter which motor");
                std::string motor_select;
                std::cin >> motor_select;
                
                RCLCPP_INFO(node->get_logger(), "\nEnter the motor commands");


                break;
            default:
                RCLCPP_INFO(node->get_logger(), "\nSomething went wrong. Enter your commands again.");

        }

        // 将255视为无新指令
        if (mode == 0 || motor == 0) {
            mode = 255;
            motor = 255;
        }

        // 设置请求中的值
        request->mode = static_cast<uint8_t>(mode);
        request->motor = static_cast<uint8_t>(motor);

        auto result_future = client->async_send_request(request);
        if (rclcpp::spin_until_future_complete(node, result_future) !=
            rclcpp::executor::FutureReturnCode::SUCCESS)
        {
            RCLCPP_ERROR(node->get_logger(), "Failed to call service");
            return 1;
        }

        auto result = result_future.get();
        RCLCPP_INFO(node->get_logger(), "Result: %d", result->result);

        loop_rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}




using Command = your_package_name::srv::Command;
    // 用于存储每个马达的最近指令
    std::map<uint8_t, uint8_t> recent_commands;

    while (rclcpp::ok()) {
        auto request = std::make_shared<Command::Request>();
        std::string mode_input, motor_input;
        std::cin >> mode_input >> motor_input;

        // 如果输入不是字母'n'，则设置相应的字段
        if (mode_input != "n") {
            request->mode = static_cast<uint8_t>(mode_input[0]);
        }
        if (motor_input != "n") {
            request->motor = static_cast<uint8_t>(motor_input[0]);
        }
    }
