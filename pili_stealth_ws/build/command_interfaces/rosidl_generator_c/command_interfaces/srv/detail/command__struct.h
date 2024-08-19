// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_
#define COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Command in the package command_interfaces.
typedef struct command_interfaces__srv__Command_Request
{
  uint8_t input1;
  uint8_t input2;
  uint8_t input3;
  uint8_t input4;
  uint8_t input5;
  uint8_t input6;
} command_interfaces__srv__Command_Request;

// Struct for a sequence of command_interfaces__srv__Command_Request.
typedef struct command_interfaces__srv__Command_Request__Sequence
{
  command_interfaces__srv__Command_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_interfaces__srv__Command_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Command in the package command_interfaces.
typedef struct command_interfaces__srv__Command_Response
{
  uint8_t command_array[6];
} command_interfaces__srv__Command_Response;

// Struct for a sequence of command_interfaces__srv__Command_Response.
typedef struct command_interfaces__srv__Command_Response__Sequence
{
  command_interfaces__srv__Command_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_interfaces__srv__Command_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_INTERFACES__SRV__DETAIL__COMMAND__STRUCT_H_
