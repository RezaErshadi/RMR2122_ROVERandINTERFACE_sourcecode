// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_subzero:srv/NextTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__TRAITS_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__TRAITS_HPP_

#include "interfaces_subzero/srv/detail/next_target__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::NextTarget_Request>()
{
  return "interfaces_subzero::srv::NextTarget_Request";
}

template<>
inline const char * name<interfaces_subzero::srv::NextTarget_Request>()
{
  return "interfaces_subzero/srv/NextTarget_Request";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::NextTarget_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_subzero::srv::NextTarget_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_subzero::srv::NextTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::NextTarget_Response>()
{
  return "interfaces_subzero::srv::NextTarget_Response";
}

template<>
inline const char * name<interfaces_subzero::srv::NextTarget_Response>()
{
  return "interfaces_subzero/srv/NextTarget_Response";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::NextTarget_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_subzero::srv::NextTarget_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_subzero::srv::NextTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::NextTarget>()
{
  return "interfaces_subzero::srv::NextTarget";
}

template<>
inline const char * name<interfaces_subzero::srv::NextTarget>()
{
  return "interfaces_subzero/srv/NextTarget";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::NextTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_subzero::srv::NextTarget_Request>::value &&
    has_fixed_size<interfaces_subzero::srv::NextTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_subzero::srv::NextTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_subzero::srv::NextTarget_Request>::value &&
    has_bounded_size<interfaces_subzero::srv::NextTarget_Response>::value
  >
{
};

template<>
struct is_service<interfaces_subzero::srv::NextTarget>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_subzero::srv::NextTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_subzero::srv::NextTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__TRAITS_HPP_
