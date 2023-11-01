// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_subzero:srv/ApRESConf.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_H_
#define INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'act'
// Member 'type'
// Member 'polarization'
// Member 'prefix'
#include "rosidl_runtime_c/string.h"
// Member 'attenuators'
// Member 'gains'
// Member 'tx'
// Member 'rx'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/ApRESConf in the package interfaces_subzero.
typedef struct interfaces_subzero__srv__ApRESConf_Request
{
  rosidl_runtime_c__String act;
  rosidl_runtime_c__String type;
  int64_t n_attenuator;
  rosidl_runtime_c__int64__Sequence attenuators;
  rosidl_runtime_c__int64__Sequence gains;
  rosidl_runtime_c__int64__Sequence tx;
  rosidl_runtime_c__int64__Sequence rx;
  rosidl_runtime_c__String polarization;
  int64_t n_subburst;
  bool download;
  rosidl_runtime_c__String prefix;
} interfaces_subzero__srv__ApRESConf_Request;

// Struct for a sequence of interfaces_subzero__srv__ApRESConf_Request.
typedef struct interfaces_subzero__srv__ApRESConf_Request__Sequence
{
  interfaces_subzero__srv__ApRESConf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__srv__ApRESConf_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ApRESConf in the package interfaces_subzero.
typedef struct interfaces_subzero__srv__ApRESConf_Response
{
  bool msg_sent;
} interfaces_subzero__srv__ApRESConf_Response;

// Struct for a sequence of interfaces_subzero__srv__ApRESConf_Response.
typedef struct interfaces_subzero__srv__ApRESConf_Response__Sequence
{
  interfaces_subzero__srv__ApRESConf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_subzero__srv__ApRESConf_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_H_
