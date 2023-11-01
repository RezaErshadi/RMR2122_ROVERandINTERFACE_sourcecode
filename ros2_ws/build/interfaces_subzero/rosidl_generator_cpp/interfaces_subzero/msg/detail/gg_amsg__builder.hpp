// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:msg/GGAmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__BUILDER_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__BUILDER_HPP_

#include "interfaces_subzero/msg/detail/gg_amsg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace msg
{

namespace builder
{

class Init_GGAmsg_geoid
{
public:
  explicit Init_GGAmsg_geoid(::interfaces_subzero::msg::GGAmsg & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::msg::GGAmsg geoid(::interfaces_subzero::msg::GGAmsg::_geoid_type arg)
  {
    msg_.geoid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

class Init_GGAmsg_alt
{
public:
  explicit Init_GGAmsg_alt(::interfaces_subzero::msg::GGAmsg & msg)
  : msg_(msg)
  {}
  Init_GGAmsg_geoid alt(::interfaces_subzero::msg::GGAmsg::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_GGAmsg_geoid(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

class Init_GGAmsg_lon
{
public:
  explicit Init_GGAmsg_lon(::interfaces_subzero::msg::GGAmsg & msg)
  : msg_(msg)
  {}
  Init_GGAmsg_alt lon(::interfaces_subzero::msg::GGAmsg::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_GGAmsg_alt(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

class Init_GGAmsg_lat
{
public:
  explicit Init_GGAmsg_lat(::interfaces_subzero::msg::GGAmsg & msg)
  : msg_(msg)
  {}
  Init_GGAmsg_lon lat(::interfaces_subzero::msg::GGAmsg::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GGAmsg_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

class Init_GGAmsg_time
{
public:
  explicit Init_GGAmsg_time(::interfaces_subzero::msg::GGAmsg & msg)
  : msg_(msg)
  {}
  Init_GGAmsg_lat time(::interfaces_subzero::msg::GGAmsg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_GGAmsg_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

class Init_GGAmsg_msg
{
public:
  Init_GGAmsg_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GGAmsg_time msg(::interfaces_subzero::msg::GGAmsg::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_GGAmsg_time(msg_);
  }

private:
  ::interfaces_subzero::msg::GGAmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::msg::GGAmsg>()
{
  return interfaces_subzero::msg::builder::Init_GGAmsg_msg();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__GG_AMSG__BUILDER_HPP_
