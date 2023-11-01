// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:msg/MyGPSmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__BUILDER_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__BUILDER_HPP_

#include "interfaces_subzero/msg/detail/my_gp_smsg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace msg
{

namespace builder
{

class Init_MyGPSmsg_course
{
public:
  explicit Init_MyGPSmsg_course(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::msg::MyGPSmsg course(::interfaces_subzero::msg::MyGPSmsg::_course_type arg)
  {
    msg_.course = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_speed
{
public:
  explicit Init_MyGPSmsg_speed(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_course speed(::interfaces_subzero::msg::MyGPSmsg::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MyGPSmsg_course(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_geoid
{
public:
  explicit Init_MyGPSmsg_geoid(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_speed geoid(::interfaces_subzero::msg::MyGPSmsg::_geoid_type arg)
  {
    msg_.geoid = std::move(arg);
    return Init_MyGPSmsg_speed(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_alt
{
public:
  explicit Init_MyGPSmsg_alt(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_geoid alt(::interfaces_subzero::msg::MyGPSmsg::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_MyGPSmsg_geoid(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_lon
{
public:
  explicit Init_MyGPSmsg_lon(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_alt lon(::interfaces_subzero::msg::MyGPSmsg::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_MyGPSmsg_alt(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_lat
{
public:
  explicit Init_MyGPSmsg_lat(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_lon lat(::interfaces_subzero::msg::MyGPSmsg::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_MyGPSmsg_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_time
{
public:
  explicit Init_MyGPSmsg_time(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_lat time(::interfaces_subzero::msg::MyGPSmsg::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_MyGPSmsg_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_date
{
public:
  explicit Init_MyGPSmsg_date(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_time date(::interfaces_subzero::msg::MyGPSmsg::_date_type arg)
  {
    msg_.date = std::move(arg);
    return Init_MyGPSmsg_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_qual
{
public:
  explicit Init_MyGPSmsg_qual(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_date qual(::interfaces_subzero::msg::MyGPSmsg::_qual_type arg)
  {
    msg_.qual = std::move(arg);
    return Init_MyGPSmsg_date(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_iqual
{
public:
  explicit Init_MyGPSmsg_iqual(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_qual iqual(::interfaces_subzero::msg::MyGPSmsg::_iqual_type arg)
  {
    msg_.iqual = std::move(arg);
    return Init_MyGPSmsg_qual(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_msg
{
public:
  explicit Init_MyGPSmsg_msg(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_iqual msg(::interfaces_subzero::msg::MyGPSmsg::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_MyGPSmsg_iqual(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_nmea
{
public:
  explicit Init_MyGPSmsg_nmea(::interfaces_subzero::msg::MyGPSmsg & msg)
  : msg_(msg)
  {}
  Init_MyGPSmsg_msg nmea(::interfaces_subzero::msg::MyGPSmsg::_nmea_type arg)
  {
    msg_.nmea = std::move(arg);
    return Init_MyGPSmsg_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

class Init_MyGPSmsg_gps
{
public:
  Init_MyGPSmsg_gps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyGPSmsg_nmea gps(::interfaces_subzero::msg::MyGPSmsg::_gps_type arg)
  {
    msg_.gps = std::move(arg);
    return Init_MyGPSmsg_nmea(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGPSmsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::msg::MyGPSmsg>()
{
  return interfaces_subzero::msg::builder::Init_MyGPSmsg_gps();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_GP_SMSG__BUILDER_HPP_
