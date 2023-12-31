// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_subzero:msg/RMCmsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_subzero/msg/detail/rm_cmsg__rosidl_typesupport_introspection_c.h"
#include "interfaces_subzero/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_subzero/msg/detail/rm_cmsg__functions.h"
#include "interfaces_subzero/msg/detail/rm_cmsg__struct.h"


// Include directives for member types
// Member `msg`
// Member `time`
// Member `date`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_subzero__msg__RMCmsg__init(message_memory);
}

void RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_fini_function(void * message_memory)
{
  interfaces_subzero__msg__RMCmsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_member_array[7] = {
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "course",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__RMCmsg, course),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_members = {
  "interfaces_subzero__msg",  // message namespace
  "RMCmsg",  // message name
  7,  // number of fields
  sizeof(interfaces_subzero__msg__RMCmsg),
  RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_member_array,  // message members
  RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_type_support_handle = {
  0,
  &RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_subzero
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, msg, RMCmsg)() {
  if (!RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_type_support_handle.typesupport_identifier) {
    RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RMCmsg__rosidl_typesupport_introspection_c__RMCmsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
