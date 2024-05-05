// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice

#ifndef COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_H_
#define COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Commands in the package command_interfaces.
typedef struct command_interfaces__msg__Commands
{
  uint8_t mode;
  uint8_t motor;
  uint8_t direction;
  uint8_t step;
  uint8_t velocity;
} command_interfaces__msg__Commands;

// Struct for a sequence of command_interfaces__msg__Commands.
typedef struct command_interfaces__msg__Commands__Sequence
{
  command_interfaces__msg__Commands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_interfaces__msg__Commands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_INTERFACES__MSG__DETAIL__COMMANDS__STRUCT_H_
