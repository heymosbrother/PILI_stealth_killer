// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from more_interfaces:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_
#define MORE_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__more_interfaces__msg__Command __attribute__((deprecated))
#else
# define DEPRECATED__more_interfaces__msg__Command __declspec(deprecated)
#endif

namespace more_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Command_
{
  using Type = Command_<ContainerAllocator>;

  explicit Command_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->vm1 = 0;
      this->tm1 = 0;
      this->vm2 = 0;
      this->tm2 = 0;
      this->vm3 = 0;
      this->tm3 = 0;
      this->ts = 0;
    }
  }

  explicit Command_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->vm1 = 0;
      this->tm1 = 0;
      this->vm2 = 0;
      this->tm2 = 0;
      this->vm3 = 0;
      this->tm3 = 0;
      this->ts = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _vm1_type =
    uint8_t;
  _vm1_type vm1;
  using _tm1_type =
    uint8_t;
  _tm1_type tm1;
  using _vm2_type =
    uint8_t;
  _vm2_type vm2;
  using _tm2_type =
    uint8_t;
  _tm2_type tm2;
  using _vm3_type =
    uint8_t;
  _vm3_type vm3;
  using _tm3_type =
    uint8_t;
  _tm3_type tm3;
  using _ts_type =
    uint8_t;
  _ts_type ts;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__vm1(
    const uint8_t & _arg)
  {
    this->vm1 = _arg;
    return *this;
  }
  Type & set__tm1(
    const uint8_t & _arg)
  {
    this->tm1 = _arg;
    return *this;
  }
  Type & set__vm2(
    const uint8_t & _arg)
  {
    this->vm2 = _arg;
    return *this;
  }
  Type & set__tm2(
    const uint8_t & _arg)
  {
    this->tm2 = _arg;
    return *this;
  }
  Type & set__vm3(
    const uint8_t & _arg)
  {
    this->vm3 = _arg;
    return *this;
  }
  Type & set__tm3(
    const uint8_t & _arg)
  {
    this->tm3 = _arg;
    return *this;
  }
  Type & set__ts(
    const uint8_t & _arg)
  {
    this->ts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    more_interfaces::msg::Command_<ContainerAllocator> *;
  using ConstRawPtr =
    const more_interfaces::msg::Command_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<more_interfaces::msg::Command_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<more_interfaces::msg::Command_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Command_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Command_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      more_interfaces::msg::Command_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<more_interfaces::msg::Command_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<more_interfaces::msg::Command_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<more_interfaces::msg::Command_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__more_interfaces__msg__Command
    std::shared_ptr<more_interfaces::msg::Command_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__more_interfaces__msg__Command
    std::shared_ptr<more_interfaces::msg::Command_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->vm1 != other.vm1) {
      return false;
    }
    if (this->tm1 != other.tm1) {
      return false;
    }
    if (this->vm2 != other.vm2) {
      return false;
    }
    if (this->tm2 != other.tm2) {
      return false;
    }
    if (this->vm3 != other.vm3) {
      return false;
    }
    if (this->tm3 != other.tm3) {
      return false;
    }
    if (this->ts != other.ts) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_

// alias to use template instance with default allocator
using Command =
  more_interfaces::msg::Command_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace more_interfaces

#endif  // MORE_INTERFACES__MSG__DETAIL__COMMAND__STRUCT_HPP_
