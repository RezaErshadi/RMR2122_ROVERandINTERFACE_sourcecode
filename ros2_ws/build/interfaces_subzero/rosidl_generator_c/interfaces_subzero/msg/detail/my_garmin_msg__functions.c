// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:msg/MyGarminMsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/my_garmin_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `bpq_msg`
// Member `bpq_time`
// Member `gga_msg`
// Member `gga_time`
// Member `rmc_msg`
// Member `rmc_time`
// Member `rover_date`
// Member `gps_for_arduino`
// Member `gps_for_radio`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces_subzero__msg__MyGarminMsg__init(interfaces_subzero__msg__MyGarminMsg * msg)
{
  if (!msg) {
    return false;
  }
  // gps_connection
  // gps_data
  // age
  // bpq_msg
  if (!rosidl_runtime_c__String__init(&msg->bpq_msg)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // bpq_time
  if (!rosidl_runtime_c__String__init(&msg->bpq_time)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // base_lat
  // base_lon
  // base_eht
  // gga_msg
  if (!rosidl_runtime_c__String__init(&msg->gga_msg)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // gga_time
  if (!rosidl_runtime_c__String__init(&msg->gga_time)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // rover_lat
  // rover_lon
  // rover_alt
  // rover_geoid
  // rmc_msg
  if (!rosidl_runtime_c__String__init(&msg->rmc_msg)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // rmc_time
  if (!rosidl_runtime_c__String__init(&msg->rmc_time)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // rover_date
  if (!rosidl_runtime_c__String__init(&msg->rover_date)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // rover_speed
  // rover_course
  // gps_for_arduino
  if (!rosidl_runtime_c__String__init(&msg->gps_for_arduino)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  // gps_for_radio
  if (!rosidl_runtime_c__String__init(&msg->gps_for_radio)) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_subzero__msg__MyGarminMsg__fini(interfaces_subzero__msg__MyGarminMsg * msg)
{
  if (!msg) {
    return;
  }
  // gps_connection
  // gps_data
  // age
  // bpq_msg
  rosidl_runtime_c__String__fini(&msg->bpq_msg);
  // bpq_time
  rosidl_runtime_c__String__fini(&msg->bpq_time);
  // base_lat
  // base_lon
  // base_eht
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
  // gps_for_arduino
  rosidl_runtime_c__String__fini(&msg->gps_for_arduino);
  // gps_for_radio
  rosidl_runtime_c__String__fini(&msg->gps_for_radio);
}

interfaces_subzero__msg__MyGarminMsg *
interfaces_subzero__msg__MyGarminMsg__create()
{
  interfaces_subzero__msg__MyGarminMsg * msg = (interfaces_subzero__msg__MyGarminMsg *)malloc(sizeof(interfaces_subzero__msg__MyGarminMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__msg__MyGarminMsg));
  bool success = interfaces_subzero__msg__MyGarminMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__msg__MyGarminMsg__destroy(interfaces_subzero__msg__MyGarminMsg * msg)
{
  if (msg) {
    interfaces_subzero__msg__MyGarminMsg__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__msg__MyGarminMsg__Sequence__init(interfaces_subzero__msg__MyGarminMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__msg__MyGarminMsg * data = NULL;
  if (size) {
    data = (interfaces_subzero__msg__MyGarminMsg *)calloc(size, sizeof(interfaces_subzero__msg__MyGarminMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__msg__MyGarminMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__msg__MyGarminMsg__fini(&data[i - 1]);
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
interfaces_subzero__msg__MyGarminMsg__Sequence__fini(interfaces_subzero__msg__MyGarminMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__msg__MyGarminMsg__fini(&array->data[i]);
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

interfaces_subzero__msg__MyGarminMsg__Sequence *
interfaces_subzero__msg__MyGarminMsg__Sequence__create(size_t size)
{
  interfaces_subzero__msg__MyGarminMsg__Sequence * array = (interfaces_subzero__msg__MyGarminMsg__Sequence *)malloc(sizeof(interfaces_subzero__msg__MyGarminMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__msg__MyGarminMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__msg__MyGarminMsg__Sequence__destroy(interfaces_subzero__msg__MyGarminMsg__Sequence * array)
{
  if (array) {
    interfaces_subzero__msg__MyGarminMsg__Sequence__fini(array);
  }
  free(array);
}
