// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:msg/MyTrimbleMsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/my_trimble_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `gga_msg`
// Member `gga_time`
// Member `rmc_msg`
// Member `rmc_time`
// Member `rover_date`
// Member `gps_tel`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces_subzero__msg__MyTrimbleMsg__init(interfaces_subzero__msg__MyTrimbleMsg * msg)
{
  if (!msg) {
    return false;
  }
  // gps_connection
  // gps_data
  // age
  // gga_msg
  if (!rosidl_runtime_c__String__init(&msg->gga_msg)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  // gga_time
  if (!rosidl_runtime_c__String__init(&msg->gga_time)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  // rover_lat
  // rover_lon
  // rover_alt
  // rover_geoid
  // rmc_msg
  if (!rosidl_runtime_c__String__init(&msg->rmc_msg)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  // rmc_time
  if (!rosidl_runtime_c__String__init(&msg->rmc_time)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  // rover_date
  if (!rosidl_runtime_c__String__init(&msg->rover_date)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  // rover_speed
  // rover_course
  // gps_tel
  if (!rosidl_runtime_c__String__init(&msg->gps_tel)) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_subzero__msg__MyTrimbleMsg__fini(interfaces_subzero__msg__MyTrimbleMsg * msg)
{
  if (!msg) {
    return;
  }
  // gps_connection
  // gps_data
  // age
  // gga_msg
  rosidl_runtime_c__String__fini(&msg->gga_msg);
  // gga_time
  rosidl_runtime_c__String__fini(&msg->gga_time);
  // rover_lat
  // rover_lon
  // rover_alt
  // rover_geoid
  // rmc_msg
  rosidl_runtime_c__String__fini(&msg->rmc_msg);
  // rmc_time
  rosidl_runtime_c__String__fini(&msg->rmc_time);
  // rover_date
  rosidl_runtime_c__String__fini(&msg->rover_date);
  // rover_speed
  // rover_course
  // gps_tel
  rosidl_runtime_c__String__fini(&msg->gps_tel);
}

interfaces_subzero__msg__MyTrimbleMsg *
interfaces_subzero__msg__MyTrimbleMsg__create()
{
  interfaces_subzero__msg__MyTrimbleMsg * msg = (interfaces_subzero__msg__MyTrimbleMsg *)malloc(sizeof(interfaces_subzero__msg__MyTrimbleMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__msg__MyTrimbleMsg));
  bool success = interfaces_subzero__msg__MyTrimbleMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__msg__MyTrimbleMsg__destroy(interfaces_subzero__msg__MyTrimbleMsg * msg)
{
  if (msg) {
    interfaces_subzero__msg__MyTrimbleMsg__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__msg__MyTrimbleMsg__Sequence__init(interfaces_subzero__msg__MyTrimbleMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__msg__MyTrimbleMsg * data = NULL;
  if (size) {
    data = (interfaces_subzero__msg__MyTrimbleMsg *)calloc(size, sizeof(interfaces_subzero__msg__MyTrimbleMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__msg__MyTrimbleMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__msg__MyTrimbleMsg__fini(&data[i - 1]);
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
interfaces_subzero__msg__MyTrimbleMsg__Sequence__fini(interfaces_subzero__msg__MyTrimbleMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__msg__MyTrimbleMsg__fini(&array->data[i]);
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

interfaces_subzero__msg__MyTrimbleMsg__Sequence *
interfaces_subzero__msg__MyTrimbleMsg__Sequence__create(size_t size)
{
  interfaces_subzero__msg__MyTrimbleMsg__Sequence * array = (interfaces_subzero__msg__MyTrimbleMsg__Sequence *)malloc(sizeof(interfaces_subzero__msg__MyTrimbleMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__msg__MyTrimbleMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__msg__MyTrimbleMsg__Sequence__destroy(interfaces_subzero__msg__MyTrimbleMsg__Sequence * array)
{
  if (array) {
    interfaces_subzero__msg__MyTrimbleMsg__Sequence__fini(array);
  }
  free(array);
}
