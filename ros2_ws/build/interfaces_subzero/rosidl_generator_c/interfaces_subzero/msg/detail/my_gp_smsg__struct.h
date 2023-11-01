// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:msg/MyGPSmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__STRUCT_H_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gps'
// Member 'nmea'
// Member 'msg'
// Member 'qual'
// Member 'date'
// Member 'time'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MyGPSmsg in the package interfaces_subzero.
typedef struct interfaces_subzero__msg__MyGPSmsg
{
  rosidl_runtime_c__String gps;
  rosidl_runtime_c__String nmea;
  rosidl_runtime_c__String msg;
  int64_t iqual;
  rosidl_runtime_c__String qual;
  rosidl_runtime_c__String date;
  rosidl_runtime_c__String time;
  double lat;
  double lon;
  double alt;
  double geoid;
  double speed;
  double course;
} interfaces_subzero__msg__MyGPSmsg;

// Struct for a sequence of interfaces_subzero__msg__MyGPSmsg.
typedef struct interfaces_subzero__msg__MyGPSmsg__Sequence
{
  interfaces_subzero__msg__MyGPSmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__msg__MyGPSmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__STRUCT_H_
