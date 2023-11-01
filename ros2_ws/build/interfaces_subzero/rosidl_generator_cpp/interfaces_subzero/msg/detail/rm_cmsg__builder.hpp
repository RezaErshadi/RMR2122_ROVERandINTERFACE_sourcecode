// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:msg/RMCmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__BUILDER_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__BUILDER_HPP_

#include "interfaces_subzero/msg/detail/rm_cmsg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace msg
{

namespace builder
{

class Init_RMCmsg_course
{
public:
  explicit Init_RMCmsg_course(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::msg::RMCmsg course(::interfaces_subzero::msg::RMCmsg::_course_type arg)
  {
    msg_.course = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_speed
{
public:
  explicit Init_RMCmsg_speed(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  Init_RMCmsg_course speed(::interfaces_subzero::msg::RMCmsg::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RMCmsg_course(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_lon
{
public:
  explicit Init_RMCmsg_lon(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  Init_RMCmsg_speed lon(::interfaces_subzero::msg::RMCmsg::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_RMCmsg_speed(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_lat
{
public:
  explicit Init_RMCmsg_lat(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  Init_RMCmsg_lon lat(::interfaces_subzero::msg::RMCmsg::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_RMCmsg_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_date
{
public:
  explicit Init_RMCmsg_date(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  Init_RMCmsg_lat date(::interfaces_subzero::msg::RMCmsg::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_RMCmsg_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_time
{
public:
  explicit Init_RMCmsg_time(::interfaces_subzero::msg::RMCmsg & msg)
  : msg_(msg)
  {}
  Init_RMCmsg_date time(::interfaces_subzero::msg::RMCmsg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_RMCmsg_date(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

class Init_RMCmsg_msg
{
public:
  Init_RMCmsg_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RMCmsg_time msg(::interfaces_subzero::msg::RMCmsg::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_RMCmsg_time(msg_);
  }

private:
  ::interfaces_subzero::msg::RMCmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::msg::RMCmsg>()
{
  return interfaces_subzero::msg::builder::Init_RMCmsg_msg();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__BUILDER_HPP_
