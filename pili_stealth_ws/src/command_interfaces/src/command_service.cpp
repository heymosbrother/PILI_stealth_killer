#include "rclcpp/rclcpp.hpp"
#include "command_interfaces/srv/MyCommand.hpp"

using Command = your_package_name::srv::MyCommand;

void handle_command(const std::shared_ptr<Command::Request> request,
                    std::shared_ptr<Command::Response> response)
{
    // 检查请求中是否设置了mode和motor字段
    if (request->has_mode() && request->has_motor()) {
        // 执行指令逻辑
        // 在这里示例为简单地打印指令
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Received command: mode=%d, motor=%d",
                     request->mode, request->motor);
        response->result = 0; // 设置响应中的result字段
    } else {
        // 如果mode和motor字段没有设置，则返回错误
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Missing mode or motor in command");
        response->result = 1; // 设置响应中的result字段
    }
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("command_server");
    auto server = node->create_service<Command>("command", handle_command);
    RCLCPP_INFO(node->get_logger(), "Command server is ready.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


#include "rclcpp/rclcpp.hpp"
#include "your_package_name/srv/command.hpp"

using Command = your_package_name::srv::Command;

// 用于存储每个马达的最近指令
std::map<uint8_t, uint8_t> recent_commands;

void handle_command(const std::shared_ptr<Command::Request> request,
                    std::shared_ptr<Command::Response> response)
{
    // 检查请求中是否设置了mode和motor字段
    if (request->has_mode() && request->has_motor()) {
        // 如果motor字段不是'n'，则更新对应马达的最近指令
        if (request->motor != 'n') {
            recent_commands[request->motor] = request->mode;
        }
        // 如果mode字段不是'n'，则使用请求中的指令，否则使用对应马达的最近指令
        uint8_t mode = (request->mode != 'n') ? request->mode : recent_commands[request->motor];
        // 执行指令逻辑
        // 在这里示例为简单地打印指令
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Received command: mode=%d, motor=%d",
                     mode, request->motor);
        response->result = 0; // 设置响应中的result字段
    } else {
        // 如果mode和motor字段没有设置，则返回错误
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Missing mode or motor in command");
        response->result = 1; // 设置响应中的result字段
    }
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("command_server");
    auto server = node->create_service<Command>("command", handle_command);
    RCLCPP_INFO(node->get_logger(), "Command server is ready.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
