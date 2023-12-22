// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from more_interfaces:srv/CommandService.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__BUILDER_HPP_
#define MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "more_interfaces/srv/detail/command_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_CommandService_Request_ts
{
public:
  explicit Init_CommandService_Request_ts(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  ::more_interfaces::srv::CommandService_Request ts(::more_interfaces::srv::CommandService_Request::_ts_type arg)
  {
    msg_.ts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_tm3
{
public:
  explicit Init_CommandService_Request_tm3(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_ts tm3(::more_interfaces::srv::CommandService_Request::_tm3_type arg)
  {
    msg_.tm3 = std::move(arg);
    return Init_CommandService_Request_ts(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_vm3
{
public:
  explicit Init_CommandService_Request_vm3(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_tm3 vm3(::more_interfaces::srv::CommandService_Request::_vm3_type arg)
  {
    msg_.vm3 = std::move(arg);
    return Init_CommandService_Request_tm3(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_tm2
{
public:
  explicit Init_CommandService_Request_tm2(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_vm3 tm2(::more_interfaces::srv::CommandService_Request::_tm2_type arg)
  {
    msg_.tm2 = std::move(arg);
    return Init_CommandService_Request_vm3(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_vm2
{
public:
  explicit Init_CommandService_Request_vm2(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_tm2 vm2(::more_interfaces::srv::CommandService_Request::_vm2_type arg)
  {
    msg_.vm2 = std::move(arg);
    return Init_CommandService_Request_tm2(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_tm1
{
public:
  explicit Init_CommandService_Request_tm1(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_vm2 tm1(::more_interfaces::srv::CommandService_Request::_tm1_type arg)
  {
    msg_.tm1 = std::move(arg);
    return Init_CommandService_Request_vm2(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_vm1
{
public:
  explicit Init_CommandService_Request_vm1(::more_interfaces::srv::CommandService_Request & msg)
  : msg_(msg)
  {}
  Init_CommandService_Request_tm1 vm1(::more_interfaces::srv::CommandService_Request::_vm1_type arg)
  {
    msg_.vm1 = std::move(arg);
    return Init_CommandService_Request_tm1(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

class Init_CommandService_Request_mode
{
public:
  Init_CommandService_Request_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommandService_Request_vm1 mode(::more_interfaces::srv::CommandService_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_CommandService_Request_vm1(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::CommandService_Request>()
{
  return more_interfaces::srv::builder::Init_CommandService_Request_mode();
}

}  // namespace more_interfaces


namespace more_interfaces
{

namespace srv
{

namespace builder
{

class Init_CommandService_Response_allcmd
{
public:
  Init_CommandService_Response_allcmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::more_interfaces::srv::CommandService_Response allcmd(::more_interfaces::srv::CommandService_Response::_allcmd_type arg)
  {
    msg_.allcmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::more_interfaces::srv::CommandService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::more_interfaces::srv::CommandService_Response>()
{
  return more_interfaces::srv::builder::Init_CommandService_Response_allcmd();
}

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__BUILDER_HPP_
