// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "command_interfaces/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace command_interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Request_input6
{
public:
  explicit Init_Command_Request_input6(::command_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  ::command_interfaces::srv::Command_Request input6(::command_interfaces::srv::Command_Request::_input6_type arg)
  {
    msg_.input6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_input5
{
public:
  explicit Init_Command_Request_input5(::command_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  Init_Command_Request_input6 input5(::command_interfaces::srv::Command_Request::_input5_type arg)
  {
    msg_.input5 = std::move(arg);
    return Init_Command_Request_input6(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_input4
{
public:
  explicit Init_Command_Request_input4(::command_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  Init_Command_Request_input5 input4(::command_interfaces::srv::Command_Request::_input4_type arg)
  {
    msg_.input4 = std::move(arg);
    return Init_Command_Request_input5(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_input3
{
public:
  explicit Init_Command_Request_input3(::command_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  Init_Command_Request_input4 input3(::command_interfaces::srv::Command_Request::_input3_type arg)
  {
    msg_.input3 = std::move(arg);
    return Init_Command_Request_input4(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_input2
{
public:
  explicit Init_Command_Request_input2(::command_interfaces::srv::Command_Request & msg)
  : msg_(msg)
  {}
  Init_Command_Request_input3 input2(::command_interfaces::srv::Command_Request::_input2_type arg)
  {
    msg_.input2 = std::move(arg);
    return Init_Command_Request_input3(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

class Init_Command_Request_input1
{
public:
  Init_Command_Request_input1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_Request_input2 input1(::command_interfaces::srv::Command_Request::_input1_type arg)
  {
    msg_.input1 = std::move(arg);
    return Init_Command_Request_input2(msg_);
  }

private:
  ::command_interfaces::srv::Command_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_interfaces::srv::Command_Request>()
{
  return command_interfaces::srv::builder::Init_Command_Request_input1();
}

}  // namespace command_interfaces


namespace command_interfaces
{

namespace srv
{

namespace builder
{

class Init_Command_Response_command_array
{
public:
  Init_Command_Response_command_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::command_interfaces::srv::Command_Response command_array(::command_interfaces::srv::Command_Response::_command_array_type arg)
  {
    msg_.command_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_interfaces::srv::Command_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_interfaces::srv::Command_Response>()
{
  return command_interfaces::srv::builder::Init_Command_Response_command_array();
}

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__SRV__DETAIL__COMMAND__BUILDER_HPP_
