// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from more_interfaces:srv/CommandService.idl
// generated code does not contain a copyright notice

#ifndef MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__STRUCT_H_
#define MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CommandService in the package more_interfaces.
typedef struct more_interfaces__srv__CommandService_Request
{
  uint8_t mode;
  uint8_t vm1;
  uint8_t tm1;
  uint8_t vm2;
  uint8_t tm2;
  uint8_t vm3;
  uint8_t tm3;
  uint8_t ts;
} more_interfaces__srv__CommandService_Request;

// Struct for a sequence of more_interfaces__srv__CommandService_Request.
typedef struct more_interfaces__srv__CommandService_Request__Sequence
{
  more_interfaces__srv__CommandService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__CommandService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CommandService in the package more_interfaces.
typedef struct more_interfaces__srv__CommandService_Response
{
  uint8_t allcmd[8];
} more_interfaces__srv__CommandService_Response;

// Struct for a sequence of more_interfaces__srv__CommandService_Response.
typedef struct more_interfaces__srv__CommandService_Response__Sequence
{
  more_interfaces__srv__CommandService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} more_interfaces__srv__CommandService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MORE_INTERFACES__SRV__DETAIL__COMMAND_SERVICE__STRUCT_H_
