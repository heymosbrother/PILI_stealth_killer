// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from more_interfaces:srv/CommandService.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__TRAITS_HPP_
#define MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "more_interfaces/srv/detail/command_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CommandService_Request & msg,
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
  const CommandService_Request & msg,
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

inline std::string to_yaml(const CommandService_Request & msg, bool use_flow_style = false)
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

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::srv::CommandService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::CommandService_Request & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::CommandService_Request>()
{
  return "more_interfaces::srv::CommandService_Request";
}

template<>
inline const char * name<more_interfaces::srv::CommandService_Request>()
{
  return "more_interfaces/srv/CommandService_Request";
}

template<>
struct has_fixed_size<more_interfaces::srv::CommandService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::srv::CommandService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::srv::CommandService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace more_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CommandService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: allcmd
  {
    if (msg.allcmd.size() == 0) {
      out << "allcmd: []";
    } else {
      out << "allcmd: [";
      size_t pending_items = msg.allcmd.size();
      for (auto item : msg.allcmd) {
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
  const CommandService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: allcmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allcmd.size() == 0) {
      out << "allcmd: []\n";
    } else {
      out << "allcmd:\n";
      for (auto item : msg.allcmd) {
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

inline std::string to_yaml(const CommandService_Response & msg, bool use_flow_style = false)
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

}  // namespace more_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use more_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const more_interfaces::srv::CommandService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  more_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use more_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const more_interfaces::srv::CommandService_Response & msg)
{
  return more_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<more_interfaces::srv::CommandService_Response>()
{
  return "more_interfaces::srv::CommandService_Response";
}

template<>
inline const char * name<more_interfaces::srv::CommandService_Response>()
{
  return "more_interfaces/srv/CommandService_Response";
}

template<>
struct has_fixed_size<more_interfaces::srv::CommandService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<more_interfaces::srv::CommandService_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<more_interfaces::srv::CommandService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<more_interfaces::srv::CommandService>()
{
  return "more_interfaces::srv::CommandService";
}

template<>
inline const char * name<more_interfaces::srv::CommandService>()
{
  return "more_interfaces/srv/CommandService";
}

template<>
struct has_fixed_size<more_interfaces::srv::CommandService>
  : std::integral_constant<
    bool,
    has_fixed_size<more_interfaces::srv::CommandService_Request>::value &&
    has_fixed_size<more_interfaces::srv::CommandService_Response>::value
  >
{
};

template<>
struct has_bounded_size<more_interfaces::srv::CommandService>
  : std::integral_constant<
    bool,
    has_bounded_size<more_interfaces::srv::CommandService_Request>::value &&
    has_bounded_size<more_interfaces::srv::CommandService_Response>::value
  >
{
};

template<>
struct is_service<more_interfaces::srv::CommandService>
  : std::true_type
{
};

template<>
struct is_service_request<more_interfaces::srv::CommandService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<more_interfaces::srv::CommandService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__TRAITS_HPP_
