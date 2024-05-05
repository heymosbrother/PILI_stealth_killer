// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__BUILDER_HPP_
#define COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "command_interfaces/msg/detail/commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace command_interfaces
{

namespace msg
{

namespace builder
{

class Init_Commands_velocity
{
public:
  explicit Init_Commands_velocity(::command_interfaces::msg::Commands & msg)
  : msg_(msg)
  {}
  ::command_interfaces::msg::Commands velocity(::command_interfaces::msg::Commands::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::command_interfaces::msg::Commands msg_;
};

class Init_Commands_step
{
public:
  explicit Init_Commands_step(::command_interfaces::msg::Commands & msg)
  : msg_(msg)
  {}
  Init_Commands_velocity step(::command_interfaces::msg::Commands::_step_type arg)
  {
    msg_.step = std::move(arg);
    return Init_Commands_velocity(msg_);
  }

private:
  ::command_interfaces::msg::Commands msg_;
};

class Init_Commands_direction
{
public:
  explicit Init_Commands_direction(::command_interfaces::msg::Commands & msg)
  : msg_(msg)
  {}
  Init_Commands_step direction(::command_interfaces::msg::Commands::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Commands_step(msg_);
  }

private:
  ::command_interfaces::msg::Commands msg_;
};

class Init_Commands_motor
{
public:
  explicit Init_Commands_motor(::command_interfaces::msg::Commands & msg)
  : msg_(msg)
  {}
  Init_Commands_direction motor(::command_interfaces::msg::Commands::_motor_type arg)
  {
    msg_.motor = std::move(arg);
    return Init_Commands_direction(msg_);
  }

private:
  ::command_interfaces::msg::Commands msg_;
};

class Init_Commands_mode
{
public:
  Init_Commands_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_motor mode(::command_interfaces::msg::Commands::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Commands_motor(msg_);
  }

private:
  ::command_interfaces::msg::Commands msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::command_interfaces::msg::Commands>()
{
  return command_interfaces::msg::builder::Init_Commands_mode();
}

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__BUILDER_HPP_
