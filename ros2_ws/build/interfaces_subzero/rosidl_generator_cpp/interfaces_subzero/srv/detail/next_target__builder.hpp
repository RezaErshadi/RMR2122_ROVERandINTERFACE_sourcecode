// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:srv/NextTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__BUILDER_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__BUILDER_HPP_

#include "interfaces_subzero/srv/detail/next_target__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_NextTarget_Request_dist_from_last_ref
{
public:
  explicit Init_NextTarget_Request_dist_from_last_ref(::interfaces_subzero::srv::NextTarget_Request & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::srv::NextTarget_Request dist_from_last_ref(::interfaces_subzero::srv::NextTarget_Request::_dist_from_last_ref_type arg)
  {
    msg_.dist_from_last_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

class Init_NextTarget_Request_dist_to_next_target
{
public:
  explicit Init_NextTarget_Request_dist_to_next_target(::interfaces_subzero::srv::NextTarget_Request & msg)
  : msg_(msg)
  {}
  Init_NextTarget_Request_dist_from_last_ref dist_to_next_target(::interfaces_subzero::srv::NextTarget_Request::_dist_to_next_target_type arg)
  {
    msg_.dist_to_next_target = std::move(arg);
    return Init_NextTarget_Request_dist_from_last_ref(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

class Init_NextTarget_Request_bearing_to_next_target
{
public:
  explicit Init_NextTarget_Request_bearing_to_next_target(::interfaces_subzero::srv::NextTarget_Request & msg)
  : msg_(msg)
  {}
  Init_NextTarget_Request_dist_to_next_target bearing_to_next_target(::interfaces_subzero::srv::NextTarget_Request::_bearing_to_next_target_type arg)
  {
    msg_.bearing_to_next_target = std::move(arg);
    return Init_NextTarget_Request_dist_to_next_target(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

class Init_NextTarget_Request_next_target_lon
{
public:
  explicit Init_NextTarget_Request_next_target_lon(::interfaces_subzero::srv::NextTarget_Request & msg)
  : msg_(msg)
  {}
  Init_NextTarget_Request_bearing_to_next_target next_target_lon(::interfaces_subzero::srv::NextTarget_Request::_next_target_lon_type arg)
  {
    msg_.next_target_lon = std::move(arg);
    return Init_NextTarget_Request_bearing_to_next_target(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

class Init_NextTarget_Request_next_target_lat
{
public:
  explicit Init_NextTarget_Request_next_target_lat(::interfaces_subzero::srv::NextTarget_Request & msg)
  : msg_(msg)
  {}
  Init_NextTarget_Request_next_target_lon next_target_lat(::interfaces_subzero::srv::NextTarget_Request::_next_target_lat_type arg)
  {
    msg_.next_target_lat = std::move(arg);
    return Init_NextTarget_Request_next_target_lon(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

class Init_NextTarget_Request_i_next_target
{
public:
  Init_NextTarget_Request_i_next_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NextTarget_Request_next_target_lat i_next_target(::interfaces_subzero::srv::NextTarget_Request::_i_next_target_type arg)
  {
    msg_.i_next_target = std::move(arg);
    return Init_NextTarget_Request_next_target_lat(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::NextTarget_Request>()
{
  return interfaces_subzero::srv::builder::Init_NextTarget_Request_i_next_target();
}

}  // namespace interfaces_subzero


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_NextTarget_Response_msg_sent
{
public:
  Init_NextTarget_Response_msg_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::NextTarget_Response msg_sent(::interfaces_subzero::srv::NextTarget_Response::_msg_sent_type arg)
  {
    msg_.msg_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::NextTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::NextTarget_Response>()
{
  return interfaces_subzero::srv::builder::Init_NextTarget_Response_msg_sent();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__BUILDER_HPP_
