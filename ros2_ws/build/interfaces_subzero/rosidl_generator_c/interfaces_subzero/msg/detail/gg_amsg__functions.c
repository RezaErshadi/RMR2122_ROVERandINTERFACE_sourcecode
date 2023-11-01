// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:msg/GGAmsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/gg_amsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `msg`
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces_subzero__msg__GGAmsg__init(interfaces_subzero__msg__GGAmsg * msg)
{
  if (!msg) {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    interfaces_subzero__msg__GGAmsg__fini(msg);
    return false;
  }
  // time
  if (!rosidl_runtime_c__String__init(&msg->time)) {
    interfaces_subzero__msg__GGAmsg__fini(msg);
    return false;
  }
  // lat
  // lon
  // alt
  // geoid
  return true;
}

void
interfaces_subzero__msg__GGAmsg__fini(interfaces_subzero__msg__GGAmsg * msg)
{
  if (!msg) {
    return;
  }
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // time
  rosidl_runtime_c__String__fini(&msg->time);
  // lat
  // lon
  // alt
  // geoid
}

interfaces_subzero__msg__GGAmsg *
interfaces_subzero__msg__GGAmsg__create()
{
  interfaces_subzero__msg__GGAmsg * msg = (interfaces_subzero__msg__GGAmsg *)malloc(sizeof(interfaces_subzero__msg__GGAmsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__msg__GGAmsg));
  bool success = interfaces_subzero__msg__GGAmsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__msg__GGAmsg__destroy(interfaces_subzero__msg__GGAmsg * msg)
{
  if (msg) {
    interfaces_subzero__msg__GGAmsg__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__msg__GGAmsg__Sequence__init(interfaces_subzero__msg__GGAmsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__msg__GGAmsg * data = NULL;
  if (size) {
    data = (interfaces_subzero__msg__GGAmsg *)calloc(size, sizeof(interfaces_subzero__msg__GGAmsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__msg__GGAmsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__msg__GGAmsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_subzero__msg__GGAmsg__Sequence__fini(interfaces_subzero__msg__GGAmsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__msg__GGAmsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_subzero__msg__GGAmsg__Sequence *
interfaces_subzero__msg__GGAmsg__Sequence__create(size_t size)
{
  interfaces_subzero__msg__GGAmsg__Sequence * array = (interfaces_subzero__msg__GGAmsg__Sequence *)malloc(sizeof(interfaces_subzero__msg__GGAmsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__msg__GGAmsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__msg__GGAmsg__Sequence__destroy(interfaces_subzero__msg__GGAmsg__Sequence * array)
{
  if (array) {
    interfaces_subzero__msg__GGAmsg__Sequence__fini(array);
  }
  free(array);
}
