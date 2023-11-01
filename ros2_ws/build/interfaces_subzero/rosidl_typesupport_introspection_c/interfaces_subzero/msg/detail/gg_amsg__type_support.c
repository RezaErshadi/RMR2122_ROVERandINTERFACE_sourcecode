// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_subzero:msg/GGAmsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_subzero/msg/detail/gg_amsg__rosidl_typesupport_introspection_c.h"
#include "interfaces_subzero/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_subzero/msg/detail/gg_amsg__functions.h"
#include "interfaces_subzero/msg/detail/gg_amsg__struct.h"


// Include directives for member types
// Member `msg`
// Member `time`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_subzero__msg__GGAmsg__init(message_memory);
}

void GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_fini_function(void * message_memory)
{
  interfaces_subzero__msg__GGAmsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_member_array[6] = {
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__GGAmsg, msg),  // bytes offset in struct
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
    offsetof(interfaces_subzero__msg__GGAmsg, time),  // bytes offset in struct
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
    offsetof(interfaces_subzero__msg__GGAmsg, lat),  // bytes offset in struct
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
    offsetof(interfaces_subzero__msg__GGAmsg, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__GGAmsg, alt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geoid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__msg__GGAmsg, geoid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_members = {
  "interfaces_subzero__msg",  // message namespace
  "GGAmsg",  // message name
  6,  // number of fields
  sizeof(interfaces_subzero__msg__GGAmsg),
  GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_member_array,  // message members
  GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_init_function,  // function to initialize message memory (memory has to be allocated)
  GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_type_support_handle = {
  0,
  &GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_subzero
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, msg, GGAmsg)() {
  if (!GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_type_support_handle.typesupport_identifier) {
    GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GGAmsg__rosidl_typesupport_introspection_c__GGAmsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
