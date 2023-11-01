// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:msg/MyGarminMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__BUILDER_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__BUILDER_HPP_

#include "interfaces_subzero/msg/detail/my_garmin_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace msg
{

namespace builder
{

class Init_MyGarminMsg_gps_for_radio
{
public:
  explicit Init_MyGarminMsg_gps_for_radio(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::msg::MyGarminMsg gps_for_radio(::interfaces_subzero::msg::MyGarminMsg::_gps_for_radio_type arg)
  {
    msg_.gps_for_radio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_gps_for_arduino
{
public:
  explicit Init_MyGarminMsg_gps_for_arduino(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_gps_for_radio gps_for_arduino(::interfaces_subzero::msg::MyGarminMsg::_gps_for_arduino_type arg)
  {
    msg_.gps_for_arduino = std::move(arg);
    return Init_MyGarminMsg_gps_for_radio(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_course
{
public:
  explicit Init_MyGarminMsg_rover_course(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_gps_for_arduino rover_course(::interfaces_subzero::msg::MyGarminMsg::_rover_course_type arg)
  {
    msg_.rover_course = std::move(arg);
    return Init_MyGarminMsg_gps_for_arduino(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_speed
{
public:
  explicit Init_MyGarminMsg_rover_speed(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_course rover_speed(::interfaces_subzero::msg::MyGarminMsg::_rover_speed_type arg)
  {
    msg_.rover_speed = std::move(arg);
    return Init_MyGarminMsg_rover_course(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_date
{
public:
  explicit Init_MyGarminMsg_rover_date(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_speed rover_date(::interfaces_subzero::msg::MyGarminMsg::_rover_date_type arg)
  {
    msg_.rover_date = std::move(arg);
    return Init_MyGarminMsg_rover_speed(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rmc_time
{
public:
  explicit Init_MyGarminMsg_rmc_time(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_date rmc_time(::interfaces_subzero::msg::MyGarminMsg::_rmc_time_type arg)
  {
    msg_.rmc_time = std::move(arg);
    return Init_MyGarminMsg_rover_date(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rmc_msg
{
public:
  explicit Init_MyGarminMsg_rmc_msg(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rmc_time rmc_msg(::interfaces_subzero::msg::MyGarminMsg::_rmc_msg_type arg)
  {
    msg_.rmc_msg = std::move(arg);
    return Init_MyGarminMsg_rmc_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_geoid
{
public:
  explicit Init_MyGarminMsg_rover_geoid(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rmc_msg rover_geoid(::interfaces_subzero::msg::MyGarminMsg::_rover_geoid_type arg)
  {
    msg_.rover_geoid = std::move(arg);
    return Init_MyGarminMsg_rmc_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_alt
{
public:
  explicit Init_MyGarminMsg_rover_alt(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_geoid rover_alt(::interfaces_subzero::msg::MyGarminMsg::_rover_alt_type arg)
  {
    msg_.rover_alt = std::move(arg);
    return Init_MyGarminMsg_rover_geoid(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_lon
{
public:
  explicit Init_MyGarminMsg_rover_lon(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_alt rover_lon(::interfaces_subzero::msg::MyGarminMsg::_rover_lon_type arg)
  {
    msg_.rover_lon = std::move(arg);
    return Init_MyGarminMsg_rover_alt(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_rover_lat
{
public:
  explicit Init_MyGarminMsg_rover_lat(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_lon rover_lat(::interfaces_subzero::msg::MyGarminMsg::_rover_lat_type arg)
  {
    msg_.rover_lat = std::move(arg);
    return Init_MyGarminMsg_rover_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_gga_time
{
public:
  explicit Init_MyGarminMsg_gga_time(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_rover_lat gga_time(::interfaces_subzero::msg::MyGarminMsg::_gga_time_type arg)
  {
    msg_.gga_time = std::move(arg);
    return Init_MyGarminMsg_rover_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_gga_msg
{
public:
  explicit Init_MyGarminMsg_gga_msg(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_gga_time gga_msg(::interfaces_subzero::msg::MyGarminMsg::_gga_msg_type arg)
  {
    msg_.gga_msg = std::move(arg);
    return Init_MyGarminMsg_gga_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_base_eht
{
public:
  explicit Init_MyGarminMsg_base_eht(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_gga_msg base_eht(::interfaces_subzero::msg::MyGarminMsg::_base_eht_type arg)
  {
    msg_.base_eht = std::move(arg);
    return Init_MyGarminMsg_gga_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_base_lon
{
public:
  explicit Init_MyGarminMsg_base_lon(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_base_eht base_lon(::interfaces_subzero::msg::MyGarminMsg::_base_lon_type arg)
  {
    msg_.base_lon = std::move(arg);
    return Init_MyGarminMsg_base_eht(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_base_lat
{
public:
  explicit Init_MyGarminMsg_base_lat(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_base_lon base_lat(::interfaces_subzero::msg::MyGarminMsg::_base_lat_type arg)
  {
    msg_.base_lat = std::move(arg);
    return Init_MyGarminMsg_base_lon(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_bpq_time
{
public:
  explicit Init_MyGarminMsg_bpq_time(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_base_lat bpq_time(::interfaces_subzero::msg::MyGarminMsg::_bpq_time_type arg)
  {
    msg_.bpq_time = std::move(arg);
    return Init_MyGarminMsg_base_lat(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_bpq_msg
{
public:
  explicit Init_MyGarminMsg_bpq_msg(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_bpq_time bpq_msg(::interfaces_subzero::msg::MyGarminMsg::_bpq_msg_type arg)
  {
    msg_.bpq_msg = std::move(arg);
    return Init_MyGarminMsg_bpq_time(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_age
{
public:
  explicit Init_MyGarminMsg_age(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_bpq_msg age(::interfaces_subzero::msg::MyGarminMsg::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_MyGarminMsg_bpq_msg(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_gps_data
{
public:
  explicit Init_MyGarminMsg_gps_data(::interfaces_subzero::msg::MyGarminMsg & msg)
  : msg_(msg)
  {}
  Init_MyGarminMsg_age gps_data(::interfaces_subzero::msg::MyGarminMsg::_gps_data_type arg)
  {
    msg_.gps_data = std::move(arg);
    return Init_MyGarminMsg_age(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

class Init_MyGarminMsg_gps_connection
{
public:
  Init_MyGarminMsg_gps_connection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyGarminMsg_gps_data gps_connection(::interfaces_subzero::msg::MyGarminMsg::_gps_connection_type arg)
  {
    msg_.gps_connection = std::move(arg);
    return Init_MyGarminMsg_gps_data(msg_);
  }

private:
  ::interfaces_subzero::msg::MyGarminMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::msg::MyGarminMsg>()
{
  return interfaces_subzero::msg::builder::Init_MyGarminMsg_gps_connection();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_GARMIN_MSG__BUILDER_HPP_
