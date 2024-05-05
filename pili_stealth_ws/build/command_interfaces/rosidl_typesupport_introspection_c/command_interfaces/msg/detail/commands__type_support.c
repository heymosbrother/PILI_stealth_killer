// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "command_interfaces/msg/detail/commands__rosidl_typesupport_introspection_c.h"
#include "command_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "command_interfaces/msg/detail/commands__functions.h"
#include "command_interfaces/msg/detail/commands__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_interfaces__msg__Commands__init(message_memory);
}

void command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_fini_function(void * message_memory)
{
  command_interfaces__msg__Commands__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_member_array[5] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__msg__Commands, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__msg__Commands, motor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__msg__Commands, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__msg__Commands, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__msg__Commands, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_members = {
  "command_interfaces__msg",  // message namespace
  "Commands",  // message name
  5,  // number of fields
  sizeof(command_interfaces__msg__Commands),
  command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_member_array,  // message members
  command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_init_function,  // function to initialize message memory (memory has to be allocated)
  command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle = {
  0,
  &command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, msg, Commands)() {
  if (!command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle.typesupport_identifier) {
    command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_interfaces__msg__Commands__rosidl_typesupport_introspection_c__Commands_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
