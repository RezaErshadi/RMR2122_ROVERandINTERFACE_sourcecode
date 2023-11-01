// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:srv/LoggerString.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__BUILDER_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__BUILDER_HPP_

#include "interfaces_subzero/srv/detail/logger_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_LoggerString_Request_data
{
public:
  explicit Init_LoggerString_Request_data(::interfaces_subzero::srv::LoggerString_Request & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::srv::LoggerString_Request data(::interfaces_subzero::srv::LoggerString_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::LoggerString_Request msg_;
};

class Init_LoggerString_Request_type
{
public:
  Init_LoggerString_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoggerString_Request_data type(::interfaces_subzero::srv::LoggerString_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_LoggerString_Request_data(msg_);
  }

private:
  ::interfaces_subzero::srv::LoggerString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::LoggerString_Request>()
{
  return interfaces_subzero::srv::builder::Init_LoggerString_Request_type();
}

}  // namespace interfaces_subzero


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_LoggerString_Response_msg_sent
{
public:
  Init_LoggerString_Response_msg_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::LoggerString_Response msg_sent(::interfaces_subzero::srv::LoggerString_Response::_msg_sent_type arg)
  {
    msg_.msg_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::LoggerString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::LoggerString_Response>()
{
  return interfaces_subzero::srv::builder::Init_LoggerString_Response_msg_sent();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__BUILDER_HPP_
