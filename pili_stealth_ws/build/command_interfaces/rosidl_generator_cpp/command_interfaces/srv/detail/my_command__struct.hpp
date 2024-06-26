// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__command_interfaces__srv__MyCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__command_interfaces__srv__MyCommand_Request __declspec(deprecated)
#endif

namespace command_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyCommand_Request_
{
  using Type = MyCommand_Request_<ContainerAllocator>;

  explicit MyCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_motor = 0;
    }
  }

  explicit MyCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_motor = 0;
    }
  }

  // field types and members
  using _current_motor_type =
    uint8_t;
  _current_motor_type current_motor;

  // setters for named parameter idiom
  Type & set__current_motor(
    const uint8_t & _arg)
  {
    this->current_motor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_interfaces::srv::MyCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_interfaces::srv::MyCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::MyCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::MyCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_interfaces__srv__MyCommand_Request
    std::shared_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_interfaces__srv__MyCommand_Request
    std::shared_ptr<command_interfaces::srv::MyCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyCommand_Request_ & other) const
  {
    if (this->current_motor != other.current_motor) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyCommand_Request_

// alias to use template instance with default allocator
using MyCommand_Request =
  command_interfaces::srv::MyCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_interfaces


#ifndef _WIN32
# define DEPRECATED__command_interfaces__srv__MyCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__command_interfaces__srv__MyCommand_Response __declspec(deprecated)
#endif

namespace command_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MyCommand_Response_
{
  using Type = MyCommand_Response_<ContainerAllocator>;

  explicit MyCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->commands = 0;
    }
  }

  explicit MyCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->commands = 0;
    }
  }

  // field types and members
  using _commands_type =
    uint8_t;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__commands(
    const uint8_t & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_interfaces::srv::MyCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_interfaces::srv::MyCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::MyCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::MyCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_interfaces__srv__MyCommand_Response
    std::shared_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_interfaces__srv__MyCommand_Response
    std::shared_ptr<command_interfaces::srv::MyCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyCommand_Response_ & other) const
  {
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyCommand_Response_

// alias to use template instance with default allocator
using MyCommand_Response =
  command_interfaces::srv::MyCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_interfaces

namespace command_interfaces
{

namespace srv
{

struct MyCommand
{
  using Request = command_interfaces::srv::MyCommand_Request;
  using Response = command_interfaces::srv::MyCommand_Response;
};

}  // namespace srv

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_HPP_
