// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__TRAITS_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "command_interfaces/srv/detail/my_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace command_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_motor
  {
    out << "current_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_motor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use command_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_interfaces::srv::MyCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_interfaces::srv::MyCommand_Request & msg)
{
  return command_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_interfaces::srv::MyCommand_Request>()
{
  return "command_interfaces::srv::MyCommand_Request";
}

template<>
inline const char * name<command_interfaces::srv::MyCommand_Request>()
{
  return "command_interfaces/srv/MyCommand_Request";
}

template<>
struct has_fixed_size<command_interfaces::srv::MyCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_interfaces::srv::MyCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_interfaces::srv::MyCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace command_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MyCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: commands
  {
    out << "commands: ";
    rosidl_generator_traits::value_to_yaml(msg.commands, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MyCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: commands
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "commands: ";
    rosidl_generator_traits::value_to_yaml(msg.commands, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MyCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use command_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_interfaces::srv::MyCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_interfaces::srv::MyCommand_Response & msg)
{
  return command_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_interfaces::srv::MyCommand_Response>()
{
  return "command_interfaces::srv::MyCommand_Response";
}

template<>
inline const char * name<command_interfaces::srv::MyCommand_Response>()
{
  return "command_interfaces/srv/MyCommand_Response";
}

template<>
struct has_fixed_size<command_interfaces::srv::MyCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_interfaces::srv::MyCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_interfaces::srv::MyCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<command_interfaces::srv::MyCommand>()
{
  return "command_interfaces::srv::MyCommand";
}

template<>
inline const char * name<command_interfaces::srv::MyCommand>()
{
  return "command_interfaces/srv/MyCommand";
}

template<>
struct has_fixed_size<command_interfaces::srv::MyCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<command_interfaces::srv::MyCommand_Request>::value &&
    has_fixed_size<command_interfaces::srv::MyCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<command_interfaces::srv::MyCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<command_interfaces::srv::MyCommand_Request>::value &&
    has_bounded_size<command_interfaces::srv::MyCommand_Response>::value
  >
{
};

template<>
struct is_service<command_interfaces::srv::MyCommand>
  : std::true_type
{
};

template<>
struct is_service_request<command_interfaces::srv::MyCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<command_interfaces::srv::MyCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__TRAITS_HPP_
