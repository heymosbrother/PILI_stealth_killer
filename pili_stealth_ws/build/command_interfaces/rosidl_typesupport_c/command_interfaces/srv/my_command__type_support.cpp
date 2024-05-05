// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "command_interfaces/srv/detail/my_command__struct.h"
#include "command_interfaces/srv/detail/my_command__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace command_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MyCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyCommand_Request_type_support_ids_t;

static const _MyCommand_Request_type_support_ids_t _MyCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyCommand_Request_type_support_symbol_names_t _MyCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, MyCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, MyCommand_Request)),
  }
};

typedef struct _MyCommand_Request_type_support_data_t
{
  void * data[2];
} _MyCommand_Request_type_support_data_t;

static _MyCommand_Request_type_support_data_t _MyCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyCommand_Request_message_typesupport_map = {
  2,
  "command_interfaces",
  &_MyCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MyCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MyCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyCommand_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyCommand_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace command_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, command_interfaces, srv, MyCommand_Request)() {
  return &::command_interfaces::srv::rosidl_typesupport_c::MyCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "command_interfaces/srv/detail/my_command__struct.h"
// already included above
// #include "command_interfaces/srv/detail/my_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace command_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MyCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyCommand_Response_type_support_ids_t;

static const _MyCommand_Response_type_support_ids_t _MyCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyCommand_Response_type_support_symbol_names_t _MyCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, MyCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, MyCommand_Response)),
  }
};

typedef struct _MyCommand_Response_type_support_data_t
{
  void * data[2];
} _MyCommand_Response_type_support_data_t;

static _MyCommand_Response_type_support_data_t _MyCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyCommand_Response_message_typesupport_map = {
  2,
  "command_interfaces",
  &_MyCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MyCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MyCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MyCommand_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyCommand_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace command_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, command_interfaces, srv, MyCommand_Response)() {
  return &::command_interfaces::srv::rosidl_typesupport_c::MyCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "command_interfaces/srv/detail/my_command__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace command_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _MyCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MyCommand_type_support_ids_t;

static const _MyCommand_type_support_ids_t _MyCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MyCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MyCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MyCommand_type_support_symbol_names_t _MyCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, command_interfaces, srv, MyCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_interfaces, srv, MyCommand)),
  }
};

typedef struct _MyCommand_type_support_data_t
{
  void * data[2];
} _MyCommand_type_support_data_t;

static _MyCommand_type_support_data_t _MyCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MyCommand_service_typesupport_map = {
  2,
  "command_interfaces",
  &_MyCommand_service_typesupport_ids.typesupport_identifier[0],
  &_MyCommand_service_typesupport_symbol_names.symbol_name[0],
  &_MyCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MyCommand_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MyCommand_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace command_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, command_interfaces, srv, MyCommand)() {
  return &::command_interfaces::srv::rosidl_typesupport_c::MyCommand_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
