// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "command_interfaces/srv/detail/command__rosidl_typesupport_introspection_c.h"
#include "command_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "command_interfaces/srv/detail/command__functions.h"
#include "command_interfaces/srv/detail/command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_interfaces__srv__Command_Request__init(message_memory);
}

void command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_fini_function(void * message_memory)
{
  command_interfaces__srv__Command_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_member_array[6] = {
  {
    "input1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Request, input6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_members = {
  "command_interfaces__srv",  // message namespace
  "Command_Request",  // message name
  6,  // number of fields
  sizeof(command_interfaces__srv__Command_Request),
  command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_member_array,  // message members
  command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle = {
  0,
  &command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Request)() {
  if (!command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle.typesupport_identifier) {
    command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_interfaces__srv__Command_Request__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "command_interfaces/srv/detail/command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "command_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "command_interfaces/srv/detail/command__functions.h"
// already included above
// #include "command_interfaces/srv/detail/command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_interfaces__srv__Command_Response__init(message_memory);
}

void command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_fini_function(void * message_memory)
{
  command_interfaces__srv__Command_Response__fini(message_memory);
}

size_t command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__size_function__Command_Response__command_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_const_function__Command_Response__command_array(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_function__Command_Response__command_array(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__fetch_function__Command_Response__command_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_const_function__Command_Response__command_array(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__assign_function__Command_Response__command_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_function__Command_Response__command_array(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_member_array[1] = {
  {
    "command_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(command_interfaces__srv__Command_Response, command_array),  // bytes offset in struct
    NULL,  // default value
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__size_function__Command_Response__command_array,  // size() function pointer
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_const_function__Command_Response__command_array,  // get_const(index) function pointer
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__get_function__Command_Response__command_array,  // get(index) function pointer
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__fetch_function__Command_Response__command_array,  // fetch(index, &value) function pointer
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__assign_function__Command_Response__command_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_members = {
  "command_interfaces__srv",  // message namespace
  "Command_Response",  // message name
  1,  // number of fields
  sizeof(command_interfaces__srv__Command_Response),
  command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_member_array,  // message members
  command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle = {
  0,
  &command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Response)() {
  if (!command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle.typesupport_identifier) {
    command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_interfaces__srv__Command_Response__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "command_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "command_interfaces/srv/detail/command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_members = {
  "command_interfaces__srv",  // service namespace
  "Command",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_Request_message_type_support_handle,
  NULL  // response message
  // command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_Response_message_type_support_handle
};

static rosidl_service_type_support_t command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle = {
  0,
  &command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command)() {
  if (!command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.typesupport_identifier) {
    command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, Command_Response)()->data;
  }

  return &command_interfaces__srv__detail__command__rosidl_typesupport_introspection_c__Command_service_type_support_handle;
}
