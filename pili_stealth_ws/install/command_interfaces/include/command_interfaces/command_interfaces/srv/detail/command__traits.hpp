// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_
#define COMMAND_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "command_interfaces/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace command_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input1
  {
    out << "input1: ";
    rosidl_generator_traits::value_to_yaml(msg.input1, out);
    out << ", ";
  }

  // member: input2
  {
    out << "input2: ";
    rosidl_generator_traits::value_to_yaml(msg.input2, out);
    out << ", ";
  }

  // member: input3
  {
    out << "input3: ";
    rosidl_generator_traits::value_to_yaml(msg.input3, out);
    out << ", ";
  }

  // member: input4
  {
    out << "input4: ";
    rosidl_generator_traits::value_to_yaml(msg.input4, out);
    out << ", ";
  }

  // member: input5
  {
    out << "input5: ";
    rosidl_generator_traits::value_to_yaml(msg.input5, out);
    out << ", ";
  }

  // member: input6
  {
    out << "input6: ";
    rosidl_generator_traits::value_to_yaml(msg.input6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input1: ";
    rosidl_generator_traits::value_to_yaml(msg.input1, out);
    out << "\n";
  }

  // member: input2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input2: ";
    rosidl_generator_traits::value_to_yaml(msg.input2, out);
    out << "\n";
  }

  // member: input3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input3: ";
    rosidl_generator_traits::value_to_yaml(msg.input3, out);
    out << "\n";
  }

  // member: input4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input4: ";
    rosidl_generator_traits::value_to_yaml(msg.input4, out);
    out << "\n";
  }

  // member: input5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input5: ";
    rosidl_generator_traits::value_to_yaml(msg.input5, out);
    out << "\n";
  }

  // member: input6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input6: ";
    rosidl_generator_traits::value_to_yaml(msg.input6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Request & msg, bool use_flow_style = false)
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
  const command_interfaces::srv::Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_interfaces::srv::Command_Request & msg)
{
  return command_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_interfaces::srv::Command_Request>()
{
  return "command_interfaces::srv::Command_Request";
}

template<>
inline const char * name<command_interfaces::srv::Command_Request>()
{
  return "command_interfaces/srv/Command_Request";
}

template<>
struct has_fixed_size<command_interfaces::srv::Command_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_interfaces::srv::Command_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_interfaces::srv::Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace command_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: command_array
  {
    if (msg.command_array.size() == 0) {
      out << "command_array: []";
    } else {
      out << "command_array: [";
      size_t pending_items = msg.command_array.size();
      for (auto item : msg.command_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.command_array.size() == 0) {
      out << "command_array: []\n";
    } else {
      out << "command_array:\n";
      for (auto item : msg.command_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Response & msg, bool use_flow_style = false)
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
  const command_interfaces::srv::Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_interfaces::srv::Command_Response & msg)
{
  return command_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_interfaces::srv::Command_Response>()
{
  return "command_interfaces::srv::Command_Response";
}

template<>
inline const char * name<command_interfaces::srv::Command_Response>()
{
  return "command_interfaces/srv/Command_Response";
}

template<>
struct has_fixed_size<command_interfaces::srv::Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<command_interfaces::srv::Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<command_interfaces::srv::Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<command_interfaces::srv::Command>()
{
  return "command_interfaces::srv::Command";
}

template<>
inline const char * name<command_interfaces::srv::Command>()
{
  return "command_interfaces/srv/Command";
}

template<>
struct has_fixed_size<command_interfaces::srv::Command>
  : std::integral_constant<
    bool,
    has_fixed_size<command_interfaces::srv::Command_Request>::value &&
    has_fixed_size<command_interfaces::srv::Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<command_interfaces::srv::Command>
  : std::integral_constant<
    bool,
    has_bounded_size<command_interfaces::srv::Command_Request>::value &&
    has_bounded_size<command_interfaces::srv::Command_Response>::value
  >
{
};

template<>
struct is_service<command_interfaces::srv::Command>
  : std::true_type
{
};

template<>
struct is_service_request<command_interfaces::srv::Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<command_interfaces::srv::Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMAND_INTERFACES__SRV__DETAIL__COMMAND__TRAITS_HPP_
