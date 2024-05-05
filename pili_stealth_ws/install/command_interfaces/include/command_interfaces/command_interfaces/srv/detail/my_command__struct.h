// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_H_
#define COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MyCommand in the package command_interfaces.
typedef struct command_interfaces__srv__MyCommand_Request
{
  uint8_t current_motor;
} command_interfaces__srv__MyCommand_Request;

// Struct for a sequence of command_interfaces__srv__MyCommand_Request.
typedef struct command_interfaces__srv__MyCommand_Request__Sequence
{
  command_interfaces__srv__MyCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_interfaces__srv__MyCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MyCommand in the package command_interfaces.
typedef struct command_interfaces__srv__MyCommand_Response
{
  uint8_t commands;
} command_interfaces__srv__MyCommand_Response;

// Struct for a sequence of command_interfaces__srv__MyCommand_Response.
typedef struct command_interfaces__srv__MyCommand_Response__Sequence
{
  command_interfaces__srv__MyCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_interfaces__srv__MyCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_INTERFACES__SRV__DETAIL__MY_COMMAND__STRUCT_H_
