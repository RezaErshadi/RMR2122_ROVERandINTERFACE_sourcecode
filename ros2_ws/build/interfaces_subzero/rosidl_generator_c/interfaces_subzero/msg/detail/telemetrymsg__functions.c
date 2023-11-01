// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:msg/Telemetrymsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/telemetrymsg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
interfaces_subzero__msg__Telemetrymsg__init(interfaces_subzero__msg__Telemetrymsg * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
interfaces_subzero__msg__Telemetrymsg__fini(interfaces_subzero__msg__Telemetrymsg * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

interfaces_subzero__msg__Telemetrymsg *
interfaces_subzero__msg__Telemetrymsg__create()
{
  interfaces_subzero__msg__Telemetrymsg * msg = (interfaces_subzero__msg__Telemetrymsg *)malloc(sizeof(interfaces_subzero__msg__Telemetrymsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__msg__Telemetrymsg));
  bool success = interfaces_subzero__msg__Telemetrymsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__msg__Telemetrymsg__destroy(interfaces_subzero__msg__Telemetrymsg * msg)
{
  if (msg) {
    interfaces_subzero__msg__Telemetrymsg__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__msg__Telemetrymsg__Sequence__init(interfaces_subzero__msg__Telemetrymsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__msg__Telemetrymsg * data = NULL;
  if (size) {
    data = (interfaces_subzero__msg__Telemetrymsg *)calloc(size, sizeof(interfaces_subzero__msg__Telemetrymsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__msg__Telemetrymsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__msg__Telemetrymsg__fini(&data[i - 1]);
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
interfaces_subzero__msg__Telemetrymsg__Sequence__fini(interfaces_subzero__msg__Telemetrymsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__msg__Telemetrymsg__fini(&array->data[i]);
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

interfaces_subzero__msg__Telemetrymsg__Sequence *
interfaces_subzero__msg__Telemetrymsg__Sequence__create(size_t size)
{
  interfaces_subzero__msg__Telemetrymsg__Sequence * array = (interfaces_subzero__msg__Telemetrymsg__Sequence *)malloc(sizeof(interfaces_subzero__msg__Telemetrymsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__msg__Telemetrymsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__msg__Telemetrymsg__Sequence__destroy(interfaces_subzero__msg__Telemetrymsg__Sequence * array)
{
  if (array) {
    interfaces_subzero__msg__Telemetrymsg__Sequence__fini(array);
  }
  free(array);
}
