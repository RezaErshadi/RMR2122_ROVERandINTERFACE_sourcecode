// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:msg/RMCmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_H_
#define INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg'
// Member 'time'
// Member 'date'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RMCmsg in the package interfaces_subzero.
typedef struct interfaces_subzero__msg__RMCmsg
{
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String time;
  rosidl_runtime_c__String date;
  double lat;
  double lon;
  double speed;
  double course;
} interfaces_subzero__msg__RMCmsg;

// Struct for a sequence of interfaces_subzero__msg__RMCmsg.
typedef struct interfaces_subzero__msg__RMCmsg__Sequence
{
  interfaces_subzero__msg__RMCmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__msg__RMCmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_H_
