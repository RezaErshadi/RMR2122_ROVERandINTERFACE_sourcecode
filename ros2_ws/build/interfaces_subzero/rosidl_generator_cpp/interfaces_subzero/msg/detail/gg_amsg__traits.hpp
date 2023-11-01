// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_subzero:msg/GGAmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__TRAITS_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__TRAITS_HPP_

#include "interfaces_subzero/msg/detail/gg_amsg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::msg::GGAmsg>()
{
  return "interfaces_subzero::msg::GGAmsg";
}

template<>
inline const char * name<interfaces_subzero::msg::GGAmsg>()
{
  return "interfaces_subzero/msg/GGAmsg";
}

template<>
struct has_fixed_size<interfaces_subzero::msg::GGAmsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_subzero::msg::GGAmsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_subzero::msg::GGAmsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__TRAITS_HPP_
