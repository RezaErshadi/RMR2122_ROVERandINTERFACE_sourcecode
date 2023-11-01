// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_subzero:srv/ApRESConf.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/srv/detail/ap_res_conf__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_subzero/srv/detail/ap_res_conf__struct.h"
#include "interfaces_subzero/srv/detail/ap_res_conf__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // attenuators, gains, rx, tx
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // attenuators, gains, rx, tx
#include "rosidl_runtime_c/string.h"  // act, polarization, prefix, type
#include "rosidl_runtime_c/string_functions.h"  // act, polarization, prefix, type

// forward declare type support functions


using _ApRESConf_Request__ros_msg_type = interfaces_subzero__srv__ApRESConf_Request;

static bool _ApRESConf_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApRESConf_Request__ros_msg_type * ros_message = static_cast<const _ApRESConf_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: act
  {
    const rosidl_runtime_c__String * str = &ros_message->act;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: n_attenuator
  {
    cdr << ros_message->n_attenuator;
  }

  // Field name: attenuators
  {
    size_t size = ros_message->attenuators.size;
    auto array_ptr = ros_message->attenuators.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gains
  {
    size_t size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tx
  {
    size_t size = ros_message->tx.size;
    auto array_ptr = ros_message->tx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rx
  {
    size_t size = ros_message->rx.size;
    auto array_ptr = ros_message->rx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: polarization
  {
    const rosidl_runtime_c__String * str = &ros_message->polarization;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: n_subburst
  {
    cdr << ros_message->n_subburst;
  }

  // Field name: download
  {
    cdr << (ros_message->download ? true : false);
  }

  // Field name: prefix
  {
    const rosidl_runtime_c__String * str = &ros_message->prefix;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ApRESConf_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApRESConf_Request__ros_msg_type * ros_message = static_cast<_ApRESConf_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: act
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->act.data) {
      rosidl_runtime_c__String__init(&ros_message->act);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->act,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'act'\n");
      return false;
    }
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: n_attenuator
  {
    cdr >> ros_message->n_attenuator;
  }

  // Field name: attenuators
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->attenuators.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->attenuators);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->attenuators, size)) {
      return "failed to create array for field 'attenuators'";
    }
    auto array_ptr = ros_message->attenuators.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gains
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->gains.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->gains);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->gains, size)) {
      return "failed to create array for field 'gains'";
    }
    auto array_ptr = ros_message->gains.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tx.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->tx);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->tx, size)) {
      return "failed to create array for field 'tx'";
    }
    auto array_ptr = ros_message->tx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rx.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->rx);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->rx, size)) {
      return "failed to create array for field 'rx'";
    }
    auto array_ptr = ros_message->rx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: polarization
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->polarization.data) {
      rosidl_runtime_c__String__init(&ros_message->polarization);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->polarization,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'polarization'\n");
      return false;
    }
  }

  // Field name: n_subburst
  {
    cdr >> ros_message->n_subburst;
  }

  // Field name: download
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->download = tmp ? true : false;
  }

  // Field name: prefix
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prefix.data) {
      rosidl_runtime_c__String__init(&ros_message->prefix);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prefix,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prefix'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__srv__ApRESConf_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApRESConf_Request__ros_msg_type * ros_message = static_cast<const _ApRESConf_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name act
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->act.size + 1);
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name n_attenuator
  {
    size_t item_size = sizeof(ros_message->n_attenuator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attenuators
  {
    size_t array_size = ros_message->attenuators.size;
    auto array_ptr = ros_message->attenuators.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gains
  {
    size_t array_size = ros_message->gains.size;
    auto array_ptr = ros_message->gains.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx
  {
    size_t array_size = ros_message->tx.size;
    auto array_ptr = ros_message->tx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx
  {
    size_t array_size = ros_message->rx.size;
    auto array_ptr = ros_message->rx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name polarization
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->polarization.size + 1);
  // field.name n_subburst
  {
    size_t item_size = sizeof(ros_message->n_subburst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name download
  {
    size_t item_size = sizeof(ros_message->download);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prefix
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prefix.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ApRESConf_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__srv__ApRESConf_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__srv__ApRESConf_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: act
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: n_attenuator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: attenuators
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gains
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tx
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rx
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: polarization
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: n_subburst
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: download
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prefix
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ApRESConf_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__srv__ApRESConf_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApRESConf_Request = {
  "interfaces_subzero::srv",
  "ApRESConf_Request",
  _ApRESConf_Request__cdr_serialize,
  _ApRESConf_Request__cdr_deserialize,
  _ApRESConf_Request__get_serialized_size,
  _ApRESConf_Request__max_serialized_size
};

static rosidl_message_type_support_t _ApRESConf_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApRESConf_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, ApRESConf_Request)() {
  return &_ApRESConf_Request__type_support;
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
// #include "interfaces_subzero/srv/detail/ap_res_conf__struct.h"
// already included above
// #include "interfaces_subzero/srv/detail/ap_res_conf__functions.h"
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


using _ApRESConf_Response__ros_msg_type = interfaces_subzero__srv__ApRESConf_Response;

static bool _ApRESConf_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApRESConf_Response__ros_msg_type * ros_message = static_cast<const _ApRESConf_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_sent
  {
    cdr << (ros_message->msg_sent ? true : false);
  }

  return true;
}

static bool _ApRESConf_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApRESConf_Response__ros_msg_type * ros_message = static_cast<_ApRESConf_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: msg_sent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->msg_sent = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__srv__ApRESConf_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApRESConf_Response__ros_msg_type * ros_message = static_cast<const _ApRESConf_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ApRESConf_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__srv__ApRESConf_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__srv__ApRESConf_Response(
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

static size_t _ApRESConf_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__srv__ApRESConf_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApRESConf_Response = {
  "interfaces_subzero::srv",
  "ApRESConf_Response",
  _ApRESConf_Response__cdr_serialize,
  _ApRESConf_Response__cdr_deserialize,
  _ApRESConf_Response__get_serialized_size,
  _ApRESConf_Response__max_serialized_size
};

static rosidl_message_type_support_t _ApRESConf_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApRESConf_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, ApRESConf_Response)() {
  return &_ApRESConf_Response__type_support;
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
#include "interfaces_subzero/srv/ap_res_conf.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ApRESConf__callbacks = {
  "interfaces_subzero::srv",
  "ApRESConf",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, ApRESConf_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, ApRESConf_Response)(),
};

static rosidl_service_type_support_t ApRESConf__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ApRESConf__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, srv, ApRESConf)() {
  return &ApRESConf__handle;
}

#if defined(__cplusplus)
}
#endif
