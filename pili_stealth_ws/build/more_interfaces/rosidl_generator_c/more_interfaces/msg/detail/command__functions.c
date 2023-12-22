// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from more_interfaces:msg/Command.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
more_interfaces__msg__Command__init(more_interfaces__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // vm1
  // tm1
  // vm2
  // tm2
  // vm3
  // tm3
  // ts
  return true;
}

void
more_interfaces__msg__Command__fini(more_interfaces__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // vm1
  // tm1
  // vm2
  // tm2
  // vm3
  // tm3
  // ts
}

bool
more_interfaces__msg__Command__are_equal(const more_interfaces__msg__Command * lhs, const more_interfaces__msg__Command * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // vm1
  if (lhs->vm1 != rhs->vm1) {
    return false;
  }
  // tm1
  if (lhs->tm1 != rhs->tm1) {
    return false;
  }
  // vm2
  if (lhs->vm2 != rhs->vm2) {
    return false;
  }
  // tm2
  if (lhs->tm2 != rhs->tm2) {
    return false;
  }
  // vm3
  if (lhs->vm3 != rhs->vm3) {
    return false;
  }
  // tm3
  if (lhs->tm3 != rhs->tm3) {
    return false;
  }
  // ts
  if (lhs->ts != rhs->ts) {
    return false;
  }
  return true;
}

bool
more_interfaces__msg__Command__copy(
  const more_interfaces__msg__Command * input,
  more_interfaces__msg__Command * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // vm1
  output->vm1 = input->vm1;
  // tm1
  output->tm1 = input->tm1;
  // vm2
  output->vm2 = input->vm2;
  // tm2
  output->tm2 = input->tm2;
  // vm3
  output->vm3 = input->vm3;
  // tm3
  output->tm3 = input->tm3;
  // ts
  output->ts = input->ts;
  return true;
}

more_interfaces__msg__Command *
more_interfaces__msg__Command__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Command * msg = (more_interfaces__msg__Command *)allocator.allocate(sizeof(more_interfaces__msg__Command), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(more_interfaces__msg__Command));
  bool success = more_interfaces__msg__Command__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
more_interfaces__msg__Command__destroy(more_interfaces__msg__Command * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    more_interfaces__msg__Command__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
more_interfaces__msg__Command__Sequence__init(more_interfaces__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Command * data = NULL;

  if (size) {
    data = (more_interfaces__msg__Command *)allocator.zero_allocate(size, sizeof(more_interfaces__msg__Command), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = more_interfaces__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        more_interfaces__msg__Command__fini(&data[i - 1]);
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
more_interfaces__msg__Command__Sequence__fini(more_interfaces__msg__Command__Sequence * array)
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
      more_interfaces__msg__Command__fini(&array->data[i]);
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

more_interfaces__msg__Command__Sequence *
more_interfaces__msg__Command__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  more_interfaces__msg__Command__Sequence * array = (more_interfaces__msg__Command__Sequence *)allocator.allocate(sizeof(more_interfaces__msg__Command__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = more_interfaces__msg__Command__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
more_interfaces__msg__Command__Sequence__destroy(more_interfaces__msg__Command__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    more_interfaces__msg__Command__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
more_interfaces__msg__Command__Sequence__are_equal(const more_interfaces__msg__Command__Sequence * lhs, const more_interfaces__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!more_interfaces__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
more_interfaces__msg__Command__Sequence__copy(
  const more_interfaces__msg__Command__Sequence * input,
  more_interfaces__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(more_interfaces__msg__Command);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    more_interfaces__msg__Command * data =
      (more_interfaces__msg__Command *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!more_interfaces__msg__Command__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          more_interfaces__msg__Command__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!more_interfaces__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
