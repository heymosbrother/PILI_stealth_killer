// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define MORE_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace msg
{

namespace builder
{

class Init_Command_ts
{
public:
  explicit Init_Command_ts(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  ::more_interfaces::msg::Command ts(::more_interfaces::msg::Command::_ts_type arg)
  {
    msg_.ts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_tm3
{
public:
  explicit Init_Command_tm3(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_ts tm3(::more_interfaces::msg::Command::_tm3_type arg)
  {
    msg_.tm3 = std::move(arg);
    return Init_Command_ts(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_vm3
{
public:
  explicit Init_Command_vm3(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_tm3 vm3(::more_interfaces::msg::Command::_vm3_type arg)
  {
    msg_.vm3 = std::move(arg);
    return Init_Command_tm3(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_tm2
{
public:
  explicit Init_Command_tm2(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_vm3 tm2(::more_interfaces::msg::Command::_tm2_type arg)
  {
    msg_.tm2 = std::move(arg);
    return Init_Command_vm3(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_vm2
{
public:
  explicit Init_Command_vm2(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_tm2 vm2(::more_interfaces::msg::Command::_vm2_type arg)
  {
    msg_.vm2 = std::move(arg);
    return Init_Command_tm2(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_tm1
{
public:
  explicit Init_Command_tm1(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_vm2 tm1(::more_interfaces::msg::Command::_tm1_type arg)
  {
    msg_.tm1 = std::move(arg);
    return Init_Command_vm2(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_vm1
{
public:
  explicit Init_Command_vm1(::more_interfaces::msg::Command & msg)
  : msg_(msg)
  {}
  Init_Command_tm1 vm1(::more_interfaces::msg::Command::_vm1_type arg)
  {
    msg_.vm1 = std::move(arg);
    return Init_Command_tm1(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

class Init_Command_mode
{
public:
  Init_Command_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_vm1 mode(::more_interfaces::msg::Command::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Command_vm1(msg_);
  }

private:
  ::more_interfaces::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::msg::Command>()
{
  return more_interfaces::msg::builder::Init_Command_mode();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__COMMAND__BUILDER_HPP_
