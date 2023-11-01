// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:msg/Telemetrymsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_H_
#define INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Telemetrymsg in the package interfaces_subzero.
typedef struct interfaces_subzero__msg__Telemetrymsg
{
  uint8_t structure_needs_at_least_one_member;
} interfaces_subzero__msg__Telemetrymsg;

// Struct for a sequence of interfaces_subzero__msg__Telemetrymsg.
typedef struct interfaces_subzero__msg__Telemetrymsg__Sequence
{
  interfaces_subzero__msg__Telemetrymsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__msg__Telemetrymsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_H_
