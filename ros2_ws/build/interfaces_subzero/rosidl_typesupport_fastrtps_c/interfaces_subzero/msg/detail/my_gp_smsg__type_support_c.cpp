// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_subzero:msg/MyGPSmsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/my_gp_smsg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_subzero/msg/detail/my_gp_smsg__struct.h"
#include "interfaces_subzero/msg/detail/my_gp_smsg__functions.h"
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

#include "rosidl_runtime_c/string.h"  // date, gps, msg, nmea, qual, time
#include "rosidl_runtime_c/string_functions.h"  // date, gps, msg, nmea, qual, time

// forward declare type support functions


using _MyGPSmsg__ros_msg_type = interfaces_subzero__msg__MyGPSmsg;

static bool _MyGPSmsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MyGPSmsg__ros_msg_type * ros_message = static_cast<const _MyGPSmsg__ros_msg_type *>(untyped_ros_message);
  // Field name: gps
  {
    const rosidl_runtime_c__String * str = &ros_message->gps;
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

  // Field name: nmea
  {
    const rosidl_runtime_c__String * str = &ros_message->nmea;
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

  // Field name: msg
  {
    const rosidl_runtime_c__String * str = &ros_message->msg;
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

  // Field name: iqual
  {
    cdr << ros_message->iqual;
  }

  // Field name: qual
  {
    const rosidl_runtime_c__String * str = &ros_message->qual;
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

  // Field name: date
  {
    const rosidl_runtime_c__String * str = &ros_message->date;
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

  // Field name: time
  {
    const rosidl_runtime_c__String * str = &ros_message->time;
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

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: alt
  {
    cdr << ros_message->alt;
  }

  // Field name: geoid
  {
    cdr << ros_message->geoid;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: course
  {
    cdr << ros_message->course;
  }

  return true;
}

static bool _MyGPSmsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MyGPSmsg__ros_msg_type * ros_message = static_cast<_MyGPSmsg__ros_msg_type *>(untyped_ros_message);
  // Field name: gps
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gps.data) {
      rosidl_runtime_c__String__init(&ros_message->gps);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gps,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gps'\n");
      return false;
    }
  }

  // Field name: nmea
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->nmea.data) {
      rosidl_runtime_c__String__init(&ros_message->nmea);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->nmea,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'nmea'\n");
      return false;
    }
  }

  // Field name: msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msg.data) {
      rosidl_runtime_c__String__init(&ros_message->msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msg'\n");
      return false;
    }
  }

  // Field name: iqual
  {
    cdr >> ros_message->iqual;
  }

  // Field name: qual
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->qual.data) {
      rosidl_runtime_c__String__init(&ros_message->qual);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->qual,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'qual'\n");
      return false;
    }
  }

  // Field name: date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->date.data) {
      rosidl_runtime_c__String__init(&ros_message->date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'date'\n");
      return false;
    }
  }

  // Field name: time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time.data) {
      rosidl_runtime_c__String__init(&ros_message->time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time'\n");
      return false;
    }
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: alt
  {
    cdr >> ros_message->alt;
  }

  // Field name: geoid
  {
    cdr >> ros_message->geoid;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: course
  {
    cdr >> ros_message->course;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__msg__MyGPSmsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyGPSmsg__ros_msg_type * ros_message = static_cast<const _MyGPSmsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gps
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gps.size + 1);
  // field.name nmea
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->nmea.size + 1);
  // field.name msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg.size + 1);
  // field.name iqual
  {
    size_t item_size = sizeof(ros_message->iqual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qual
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->qual.size + 1);
  // field.name date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->date.size + 1);
  // field.name time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time.size + 1);
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt
  {
    size_t item_size = sizeof(ros_message->alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geoid
  {
    size_t item_size = sizeof(ros_message->geoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name course
  {
    size_t item_size = sizeof(ros_message->course);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MyGPSmsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__msg__MyGPSmsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__msg__MyGPSmsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gps
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: nmea
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: iqual
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: qual
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: geoid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: course
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MyGPSmsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__msg__MyGPSmsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MyGPSmsg = {
  "interfaces_subzero::msg",
  "MyGPSmsg",
  _MyGPSmsg__cdr_serialize,
  _MyGPSmsg__cdr_deserialize,
  _MyGPSmsg__get_serialized_size,
  _MyGPSmsg__max_serialized_size
};

static rosidl_message_type_support_t _MyGPSmsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyGPSmsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, msg, MyGPSmsg)() {
  return &_MyGPSmsg__type_support;
}

#if defined(__cplusplus)
}
#endif
