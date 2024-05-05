// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_HPP_
#define COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__command_interfaces__msg__Commands __attribute__((deprecated))
#else
# define DEPRECATED__command_interfaces__msg__Commands __declspec(deprecated)
#endif

namespace command_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Commands_
{
  using Type = Commands_<ContainerAllocator>;

  explicit Commands_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->motor = 0;
      this->direction = 0;
      this->step = 0;
      this->velocity = 0;
    }
  }

  explicit Commands_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->motor = 0;
      this->direction = 0;
      this->step = 0;
      this->velocity = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _motor_type =
    uint8_t;
  _motor_type motor;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _step_type =
    uint8_t;
  _step_type step;
  using _velocity_type =
    uint8_t;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__motor(
    const uint8_t & _arg)
  {
    this->motor = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__step(
    const uint8_t & _arg)
  {
    this->step = _arg;
    return *this;
  }
  Type & set__velocity(
    const uint8_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    command_interfaces::msg::Commands_<ContainerAllocator> *;
  using ConstRawPtr =
    const command_interfaces::msg::Commands_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<command_interfaces::msg::Commands_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<command_interfaces::msg::Commands_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      command_interfaces::msg::Commands_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::msg::Commands_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      command_interfaces::msg::Commands_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<command_interfaces::msg::Commands_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<command_interfaces::msg::Commands_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<command_interfaces::msg::Commands_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__command_interfaces__msg__Commands
    std::shared_ptr<command_interfaces::msg::Commands_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__command_interfaces__msg__Commands
    std::shared_ptr<command_interfaces::msg::Commands_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Commands_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->motor != other.motor) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Commands_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Commands_

// alias to use template instance with default allocator
using Commands =
  command_interfaces::msg::Commands_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace command_interfaces

#endif  // COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_HPP_
