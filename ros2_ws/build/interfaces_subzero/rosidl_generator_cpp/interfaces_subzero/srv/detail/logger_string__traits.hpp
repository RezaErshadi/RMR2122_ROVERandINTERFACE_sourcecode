// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_subzero:srv/LoggerString.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__TRAITS_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__TRAITS_HPP_

#include "interfaces_subzero/srv/detail/logger_string__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::LoggerString_Request>()
{
  return "interfaces_subzero::srv::LoggerString_Request";
}

template<>
inline const char * name<interfaces_subzero::srv::LoggerString_Request>()
{
  return "interfaces_subzero/srv/LoggerString_Request";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::LoggerString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_subzero::srv::LoggerString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_subzero::srv::LoggerString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::LoggerString_Response>()
{
  return "interfaces_subzero::srv::LoggerString_Response";
}

template<>
inline const char * name<interfaces_subzero::srv::LoggerString_Response>()
{
  return "interfaces_subzero/srv/LoggerString_Response";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::LoggerString_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_subzero::srv::LoggerString_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_subzero::srv::LoggerString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_subzero::srv::LoggerString>()
{
  return "interfaces_subzero::srv::LoggerString";
}

template<>
inline const char * name<interfaces_subzero::srv::LoggerString>()
{
  return "interfaces_subzero/srv/LoggerString";
}

template<>
struct has_fixed_size<interfaces_subzero::srv::LoggerString>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_subzero::srv::LoggerString_Request>::value &&
    has_fixed_size<interfaces_subzero::srv::LoggerString_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_subzero::srv::LoggerString>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_subzero::srv::LoggerString_Request>::value &&
    has_bounded_size<interfaces_subzero::srv::LoggerString_Response>::value
  >
{
};

template<>
struct is_service<interfaces_subzero::srv::LoggerString>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_subzero::srv::LoggerString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_subzero::srv::LoggerString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__TRAITS_HPP_
