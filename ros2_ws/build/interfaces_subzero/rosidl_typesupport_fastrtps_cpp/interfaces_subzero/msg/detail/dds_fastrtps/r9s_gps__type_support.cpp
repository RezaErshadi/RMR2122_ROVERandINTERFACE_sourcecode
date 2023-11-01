// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_subzero:msg/R9sGPS.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/r9s_gps__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_subzero/msg/detail/r9s_gps__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interfaces_subzero
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
cdr_serialize(
  const interfaces_subzero::msg::R9sGPS & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gps_connection
  cdr << (ros_message.gps_connection ? true : false);
  // Member: gps_data
  cdr << (ros_message.gps_data ? true : false);
  // Member: age
  cdr << ros_message.age;
  // Member: bpq_msg
  cdr << ros_message.bpq_msg;
  // Member: bpq_time
  cdr << ros_message.bpq_time;
  // Member: base_lat
  cdr << ros_message.base_lat;
  // Member: base_lon
  cdr << ros_message.base_lon;
  // Member: base_eht
  cdr << ros_message.base_eht;
  // Member: gga_msg
  cdr << ros_message.gga_msg;
  // Member: gga_time
  cdr << ros_message.gga_time;
  // Member: rover_lat
  cdr << ros_message.rover_lat;
  // Member: rover_lon
  cdr << ros_message.rover_lon;
  // Member: rover_alt
  cdr << ros_message.rover_alt;
  // Member: rover_geoid
  cdr << ros_message.rover_geoid;
  // Member: rmc_msg
  cdr << ros_message.rmc_msg;
  // Member: rmc_time
  cdr << ros_message.rmc_time;
  // Member: rover_date
  cdr << ros_message.rover_date;
  // Member: rover_speed
  cdr << ros_message.rover_speed;
  // Member: rover_course
  cdr << ros_message.rover_course;
  // Member: gps_for_arduino
  cdr << ros_message.gps_for_arduino;
  // Member: gps_for_radio
  cdr << ros_message.gps_for_radio;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_subzero::msg::R9sGPS & ros_message)
{
  // Member: gps_connection
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_connection = tmp ? true : false;
  }

  // Member: gps_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_data = tmp ? true : false;
  }

  // Member: age
  cdr >> ros_message.age;

  // Member: bpq_msg
  cdr >> ros_message.bpq_msg;

  // Member: bpq_time
  cdr >> ros_message.bpq_time;

  // Member: base_lat
  cdr >> ros_message.base_lat;

  // Member: base_lon
  cdr >> ros_message.base_lon;

  // Member: base_eht
  cdr >> ros_message.base_eht;

  // Member: gga_msg
  cdr >> ros_message.gga_msg;

  // Member: gga_time
  cdr >> ros_message.gga_time;

  // Member: rover_lat
  cdr >> ros_message.rover_lat;

  // Member: rover_lon
  cdr >> ros_message.rover_lon;

  // Member: rover_alt
  cdr >> ros_message.rover_alt;

  // Member: rover_geoid
  cdr >> ros_message.rover_geoid;

  // Member: rmc_msg
  cdr >> ros_message.rmc_msg;

  // Member: rmc_time
  cdr >> ros_message.rmc_time;

  // Member: rover_date
  cdr >> ros_message.rover_date;

  // Member: rover_speed
  cdr >> ros_message.rover_speed;

  // Member: rover_course
  cdr >> ros_message.rover_course;

  // Member: gps_for_arduino
  cdr >> ros_message.gps_for_arduino;

  // Member: gps_for_radio
  cdr >> ros_message.gps_for_radio;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
get_serialized_size(
  const interfaces_subzero::msg::R9sGPS & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gps_connection
  {
    size_t item_size = sizeof(ros_message.gps_connection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_data
  {
    size_t item_size = sizeof(ros_message.gps_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bpq_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bpq_msg.size() + 1);
  // Member: bpq_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bpq_time.size() + 1);
  // Member: base_lat
  {
    size_t item_size = sizeof(ros_message.base_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_lon
  {
    size_t item_size = sizeof(ros_message.base_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_eht
  {
    size_t item_size = sizeof(ros_message.base_eht);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gga_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gga_msg.size() + 1);
  // Member: gga_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gga_time.size() + 1);
  // Member: rover_lat
  {
    size_t item_size = sizeof(ros_message.rover_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rover_lon
  {
    size_t item_size = sizeof(ros_message.rover_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rover_alt
  {
    size_t item_size = sizeof(ros_message.rover_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rover_geoid
  {
    size_t item_size = sizeof(ros_message.rover_geoid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rmc_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rmc_msg.size() + 1);
  // Member: rmc_time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rmc_time.size() + 1);
  // Member: rover_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.rover_date.size() + 1);
  // Member: rover_speed
  {
    size_t item_size = sizeof(ros_message.rover_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rover_course
  {
    size_t item_size = sizeof(ros_message.rover_course);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_for_arduino
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gps_for_arduino.size() + 1);
  // Member: gps_for_radio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gps_for_radio.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
max_serialized_size_R9sGPS(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: gps_connection
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bpq_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: bpq_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: base_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: base_eht
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gga_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gga_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rover_lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rover_lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rover_alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rover_geoid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rmc_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rmc_time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rover_date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: rover_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rover_course
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: gps_for_arduino
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gps_for_radio
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

static bool _R9sGPS__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_subzero::msg::R9sGPS *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _R9sGPS__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_subzero::msg::R9sGPS *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _R9sGPS__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_subzero::msg::R9sGPS *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _R9sGPS__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_R9sGPS(full_bounded, 0);
}

static message_type_support_callbacks_t _R9sGPS__callbacks = {
  "interfaces_subzero::msg",
  "R9sGPS",
  _R9sGPS__cdr_serialize,
  _R9sGPS__cdr_deserialize,
  _R9sGPS__get_serialized_size,
  _R9sGPS__max_serialized_size
};

static rosidl_message_type_support_t _R9sGPS__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_R9sGPS__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_subzero

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_subzero
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_subzero::msg::R9sGPS>()
{
  return &interfaces_subzero::msg::typesupport_fastrtps_cpp::_R9sGPS__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_subzero, msg, R9sGPS)() {
  return &interfaces_subzero::msg::typesupport_fastrtps_cpp::_R9sGPS__handle;
}

#ifdef __cplusplus
}
#endif