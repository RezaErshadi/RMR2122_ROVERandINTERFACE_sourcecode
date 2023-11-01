// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_subzero:msg/Telemetrymsg.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/msg/detail/telemetrymsg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_subzero/msg/detail/telemetrymsg__struct.hpp"

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
  const interfaces_subzero::msg::Telemetrymsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_subzero::msg::Telemetrymsg & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
get_serialized_size(
  const interfaces_subzero::msg::Telemetrymsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_subzero
max_serialized_size_Telemetrymsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Telemetrymsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_subzero::msg::Telemetrymsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Telemetrymsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_subzero::msg::Telemetrymsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Telemetrymsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_subzero::msg::Telemetrymsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Telemetrymsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Telemetrymsg(full_bounded, 0);
}

static message_type_support_callbacks_t _Telemetrymsg__callbacks = {
  "interfaces_subzero::msg",
  "Telemetrymsg",
  _Telemetrymsg__cdr_serialize,
  _Telemetrymsg__cdr_deserialize,
  _Telemetrymsg__get_serialized_size,
  _Telemetrymsg__max_serialized_size
};

static rosidl_message_type_support_t _Telemetrymsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Telemetrymsg__callbacks,
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
get_message_type_support_handle<interfaces_subzero::msg::Telemetrymsg>()
{
  return &interfaces_subzero::msg::typesupport_fastrtps_cpp::_Telemetrymsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_subzero, msg, Telemetrymsg)() {
  return &interfaces_subzero::msg::typesupport_fastrtps_cpp::_Telemetrymsg__handle;
}

#ifdef __cplusplus
}
#endif
