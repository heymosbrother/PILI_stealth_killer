// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define MORE_INTERFACES__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: vm1
  {
    out << "vm1: ";
    rosidl_generator_traits::value_to_yaml(msg.vm1, out);
    out << ", ";
  }

  // member: tm1
  {
    out << "tm1: ";
    rosidl_generator_traits::value_to_yaml(msg.tm1, out);
    out << ", ";
  }

  // member: vm2
  {
    out << "vm2: ";
    rosidl_generator_traits::value_to_yaml(msg.vm2, out);
    out << ", ";
  }

  // member: tm2
  {
    out << "tm2: ";
    rosidl_generator_traits::value_to_yaml(msg.tm2, out);
    out << ", ";
  }

  // member: vm3
  {
    out << "vm3: ";
    rosidl_generator_traits::value_to_yaml(msg.vm3, out);
    out << ", ";
  }

  // member: tm3
  {
    out << "tm3: ";
    rosidl_generator_traits::value_to_yaml(msg.tm3, out);
    out << ", ";
  }

  // member: ts
  {
    out << "ts: ";
    rosidl_generator_traits::value_to_yaml(msg.ts, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: vm1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vm1: ";
    rosidl_generator_traits::value_to_yaml(msg.vm1, out);
    out << "\n";
  }

  // member: tm1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tm1: ";
    rosidl_generator_traits::value_to_yaml(msg.tm1, out);
    out << "\n";
  }

  // member: vm2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vm2: ";
    rosidl_generator_traits::value_to_yaml(msg.vm2, out);
    out << "\n";
  }

  // member: tm2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tm2: ";
    rosidl_generator_traits::value_to_yaml(msg.tm2, out);
    out << "\n";
  }

  // member: vm3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vm3: ";
    rosidl_generator_traits::value_to_yaml(msg.vm3, out);
    out << "\n";
  }

  // member: tm3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tm3: ";
    rosidl_generator_traits::value_to_yaml(msg.tm3, out);
    out << "\n";
  }

  // member: ts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ts: ";
    rosidl_generator_traits::value_to_yaml(msg.ts, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::msg::Command & msg)
{
  return more_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::msg::Command>()
{
  return "more_interfaces::msg::Command";
}

template<>
inline const char * name<more_interfaces::msg::Command>()
{
  return "more_interfaces/msg/Command";
}

template<>
struct has_fixed_size<more_interfaces::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::msg::Command>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__MSG__DETAIL__COMMAND__TRAITS_HPP_
