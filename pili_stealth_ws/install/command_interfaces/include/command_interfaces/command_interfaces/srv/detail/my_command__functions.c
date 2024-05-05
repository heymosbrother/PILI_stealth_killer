// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from command_interfaces:srv/MyCommand.idl
// generated code does not contain a copyright notice
#include "command_interfaces/srv/detail/my_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
command_interfaces__srv__MyCommand_Request__init(command_interfaces__srv__MyCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // current_motor
  return true;
}

void
command_interfaces__srv__MyCommand_Request__fini(command_interfaces__srv__MyCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // current_motor
}

bool
command_interfaces__srv__MyCommand_Request__are_equal(const command_interfaces__srv__MyCommand_Request * lhs, const command_interfaces__srv__MyCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_motor
  if (lhs->current_motor != rhs->current_motor) {
    return false;
  }
  return true;
}

bool
command_interfaces__srv__MyCommand_Request__copy(
  const command_interfaces__srv__MyCommand_Request * input,
  command_interfaces__srv__MyCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // current_motor
  output->current_motor = input->current_motor;
  return true;
}

command_interfaces__srv__MyCommand_Request *
command_interfaces__srv__MyCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Request * msg = (command_interfaces__srv__MyCommand_Request *)allocator.allocate(sizeof(command_interfaces__srv__MyCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_interfaces__srv__MyCommand_Request));
  bool success = command_interfaces__srv__MyCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_interfaces__srv__MyCommand_Request__destroy(command_interfaces__srv__MyCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_interfaces__srv__MyCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_interfaces__srv__MyCommand_Request__Sequence__init(command_interfaces__srv__MyCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Request * data = NULL;

  if (size) {
    data = (command_interfaces__srv__MyCommand_Request *)allocator.zero_allocate(size, sizeof(command_interfaces__srv__MyCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_interfaces__srv__MyCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_interfaces__srv__MyCommand_Request__fini(&data[i - 1]);
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
command_interfaces__srv__MyCommand_Request__Sequence__fini(command_interfaces__srv__MyCommand_Request__Sequence * array)
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
      command_interfaces__srv__MyCommand_Request__fini(&array->data[i]);
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

command_interfaces__srv__MyCommand_Request__Sequence *
command_interfaces__srv__MyCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Request__Sequence * array = (command_interfaces__srv__MyCommand_Request__Sequence *)allocator.allocate(sizeof(command_interfaces__srv__MyCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_interfaces__srv__MyCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_interfaces__srv__MyCommand_Request__Sequence__destroy(command_interfaces__srv__MyCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_interfaces__srv__MyCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_interfaces__srv__MyCommand_Request__Sequence__are_equal(const command_interfaces__srv__MyCommand_Request__Sequence * lhs, const command_interfaces__srv__MyCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_interfaces__srv__MyCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__srv__MyCommand_Request__Sequence__copy(
  const command_interfaces__srv__MyCommand_Request__Sequence * input,
  command_interfaces__srv__MyCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_interfaces__srv__MyCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_interfaces__srv__MyCommand_Request * data =
      (command_interfaces__srv__MyCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_interfaces__srv__MyCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_interfaces__srv__MyCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_interfaces__srv__MyCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
command_interfaces__srv__MyCommand_Response__init(command_interfaces__srv__MyCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // commands
  return true;
}

void
command_interfaces__srv__MyCommand_Response__fini(command_interfaces__srv__MyCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // commands
}

bool
command_interfaces__srv__MyCommand_Response__are_equal(const command_interfaces__srv__MyCommand_Response * lhs, const command_interfaces__srv__MyCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // commands
  if (lhs->commands != rhs->commands) {
    return false;
  }
  return true;
}

bool
command_interfaces__srv__MyCommand_Response__copy(
  const command_interfaces__srv__MyCommand_Response * input,
  command_interfaces__srv__MyCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // commands
  output->commands = input->commands;
  return true;
}

command_interfaces__srv__MyCommand_Response *
command_interfaces__srv__MyCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Response * msg = (command_interfaces__srv__MyCommand_Response *)allocator.allocate(sizeof(command_interfaces__srv__MyCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_interfaces__srv__MyCommand_Response));
  bool success = command_interfaces__srv__MyCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_interfaces__srv__MyCommand_Response__destroy(command_interfaces__srv__MyCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_interfaces__srv__MyCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_interfaces__srv__MyCommand_Response__Sequence__init(command_interfaces__srv__MyCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Response * data = NULL;

  if (size) {
    data = (command_interfaces__srv__MyCommand_Response *)allocator.zero_allocate(size, sizeof(command_interfaces__srv__MyCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_interfaces__srv__MyCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_interfaces__srv__MyCommand_Response__fini(&data[i - 1]);
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
command_interfaces__srv__MyCommand_Response__Sequence__fini(command_interfaces__srv__MyCommand_Response__Sequence * array)
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
      command_interfaces__srv__MyCommand_Response__fini(&array->data[i]);
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

command_interfaces__srv__MyCommand_Response__Sequence *
command_interfaces__srv__MyCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__MyCommand_Response__Sequence * array = (command_interfaces__srv__MyCommand_Response__Sequence *)allocator.allocate(sizeof(command_interfaces__srv__MyCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_interfaces__srv__MyCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_interfaces__srv__MyCommand_Response__Sequence__destroy(command_interfaces__srv__MyCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_interfaces__srv__MyCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_interfaces__srv__MyCommand_Response__Sequence__are_equal(const command_interfaces__srv__MyCommand_Response__Sequence * lhs, const command_interfaces__srv__MyCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_interfaces__srv__MyCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__srv__MyCommand_Response__Sequence__copy(
  const command_interfaces__srv__MyCommand_Response__Sequence * input,
  command_interfaces__srv__MyCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_interfaces__srv__MyCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_interfaces__srv__MyCommand_Response * data =
      (command_interfaces__srv__MyCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_interfaces__srv__MyCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_interfaces__srv__MyCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_interfaces__srv__MyCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
