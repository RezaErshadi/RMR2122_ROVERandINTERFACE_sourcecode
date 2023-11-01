// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:msg/MyGarminMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__STRUCT_H_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bpq_msg'
// Member 'bpq_time'
// Member 'gga_msg'
// Member 'gga_time'
// Member 'rmc_msg'
// Member 'rmc_time'
// Member 'rover_date'
// Member 'gps_for_arduino'
// Member 'gps_for_radio'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MyGarminMsg in the package interfaces_subzero.
typedef struct interfaces_subzero__msg__MyGarminMsg
{
  bool gps_connection;
  bool gps_data;
  double age;
  rosidl_runtime_c__String bpq_msg;
  rosidl_runtime_c__String bpq_time;
  double base_lat;
  double base_lon;
  double base_eht;
  rosidl_runtime_c__String gga_msg;
  rosidl_runtime_c__String gga_time;
  double rover_lat;
  double rover_lon;
  double rover_alt;
  double rover_geoid;
  rosidl_runtime_c__String rmc_msg;
  rosidl_runtime_c__String rmc_time;
  rosidl_runtime_c__String rover_date;
  double rover_speed;
  double rover_course;
  rosidl_runtime_c__String gps_for_arduino;
  rosidl_runtime_c__String gps_for_radio;
} interfaces_subzero__msg__MyGarminMsg;

// Struct for a sequence of interfaces_subzero__msg__MyGarminMsg.
typedef struct interfaces_subzero__msg__MyGarminMsg__Sequence
{
  interfaces_subzero__msg__MyGarminMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__msg__MyGarminMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__STRUCT_H_
