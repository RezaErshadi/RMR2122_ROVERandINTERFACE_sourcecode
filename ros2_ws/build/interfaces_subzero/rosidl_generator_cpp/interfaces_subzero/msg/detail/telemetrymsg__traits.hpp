// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_subzero:msg/Telemetrymsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__TRAITS_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__TRAITS_HPP_

#include "interfaces_subzero/msg/detail/telemetrymsg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::msg::Telemetrymsg>()
{
  return "interfaces_subzero::msg::Telemetrymsg";
}

template<>
inline const char * name<interfaces_subzero::msg::Telemetrymsg>()
{
  return "interfaces_subzero/msg/Telemetrymsg";
}

template<>
struct has_fixed_size<interfaces_subzero::msg::Telemetrymsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_subzero::msg::Telemetrymsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_subzero::msg::Telemetrymsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__TRAITS_HPP_
