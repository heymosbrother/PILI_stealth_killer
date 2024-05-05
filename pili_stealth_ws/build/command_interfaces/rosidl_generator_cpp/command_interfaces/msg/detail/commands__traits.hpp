// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__TRAITS_HPP_
#define COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "command_interfaces/msg/detail/commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace command_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Commands & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: motor
  {
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: step
  {
    out << "step: ";
    rosidl_generator_traits::value_to_yaml(msg.step, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Commands & msg,
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

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step: ";
    rosidl_generator_traits::value_to_yaml(msg.step, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Commands & msg, bool use_flow_style = false)
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

}  // namespace command_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use command_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_interfaces::msg::Commands & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const command_interfaces::msg::Commands & msg)
{
  return command_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<command_interfaces::msg::Commands>()
{
  return "command_interfaces::msg::Commands";
}

template<>
inline const char * name<command_interfaces::msg::Commands>()
{
  return "command_interfaces/msg/Commands";
}

template<>
struct has_fixed_size<command_interfaces::msg::Commands>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_interfaces::msg::Commands>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_interfaces::msg::Commands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__TRAITS_HPP_
