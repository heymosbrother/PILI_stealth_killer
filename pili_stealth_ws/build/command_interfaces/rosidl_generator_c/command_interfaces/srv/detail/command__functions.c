// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from command_interfaces:srv/Command.idl
// generated code does not contain a copyright notice
#include "command_interfaces/srv/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
command_interfaces__srv__Command_Request__init(command_interfaces__srv__Command_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input1
  // input2
  // input3
  // input4
  // input5
  // input6
  return true;
}

void
command_interfaces__srv__Command_Request__fini(command_interfaces__srv__Command_Request * msg)
{
  if (!msg) {
    return;
  }
  // input1
  // input2
  // input3
  // input4
  // input5
  // input6
}

bool
command_interfaces__srv__Command_Request__are_equal(const command_interfaces__srv__Command_Request * lhs, const command_interfaces__srv__Command_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input1
  if (lhs->input1 != rhs->input1) {
    return false;
  }
  // input2
  if (lhs->input2 != rhs->input2) {
    return false;
  }
  // input3
  if (lhs->input3 != rhs->input3) {
    return false;
  }
  // input4
  if (lhs->input4 != rhs->input4) {
    return false;
  }
  // input5
  if (lhs->input5 != rhs->input5) {
    return false;
  }
  // input6
  if (lhs->input6 != rhs->input6) {
    return false;
  }
  return true;
}

bool
command_interfaces__srv__Command_Request__copy(
  const command_interfaces__srv__Command_Request * input,
  command_interfaces__srv__Command_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input1
  output->input1 = input->input1;
  // input2
  output->input2 = input->input2;
  // input3
  output->input3 = input->input3;
  // input4
  output->input4 = input->input4;
  // input5
  output->input5 = input->input5;
  // input6
  output->input6 = input->input6;
  return true;
}

command_interfaces__srv__Command_Request *
command_interfaces__srv__Command_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Request * msg = (command_interfaces__srv__Command_Request *)allocator.allocate(sizeof(command_interfaces__srv__Command_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_interfaces__srv__Command_Request));
  bool success = command_interfaces__srv__Command_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_interfaces__srv__Command_Request__destroy(command_interfaces__srv__Command_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_interfaces__srv__Command_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_interfaces__srv__Command_Request__Sequence__init(command_interfaces__srv__Command_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Request * data = NULL;

  if (size) {
    data = (command_interfaces__srv__Command_Request *)allocator.zero_allocate(size, sizeof(command_interfaces__srv__Command_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_interfaces__srv__Command_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_interfaces__srv__Command_Request__fini(&data[i - 1]);
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
command_interfaces__srv__Command_Request__Sequence__fini(command_interfaces__srv__Command_Request__Sequence * array)
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
      command_interfaces__srv__Command_Request__fini(&array->data[i]);
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

command_interfaces__srv__Command_Request__Sequence *
command_interfaces__srv__Command_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Request__Sequence * array = (command_interfaces__srv__Command_Request__Sequence *)allocator.allocate(sizeof(command_interfaces__srv__Command_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_interfaces__srv__Command_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_interfaces__srv__Command_Request__Sequence__destroy(command_interfaces__srv__Command_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_interfaces__srv__Command_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_interfaces__srv__Command_Request__Sequence__are_equal(const command_interfaces__srv__Command_Request__Sequence * lhs, const command_interfaces__srv__Command_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_interfaces__srv__Command_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__srv__Command_Request__Sequence__copy(
  const command_interfaces__srv__Command_Request__Sequence * input,
  command_interfaces__srv__Command_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_interfaces__srv__Command_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_interfaces__srv__Command_Request * data =
      (command_interfaces__srv__Command_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_interfaces__srv__Command_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_interfaces__srv__Command_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_interfaces__srv__Command_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
command_interfaces__srv__Command_Response__init(command_interfaces__srv__Command_Response * msg)
{
  if (!msg) {
    return false;
  }
  // command_array
  return true;
}

void
command_interfaces__srv__Command_Response__fini(command_interfaces__srv__Command_Response * msg)
{
  if (!msg) {
    return;
  }
  // command_array
}

bool
command_interfaces__srv__Command_Response__are_equal(const command_interfaces__srv__Command_Response * lhs, const command_interfaces__srv__Command_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command_array
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->command_array[i] != rhs->command_array[i]) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__srv__Command_Response__copy(
  const command_interfaces__srv__Command_Response * input,
  command_interfaces__srv__Command_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // command_array
  for (size_t i = 0; i < 6; ++i) {
    output->command_array[i] = input->command_array[i];
  }
  return true;
}

command_interfaces__srv__Command_Response *
command_interfaces__srv__Command_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Response * msg = (command_interfaces__srv__Command_Response *)allocator.allocate(sizeof(command_interfaces__srv__Command_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_interfaces__srv__Command_Response));
  bool success = command_interfaces__srv__Command_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_interfaces__srv__Command_Response__destroy(command_interfaces__srv__Command_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_interfaces__srv__Command_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_interfaces__srv__Command_Response__Sequence__init(command_interfaces__srv__Command_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Response * data = NULL;

  if (size) {
    data = (command_interfaces__srv__Command_Response *)allocator.zero_allocate(size, sizeof(command_interfaces__srv__Command_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_interfaces__srv__Command_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_interfaces__srv__Command_Response__fini(&data[i - 1]);
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
command_interfaces__srv__Command_Response__Sequence__fini(command_interfaces__srv__Command_Response__Sequence * array)
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
      command_interfaces__srv__Command_Response__fini(&array->data[i]);
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

command_interfaces__srv__Command_Response__Sequence *
command_interfaces__srv__Command_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_interfaces__srv__Command_Response__Sequence * array = (command_interfaces__srv__Command_Response__Sequence *)allocator.allocate(sizeof(command_interfaces__srv__Command_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_interfaces__srv__Command_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_interfaces__srv__Command_Response__Sequence__destroy(command_interfaces__srv__Command_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_interfaces__srv__Command_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_interfaces__srv__Command_Response__Sequence__are_equal(const command_interfaces__srv__Command_Response__Sequence * lhs, const command_interfaces__srv__Command_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_interfaces__srv__Command_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_interfaces__srv__Command_Response__Sequence__copy(
  const command_interfaces__srv__Command_Response__Sequence * input,
  command_interfaces__srv__Command_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_interfaces__srv__Command_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_interfaces__srv__Command_Response * data =
      (command_interfaces__srv__Command_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_interfaces__srv__Command_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_interfaces__srv__Command_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_interfaces__srv__Command_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
