// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_subzero:msg/MyGarminMsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/my_garmin_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_subzero/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_subzero/msg/detail/my_garmin_msg__struct.h"
#include "interfaces_subzero/msg/detail/my_garmin_msg__functions.h"
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

#include "rosidl_runtime_c/string.h"  // bpq_msg, bpq_time, gga_msg, gga_time, gps_for_arduino, gps_for_radio, rmc_msg, rmc_time, rover_date
#include "rosidl_runtime_c/string_functions.h"  // bpq_msg, bpq_time, gga_msg, gga_time, gps_for_arduino, gps_for_radio, rmc_msg, rmc_time, rover_date

// forward declare type support functions


using _MyGarminMsg__ros_msg_type = interfaces_subzero__msg__MyGarminMsg;

static bool _MyGarminMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MyGarminMsg__ros_msg_type * ros_message = static_cast<const _MyGarminMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: gps_connection
  {
    cdr << (ros_message->gps_connection ? true : false);
  }

  // Field name: gps_data
  {
    cdr << (ros_message->gps_data ? true : false);
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: bpq_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->bpq_msg;
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

  // Field name: bpq_time
  {
    const rosidl_runtime_c__String * str = &ros_message->bpq_time;
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

  // Field name: base_lat
  {
    cdr << ros_message->base_lat;
  }

  // Field name: base_lon
  {
    cdr << ros_message->base_lon;
  }

  // Field name: base_eht
  {
    cdr << ros_message->base_eht;
  }

  // Field name: gga_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->gga_msg;
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

  // Field name: gga_time
  {
    const rosidl_runtime_c__String * str = &ros_message->gga_time;
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

  // Field name: rover_lat
  {
    cdr << ros_message->rover_lat;
  }

  // Field name: rover_lon
  {
    cdr << ros_message->rover_lon;
  }

  // Field name: rover_alt
  {
    cdr << ros_message->rover_alt;
  }

  // Field name: rover_geoid
  {
    cdr << ros_message->rover_geoid;
  }

  // Field name: rmc_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->rmc_msg;
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

  // Field name: rmc_time
  {
    const rosidl_runtime_c__String * str = &ros_message->rmc_time;
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

  // Field name: rover_date
  {
    const rosidl_runtime_c__String * str = &ros_message->rover_date;
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

  // Field name: rover_speed
  {
    cdr << ros_message->rover_speed;
  }

  // Field name: rover_course
  {
    cdr << ros_message->rover_course;
  }

  // Field name: gps_for_arduino
  {
    const rosidl_runtime_c__String * str = &ros_message->gps_for_arduino;
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

  // Field name: gps_for_radio
  {
    const rosidl_runtime_c__String * str = &ros_message->gps_for_radio;
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

static bool _MyGarminMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MyGarminMsg__ros_msg_type * ros_message = static_cast<_MyGarminMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: gps_connection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_connection = tmp ? true : false;
  }

  // Field name: gps_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_data = tmp ? true : false;
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: bpq_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bpq_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->bpq_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bpq_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bpq_msg'\n");
      return false;
    }
  }

  // Field name: bpq_time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bpq_time.data) {
      rosidl_runtime_c__String__init(&ros_message->bpq_time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bpq_time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bpq_time'\n");
      return false;
    }
  }

  // Field name: base_lat
  {
    cdr >> ros_message->base_lat;
  }

  // Field name: base_lon
  {
    cdr >> ros_message->base_lon;
  }

  // Field name: base_eht
  {
    cdr >> ros_message->base_eht;
  }

  // Field name: gga_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gga_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->gga_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gga_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gga_msg'\n");
      return false;
    }
  }

  // Field name: gga_time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gga_time.data) {
      rosidl_runtime_c__String__init(&ros_message->gga_time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gga_time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gga_time'\n");
      return false;
    }
  }

  // Field name: rover_lat
  {
    cdr >> ros_message->rover_lat;
  }

  // Field name: rover_lon
  {
    cdr >> ros_message->rover_lon;
  }

  // Field name: rover_alt
  {
    cdr >> ros_message->rover_alt;
  }

  // Field name: rover_geoid
  {
    cdr >> ros_message->rover_geoid;
  }

  // Field name: rmc_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rmc_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->rmc_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rmc_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rmc_msg'\n");
      return false;
    }
  }

  // Field name: rmc_time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rmc_time.data) {
      rosidl_runtime_c__String__init(&ros_message->rmc_time);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rmc_time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rmc_time'\n");
      return false;
    }
  }

  // Field name: rover_date
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rover_date.data) {
      rosidl_runtime_c__String__init(&ros_message->rover_date);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rover_date,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rover_date'\n");
      return false;
    }
  }

  // Field name: rover_speed
  {
    cdr >> ros_message->rover_speed;
  }

  // Field name: rover_course
  {
    cdr >> ros_message->rover_course;
  }

  // Field name: gps_for_arduino
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gps_for_arduino.data) {
      rosidl_runtime_c__String__init(&ros_message->gps_for_arduino);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gps_for_arduino,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gps_for_arduino'\n");
      return false;
    }
  }

  // Field name: gps_for_radio
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gps_for_radio.data) {
      rosidl_runtime_c__String__init(&ros_message->gps_for_radio);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gps_for_radio,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gps_for_radio'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t get_serialized_size_interfaces_subzero__msg__MyGarminMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MyGarminMsg__ros_msg_type * ros_message = static_cast<const _MyGarminMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gps_connection
  {
    size_t item_size = sizeof(ros_message->gps_connection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_data
  {
    size_t item_size = sizeof(ros_message->gps_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bpq_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bpq_msg.size + 1);
  // field.name bpq_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bpq_time.size + 1);
  // field.name base_lat
  {
    size_t item_size = sizeof(ros_message->base_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_lon
  {
    size_t item_size = sizeof(ros_message->base_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_eht
  {
    size_t item_size = sizeof(ros_message->base_eht);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gga_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gga_msg.size + 1);
  // field.name gga_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gga_time.size + 1);
  // field.name rover_lat
  {
    size_t item_size = sizeof(ros_message->rover_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rover_lon
  {
    size_t item_size = sizeof(ros_message->rover_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rover_alt
  {
    size_t item_size = sizeof(ros_message->rover_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rover_geoid
  {
    size_t item_size = sizeof(ros_message->rover_geoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rmc_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rmc_msg.size + 1);
  // field.name rmc_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rmc_time.size + 1);
  // field.name rover_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rover_date.size + 1);
  // field.name rover_speed
  {
    size_t item_size = sizeof(ros_message->rover_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rover_course
  {
    size_t item_size = sizeof(ros_message->rover_course);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_for_arduino
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gps_for_arduino.size + 1);
  // field.name gps_for_radio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gps_for_radio.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MyGarminMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_subzero__msg__MyGarminMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_subzero
size_t max_serialized_size_interfaces_subzero__msg__MyGarminMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gps_connection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: bpq_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bpq_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: base_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: base_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: base_eht
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gga_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: gga_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rover_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rover_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rover_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rover_geoid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rmc_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rmc_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rover_date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: rover_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rover_course
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gps_for_arduino
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: gps_for_radio
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

static size_t _MyGarminMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces_subzero__msg__MyGarminMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MyGarminMsg = {
  "interfaces_subzero::msg",
  "MyGarminMsg",
  _MyGarminMsg__cdr_serialize,
  _MyGarminMsg__cdr_deserialize,
  _MyGarminMsg__get_serialized_size,
  _MyGarminMsg__max_serialized_size
};

static rosidl_message_type_support_t _MyGarminMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MyGarminMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_subzero, msg, MyGarminMsg)() {
  return &_MyGarminMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
