// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:srv/SendString.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__SEND_STRING__BUILDER_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__SEND_STRING__BUILDER_HPP_

#include "interfaces_subzero/srv/detail/send_string__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_SendString_Request_data
{
public:
  Init_SendString_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::SendString_Request data(::interfaces_subzero::srv::SendString_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::SendString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::SendString_Request>()
{
  return interfaces_subzero::srv::builder::Init_SendString_Request_data();
}

}  // namespace interfaces_subzero


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_SendString_Response_msg_sent
{
public:
  Init_SendString_Response_msg_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::SendString_Response msg_sent(::interfaces_subzero::srv::SendString_Response::_msg_sent_type arg)
  {
    msg_.msg_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::SendString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::SendString_Response>()
{
  return interfaces_subzero::srv::builder::Init_SendString_Response_msg_sent();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__SEND_STRING__BUILDER_HPP_
