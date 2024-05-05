// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__BUILDER_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "command_interfaces/srv/detail/my_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace command_interfaces
{

namespace srv
{

namespace builder
{

class Init_MyCommand_Request_current_motor
{
public:
  Init_MyCommand_Request_current_motor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::command_interfaces::srv::MyCommand_Request current_motor(::command_interfaces::srv::MyCommand_Request::_current_motor_type arg)
  {
    msg_.current_motor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_interfaces::srv::MyCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_interfaces::srv::MyCommand_Request>()
{
  return command_interfaces::srv::builder::Init_MyCommand_Request_current_motor();
}

}  // namespace command_interfaces


namespace command_interfaces
{

namespace srv
{

namespace builder
{

class Init_MyCommand_Response_commands
{
public:
  Init_MyCommand_Response_commands()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::command_interfaces::srv::MyCommand_Response commands(::command_interfaces::srv::MyCommand_Response::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_interfaces::srv::MyCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_interfaces::srv::MyCommand_Response>()
{
  return command_interfaces::srv::builder::Init_MyCommand_Response_commands();
}

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__BUILDER_HPP_
