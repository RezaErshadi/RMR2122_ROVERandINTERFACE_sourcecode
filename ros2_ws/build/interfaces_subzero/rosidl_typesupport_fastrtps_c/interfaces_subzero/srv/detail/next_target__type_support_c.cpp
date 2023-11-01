// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_subzero:srv/NextTarget.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/srv/detail/next_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_subzero/srv/detail/next_target__struct.h"
#include "interfaces_subzero/srv/detail/next_target__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NextTarget_Request__ros_msg_type = interfaces_subzero__srv__NextTarget_Request;

static bool _NextTarget_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NextTarget_Request__ros_msg_type * ros_message = static_cast<const _NextTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: i_next_target
  {
    cdr << ros_message->i_next_target;
  }

  // Field name: next_target_lat
  {
    cdr << ros_message->next_target_lat;
  }

  // Field name: next_target_lon
  {
    cdr << ros_message->next_target_lon;
  }

  // Field name: bearing_to_next_target
  {
    cdr << ros_message->bearing_to_next_target;
  }

  // Field name: dist_to_next_target
  {
    cdr << ros_message->dist_to_next_target;
  }

  // Field name: dist_from_last_ref
  {
    cdr << ros_message->dist_from_last_ref;
  }

  return true;
}

static bool _NextTarget_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NextTarget_Request__ros_msg_type * ros_message = static_cast<_NextTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: i_next_target
  {
    cdr >> ros_message->i_next_target;
  }

  // Field name: next_target_lat
  {
    cdr >> ros_message->next_target_lat;
  }

  // Field name: next_target_lon
  {
    cdr >> ros_message->next_target_lon;
  }

  // Field name: bearing_to_next_target
  {
    cdr >> ros_message->bearing_to_next_target;
  }

  // Field name: dist_to_next_target
  {
    cdr >> ros_message->dist_to_next_target;
  }

  // Field name: dist_from_last_ref
  {
    cdr >> ros_message->dist_from_last_ref;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__srv__NextTarget_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NextTarget_Request__ros_msg_type * ros_message = static_cast<const _NextTarget_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name i_next_target
  {
    size_t item_size = sizeof(ros_message->i_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_target_lat
  {
    size_t item_size = sizeof(ros_message->next_target_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_target_lon
  {
    size_t item_size = sizeof(ros_message->next_target_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bearing_to_next_target
  {
    size_t item_size = sizeof(ros_message->bearing_to_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_to_next_target
  {
    size_t item_size = sizeof(ros_message->dist_to_next_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_from_last_ref
  {
    size_t item_size = sizeof(ros_message->dist_from_last_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NextTarget_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__srv__NextTarget_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__srv__NextTarget_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: i_next_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: next_target_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: next_target_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bearing_to_next_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_to_next_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: dist_from_last_ref
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NextTarget_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__srv__NextTarget_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NextTarget_Request = {
  "interfaces_subzero::srv",
  "NextTarget_Request",
  _NextTarget_Request__cdr_serialize,
  _NextTarget_Request__cdr_deserialize,
  _NextTarget_Request__get_serialized_size,
  _NextTarget_Request__max_serialized_size
};

static rosidl_message_type_support_t _NextTarget_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NextTarget_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, NextTarget_Request)() {
  return &_NextTarget_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces_subzero/srv/detail/next_target__struct.h"
// already included above
// #include "interfaces_subzero/srv/detail/next_target__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NextTarget_Response__ros_msg_type = interfaces_subzero__srv__NextTarget_Response;

static bool _NextTarget_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NextTarget_Response__ros_msg_type * ros_message = static_cast<const _NextTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_sent
  {
    cdr << (ros_message->msg_sent ? true : false);
  }

  return true;
}

static bool _NextTarget_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NextTarget_Response__ros_msg_type * ros_message = static_cast<_NextTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_sent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->msg_sent = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__srv__NextTarget_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NextTarget_Response__ros_msg_type * ros_message = static_cast<const _NextTarget_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msg_sent
  {
    size_t item_size = sizeof(ros_message->msg_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NextTarget_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__srv__NextTarget_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__srv__NextTarget_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msg_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NextTarget_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__srv__NextTarget_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NextTarget_Response = {
  "interfaces_subzero::srv",
  "NextTarget_Response",
  _NextTarget_Response__cdr_serialize,
  _NextTarget_Response__cdr_deserialize,
  _NextTarget_Response__get_serialized_size,
  _NextTarget_Response__max_serialized_size
};

static rosidl_message_type_support_t _NextTarget_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NextTarget_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, NextTarget_Response)() {
  return &_NextTarget_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_subzero/srv/next_target.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NextTarget__callbacks = {
  "interfaces_subzero::srv",
  "NextTarget",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, NextTarget_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, NextTarget_Response)(),
};

static rosidl_service_type_support_t NextTarget__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NextTarget__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, NextTarget)() {
  return &NextTarget__handle;
}

#if defined(__cplusplus)
}
#endif
