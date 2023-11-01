// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:msg/MyTrimbleMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__BUILDER_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__BUILDER_HPP_

#include "interfaces_subzero/msg/detail/my_trimble_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace msg
{

namespace builder
{

class Init_MyTrimbleMsg_gps_tel
{
public:
  explicit Init_MyTrimbleMsg_gps_tel(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::msg::MyTrimbleMsg gps_tel(::interfaces_subzero::msg::MyTrimbleMsg::_gps_tel_type arg)
  {
    msg_.gps_tel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_course
{
public:
  explicit Init_MyTrimbleMsg_rover_course(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_gps_tel rover_course(::interfaces_subzero::msg::MyTrimbleMsg::_rover_course_type arg)
  {
    msg_.rover_course = std::move(arg);
    return Init_MyTrimbleMsg_gps_tel(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_speed
{
public:
  explicit Init_MyTrimbleMsg_rover_speed(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_course rover_speed(::interfaces_subzero::msg::MyTrimbleMsg::_rover_speed_type arg)
  {
    msg_.rover_speed = std::move(arg);
    return Init_MyTrimbleMsg_rover_course(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_date
{
public:
  explicit Init_MyTrimbleMsg_rover_date(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_speed rover_date(::interfaces_subzero::msg::MyTrimbleMsg::_rover_date_type arg)
  {
    msg_.rover_date = std::move(arg);
    return Init_MyTrimbleMsg_rover_speed(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rmc_time
{
public:
  explicit Init_MyTrimbleMsg_rmc_time(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_date rmc_time(::interfaces_subzero::msg::MyTrimbleMsg::_rmc_time_type arg)
  {
    msg_.rmc_time = std::move(arg);
    return Init_MyTrimbleMsg_rover_date(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rmc_msg
{
public:
  explicit Init_MyTrimbleMsg_rmc_msg(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rmc_time rmc_msg(::interfaces_subzero::msg::MyTrimbleMsg::_rmc_msg_type arg)
  {
    msg_.rmc_msg = std::move(arg);
    return Init_MyTrimbleMsg_rmc_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_geoid
{
public:
  explicit Init_MyTrimbleMsg_rover_geoid(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rmc_msg rover_geoid(::interfaces_subzero::msg::MyTrimbleMsg::_rover_geoid_type arg)
  {
    msg_.rover_geoid = std::move(arg);
    return Init_MyTrimbleMsg_rmc_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_alt
{
public:
  explicit Init_MyTrimbleMsg_rover_alt(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_geoid rover_alt(::interfaces_subzero::msg::MyTrimbleMsg::_rover_alt_type arg)
  {
    msg_.rover_alt = std::move(arg);
    return Init_MyTrimbleMsg_rover_geoid(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_lon
{
public:
  explicit Init_MyTrimbleMsg_rover_lon(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_alt rover_lon(::interfaces_subzero::msg::MyTrimbleMsg::_rover_lon_type arg)
  {
    msg_.rover_lon = std::move(arg);
    return Init_MyTrimbleMsg_rover_alt(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_rover_lat
{
public:
  explicit Init_MyTrimbleMsg_rover_lat(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_lon rover_lat(::interfaces_subzero::msg::MyTrimbleMsg::_rover_lat_type arg)
  {
    msg_.rover_lat = std::move(arg);
    return Init_MyTrimbleMsg_rover_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_gga_time
{
public:
  explicit Init_MyTrimbleMsg_gga_time(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_rover_lat gga_time(::interfaces_subzero::msg::MyTrimbleMsg::_gga_time_type arg)
  {
    msg_.gga_time = std::move(arg);
    return Init_MyTrimbleMsg_rover_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_gga_msg
{
public:
  explicit Init_MyTrimbleMsg_gga_msg(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_gga_time gga_msg(::interfaces_subzero::msg::MyTrimbleMsg::_gga_msg_type arg)
  {
    msg_.gga_msg = std::move(arg);
    return Init_MyTrimbleMsg_gga_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_age
{
public:
  explicit Init_MyTrimbleMsg_age(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_gga_msg age(::interfaces_subzero::msg::MyTrimbleMsg::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_MyTrimbleMsg_gga_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_gps_data
{
public:
  explicit Init_MyTrimbleMsg_gps_data(::interfaces_subzero::msg::MyTrimbleMsg & msg)
  : msg_(msg)
  {}
  Init_MyTrimbleMsg_age gps_data(::interfaces_subzero::msg::MyTrimbleMsg::_gps_data_type arg)
  {
    msg_.gps_data = std::move(arg);
    return Init_MyTrimbleMsg_age(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

class Init_MyTrimbleMsg_gps_connection
{
public:
  Init_MyTrimbleMsg_gps_connection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyTrimbleMsg_gps_data gps_connection(::interfaces_subzero::msg::MyTrimbleMsg::_gps_connection_type arg)
  {
    msg_.gps_connection = std::move(arg);
    return Init_MyTrimbleMsg_gps_data(msg_);
  }

private:
  ::interfaces_subzero::msg::MyTrimbleMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::msg::MyTrimbleMsg>()
{
  return interfaces_subzero::msg::builder::Init_MyTrimbleMsg_gps_connection();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__BUILDER_HPP_
