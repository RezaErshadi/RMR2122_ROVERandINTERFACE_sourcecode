// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:srv/SpeedValues.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__BUILDER_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__BUILDER_HPP_

#include "interfaces_subzero/srv/detail/speed_values__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_SpeedValues_Request_w_angular
{
public:
  explicit Init_SpeedValues_Request_w_angular(::interfaces_subzero::srv::SpeedValues_Request & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::srv::SpeedValues_Request w_angular(::interfaces_subzero::srv::SpeedValues_Request::_w_angular_type arg)
  {
    msg_.w_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::SpeedValues_Request msg_;
};

class Init_SpeedValues_Request_v_linear
{
public:
  Init_SpeedValues_Request_v_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedValues_Request_w_angular v_linear(::interfaces_subzero::srv::SpeedValues_Request::_v_linear_type arg)
  {
    msg_.v_linear = std::move(arg);
    return Init_SpeedValues_Request_w_angular(msg_);
  }

private:
  ::interfaces_subzero::srv::SpeedValues_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::SpeedValues_Request>()
{
  return interfaces_subzero::srv::builder::Init_SpeedValues_Request_v_linear();
}

}  // namespace interfaces_subzero


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_SpeedValues_Response_msg_sent
{
public:
  Init_SpeedValues_Response_msg_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::SpeedValues_Response msg_sent(::interfaces_subzero::srv::SpeedValues_Response::_msg_sent_type arg)
  {
    msg_.msg_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::SpeedValues_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::SpeedValues_Response>()
{
  return interfaces_subzero::srv::builder::Init_SpeedValues_Response_msg_sent();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__BUILDER_HPP_
