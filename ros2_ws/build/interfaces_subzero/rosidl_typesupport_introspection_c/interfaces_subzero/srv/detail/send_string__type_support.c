// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_subzero:srv/SendString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_subzero/srv/detail/send_string__rosidl_typesupport_introspection_c.h"
#include "interfaces_subzero/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_subzero/srv/detail/send_string__functions.h"
#include "interfaces_subzero/srv/detail/send_string__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_subzero__srv__SendString_Request__init(message_memory);
}

void SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_fini_function(void * message_memory)
{
  interfaces_subzero__srv__SendString_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__srv__SendString_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_members = {
  "interfaces_subzero__srv",  // message namespace
  "SendString_Request",  // message name
  1,  // number of fields
  sizeof(interfaces_subzero__srv__SendString_Request),
  SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_member_array,  // message members
  SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_type_support_handle = {
  0,
  &SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_subzero
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Request)() {
  if (!SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_type_support_handle.typesupport_identifier) {
    SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendString_Request__rosidl_typesupport_introspection_c__SendString_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interfaces_subzero/srv/detail/send_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interfaces_subzero/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interfaces_subzero/srv/detail/send_string__functions.h"
// already included above
// #include "interfaces_subzero/srv/detail/send_string__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_subzero__srv__SendString_Response__init(message_memory);
}

void SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_fini_function(void * message_memory)
{
  interfaces_subzero__srv__SendString_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_member_array[1] = {
  {
    "msg_sent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_subzero__srv__SendString_Response, msg_sent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_members = {
  "interfaces_subzero__srv",  // message namespace
  "SendString_Response",  // message name
  1,  // number of fields
  sizeof(interfaces_subzero__srv__SendString_Response),
  SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_member_array,  // message members
  SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_type_support_handle = {
  0,
  &SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_subzero
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Response)() {
  if (!SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_type_support_handle.typesupport_identifier) {
    SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SendString_Response__rosidl_typesupport_introspection_c__SendString_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interfaces_subzero/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interfaces_subzero/srv/detail/send_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_members = {
  "interfaces_subzero__srv",  // service namespace
  "SendString",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_Request_message_type_support_handle,
  NULL  // response message
  // interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_Response_message_type_support_handle
};

static rosidl_service_type_support_t interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_type_support_handle = {
  0,
  &interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_subzero
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString)() {
  if (!interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_type_support_handle.typesupport_identifier) {
    interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_subzero, srv, SendString_Response)()->data;
  }

  return &interfaces_subzero__srv__detail__send_string__rosidl_typesupport_introspection_c__SendString_service_type_support_handle;
}
