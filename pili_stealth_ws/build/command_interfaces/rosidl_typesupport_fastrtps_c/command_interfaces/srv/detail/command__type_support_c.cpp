// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice
#include "command_interfaces/srv/detail/command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "command_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "command_interfaces/srv/detail/command__struct.h"
#include "command_interfaces/srv/detail/command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Command_Request__ros_msg_type = command_interfaces__srv__Command_Request;

static bool _Command_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command_Request__ros_msg_type * ros_message = static_cast<const _Command_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input1
  {
    cdr << ros_message->input1;
  }

  // Field name: input2
  {
    cdr << ros_message->input2;
  }

  // Field name: input3
  {
    cdr << ros_message->input3;
  }

  // Field name: input4
  {
    cdr << ros_message->input4;
  }

  // Field name: input5
  {
    cdr << ros_message->input5;
  }

  // Field name: input6
  {
    cdr << ros_message->input6;
  }

  return true;
}

static bool _Command_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command_Request__ros_msg_type * ros_message = static_cast<_Command_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input1
  {
    cdr >> ros_message->input1;
  }

  // Field name: input2
  {
    cdr >> ros_message->input2;
  }

  // Field name: input3
  {
    cdr >> ros_message->input3;
  }

  // Field name: input4
  {
    cdr >> ros_message->input4;
  }

  // Field name: input5
  {
    cdr >> ros_message->input5;
  }

  // Field name: input6
  {
    cdr >> ros_message->input6;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_command_interfaces
size_t get_serialized_size_command_interfaces__srv__Command_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command_Request__ros_msg_type * ros_message = static_cast<const _Command_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input1
  {
    size_t item_size = sizeof(ros_message->input1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input2
  {
    size_t item_size = sizeof(ros_message->input2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input3
  {
    size_t item_size = sizeof(ros_message->input3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input4
  {
    size_t item_size = sizeof(ros_message->input4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input5
  {
    size_t item_size = sizeof(ros_message->input5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input6
  {
    size_t item_size = sizeof(ros_message->input6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Command_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_command_interfaces__srv__Command_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_command_interfaces
size_t max_serialized_size_command_interfaces__srv__Command_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: input1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: input2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: input3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: input4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: input5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: input6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = command_interfaces__srv__Command_Request;
    is_plain =
      (
      offsetof(DataType, input6) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Command_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_command_interfaces__srv__Command_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Command_Request = {
  "command_interfaces::srv",
  "Command_Request",
  _Command_Request__cdr_serialize,
  _Command_Request__cdr_deserialize,
  _Command_Request__get_serialized_size,
  _Command_Request__max_serialized_size
};

static rosidl_message_type_support_t _Command_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, Command_Request)() {
  return &_Command_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "command_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "command_interfaces/srv/detail/command__struct.h"
// already included above
// #include "command_interfaces/srv/detail/command__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Command_Response__ros_msg_type = command_interfaces__srv__Command_Response;

static bool _Command_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Command_Response__ros_msg_type * ros_message = static_cast<const _Command_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: command_array
  {
    size_t size = 6;
    auto array_ptr = ros_message->command_array;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Command_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Command_Response__ros_msg_type * ros_message = static_cast<_Command_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: command_array
  {
    size_t size = 6;
    auto array_ptr = ros_message->command_array;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_command_interfaces
size_t get_serialized_size_command_interfaces__srv__Command_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Command_Response__ros_msg_type * ros_message = static_cast<const _Command_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command_array
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->command_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Command_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_command_interfaces__srv__Command_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_command_interfaces
size_t max_serialized_size_command_interfaces__srv__Command_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: command_array
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = command_interfaces__srv__Command_Response;
    is_plain =
      (
      offsetof(DataType, command_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Command_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_command_interfaces__srv__Command_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Command_Response = {
  "command_interfaces::srv",
  "Command_Response",
  _Command_Response__cdr_serialize,
  _Command_Response__cdr_deserialize,
  _Command_Response__get_serialized_size,
  _Command_Response__max_serialized_size
};

static rosidl_message_type_support_t _Command_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Command_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, Command_Response)() {
  return &_Command_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "command_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "command_interfaces/srv/command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Command__callbacks = {
  "command_interfaces::srv",
  "Command",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, Command_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, Command_Response)(),
};

static rosidl_service_type_support_t Command__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Command__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, Command)() {
  return &Command__handle;
}

#if defined(__cplusplus)
}
#endif
