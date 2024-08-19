// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__command_interfaces__srv__Command_Request __attribute__((deprecated))
#else
# define DEPRECATED__command_interfaces__srv__Command_Request __declspec(deprecated)
#endif

namespace command_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Request_
{
  using Type = Command_Request_<ContainerAllocator>;

  explicit Command_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input1 = 0;
      this->input2 = 0;
      this->input3 = 0;
      this->input4 = 0;
      this->input5 = 0;
      this->input6 = 0;
    }
  }

  explicit Command_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input1 = 0;
      this->input2 = 0;
      this->input3 = 0;
      this->input4 = 0;
      this->input5 = 0;
      this->input6 = 0;
    }
  }

  // field types and members
  using _input1_type =
    uint8_t;
  _input1_type input1;
  using _input2_type =
    uint8_t;
  _input2_type input2;
  using _input3_type =
    uint8_t;
  _input3_type input3;
  using _input4_type =
    uint8_t;
  _input4_type input4;
  using _input5_type =
    uint8_t;
  _input5_type input5;
  using _input6_type =
    uint8_t;
  _input6_type input6;

  // setters for named parameter idiom
  Type & set__input1(
    const uint8_t & _arg)
  {
    this->input1 = _arg;
    return *this;
  }
  Type & set__input2(
    const uint8_t & _arg)
  {
    this->input2 = _arg;
    return *this;
  }
  Type & set__input3(
    const uint8_t & _arg)
  {
    this->input3 = _arg;
    return *this;
  }
  Type & set__input4(
    const uint8_t & _arg)
  {
    this->input4 = _arg;
    return *this;
  }
  Type & set__input5(
    const uint8_t & _arg)
  {
    this->input5 = _arg;
    return *this;
  }
  Type & set__input6(
    const uint8_t & _arg)
  {
    this->input6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_interfaces::srv::Command_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_interfaces::srv::Command_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::Command_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::Command_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_interfaces__srv__Command_Request
    std::shared_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_interfaces__srv__Command_Request
    std::shared_ptr<command_interfaces::srv::Command_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Request_ & other) const
  {
    if (this->input1 != other.input1) {
      return false;
    }
    if (this->input2 != other.input2) {
      return false;
    }
    if (this->input3 != other.input3) {
      return false;
    }
    if (this->input4 != other.input4) {
      return false;
    }
    if (this->input5 != other.input5) {
      return false;
    }
    if (this->input6 != other.input6) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Request_

// alias to use template instance with default allocator
using Command_Request =
  command_interfaces::srv::Command_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_interfaces


#ifndef _WIN32
# define DEPRECATED__command_interfaces__srv__Command_Response __attribute__((deprecated))
#else
# define DEPRECATED__command_interfaces__srv__Command_Response __declspec(deprecated)
#endif

namespace command_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Response_
{
  using Type = Command_Response_<ContainerAllocator>;

  explicit Command_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->command_array.begin(), this->command_array.end(), 0);
    }
  }

  explicit Command_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 6>::iterator, uint8_t>(this->command_array.begin(), this->command_array.end(), 0);
    }
  }

  // field types and members
  using _command_array_type =
    std::array<uint8_t, 6>;
  _command_array_type command_array;

  // setters for named parameter idiom
  Type & set__command_array(
    const std::array<uint8_t, 6> & _arg)
  {
    this->command_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_interfaces::srv::Command_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_interfaces::srv::Command_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::Command_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_interfaces::srv::Command_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_interfaces__srv__Command_Response
    std::shared_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_interfaces__srv__Command_Response
    std::shared_ptr<command_interfaces::srv::Command_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Response_ & other) const
  {
    if (this->command_array != other.command_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Response_

// alias to use template instance with default allocator
using Command_Response =
  command_interfaces::srv::Command_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace command_interfaces

namespace command_interfaces
{

namespace srv
{

struct Command
{
  using Request = command_interfaces::srv::Command_Request;
  using Response = command_interfaces::srv::Command_Response;
};

}  // namespace srv

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_HPP_
