// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:msg/GGAmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__STRUCT_H_
#define INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/GGAmsg in the package interfaces_subzero.
typedef struct interfaces_subzero__msg__GGAmsg
{
  rosidl_runtime_c__String msg;
  rosidl_runtime_c__String time;
  double lat;
  double lon;
  double alt;
  double geoid;
} interfaces_subzero__msg__GGAmsg;

// Struct for a sequence of interfaces_subzero__msg__GGAmsg.
typedef struct interfaces_subzero__msg__GGAmsg__Sequence
{
  interfaces_subzero__msg__GGAmsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__msg__GGAmsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__STRUCT_H_
