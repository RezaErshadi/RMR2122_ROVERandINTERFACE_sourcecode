// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:srv/SpeedValues.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_H_
#define INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SpeedValues in the package interfaces_subzero.
typedef struct interfaces_subzero__srv__SpeedValues_Request
{
  double v_linear;
  double w_angular;
} interfaces_subzero__srv__SpeedValues_Request;

// Struct for a sequence of interfaces_subzero__srv__SpeedValues_Request.
typedef struct interfaces_subzero__srv__SpeedValues_Request__Sequence
{
  interfaces_subzero__srv__SpeedValues_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__srv__SpeedValues_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SpeedValues in the package interfaces_subzero.
typedef struct interfaces_subzero__srv__SpeedValues_Response
{
  bool msg_sent;
} interfaces_subzero__srv__SpeedValues_Response;

// Struct for a sequence of interfaces_subzero__srv__SpeedValues_Response.
typedef struct interfaces_subzero__srv__SpeedValues_Response__Sequence
{
  interfaces_subzero__srv__SpeedValues_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__srv__SpeedValues_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_H_
