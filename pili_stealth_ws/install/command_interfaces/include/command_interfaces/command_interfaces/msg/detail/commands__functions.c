// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from command_interfaces:msg/Commands.idl
// generated code does not contain a copyright notice
#include "command_interfaces/msg/detail/commands__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
command_interfaces__msg__Commands__init(command_interfaces__msg__Commands * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // motor
  // direction
  // step
  // velocity
  return true;
}

void
command_interfaces__msg__Commands__fini(command_interfaces__msg__Commands * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // motor
  // direction
  // step
  // velocity
}

bool
command_interfaces__msg__Commands__are_equal(const command_interfaces__msg__Commands * lhs, const command_interfaces__msg__Commands * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // motor
  if (lhs->motor != rhs->motor) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // step
  if (lhs->step != rhs->step) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
command_interfaces__msg__Commands__copy(
  const command_interfaces__msg__Commands * input,
  command_interfaces__msg__Commands * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // motor
  output->motor = input->motor;
  // direction
  output->direction = input->direction;
  // step
  output->step = input->step;
  // velocity
  output->velocity = input->velocity;
  return true;
}

command_interfaces__msg__Commands *
command_interfaces__msg__Commands__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__msg__Commands * msg = (command_interfaces__msg__Commands *)allocator.allocate(sizeof(command_interfaces__msg__Commands), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_interfaces__msg__Commands));
  bool success = command_interfaces__msg__Commands__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_interfaces__msg__Commands__destroy(command_interfaces__msg__Commands * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_interfaces__msg__Commands__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_interfaces__msg__Commands__Sequence__init(command_interfaces__msg__Commands__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__msg__Commands * data = NULL;

  if (size) {
    data = (command_interfaces__msg__Commands *)allocator.zero_allocate(size, sizeof(command_interfaces__msg__Commands), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_interfaces__msg__Commands__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_interfaces__msg__Commands__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
command_interfaces__msg__Commands__Sequence__fini(command_interfaces__msg__Commands__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      command_interfaces__msg__Commands__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

command_interfaces__msg__Commands__Sequence *
command_interfaces__msg__Commands__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__msg__Commands__Sequence * array = (command_interfaces__msg__Commands__Sequence *)allocator.allocate(sizeof(command_interfaces__msg__Commands__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_interfaces__msg__Commands__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_interfaces__msg__Commands__Sequence__destroy(command_interfaces__msg__Commands__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_interfaces__msg__Commands__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_interfaces__msg__Commands__Sequence__are_equal(const command_interfaces__msg__Commands__Sequence * lhs, const command_interfaces__msg__Commands__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_interfaces__msg__Commands__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__msg__Commands__Sequence__copy(
  const command_interfaces__msg__Commands__Sequence * input,
  command_interfaces__msg__Commands__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_interfaces__msg__Commands);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_interfaces__msg__Commands * data =
      (command_interfaces__msg__Commands *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_interfaces__msg__Commands__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_interfaces__msg__Commands__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_interfaces__msg__Commands__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
