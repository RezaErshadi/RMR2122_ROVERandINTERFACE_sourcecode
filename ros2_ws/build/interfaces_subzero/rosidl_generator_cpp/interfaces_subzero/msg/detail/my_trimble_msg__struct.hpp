// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:msg/MyTrimbleMsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__STRUCT_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__msg__MyTrimbleMsg __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__msg__MyTrimbleMsg __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MyTrimbleMsg_
{
  using Type = MyTrimbleMsg_<ContainerAllocator>;

  explicit MyTrimbleMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_connection = false;
      this->gps_data = false;
      this->age = 0.0;
      this->gga_msg = "";
      this->gga_time = "";
      this->rover_lat = 0.0;
      this->rover_lon = 0.0;
      this->rover_alt = 0.0;
      this->rover_geoid = 0.0;
      this->rmc_msg = "";
      this->rmc_time = "";
      this->rover_date = "";
      this->rover_speed = 0.0;
      this->rover_course = 0.0;
      this->gps_tel = "";
    }
  }

  explicit MyTrimbleMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gga_msg(_alloc),
    gga_time(_alloc),
    rmc_msg(_alloc),
    rmc_time(_alloc),
    rover_date(_alloc),
    gps_tel(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gps_connection = false;
      this->gps_data = false;
      this->age = 0.0;
      this->gga_msg = "";
      this->gga_time = "";
      this->rover_lat = 0.0;
      this->rover_lon = 0.0;
      this->rover_alt = 0.0;
      this->rover_geoid = 0.0;
      this->rmc_msg = "";
      this->rmc_time = "";
      this->rover_date = "";
      this->rover_speed = 0.0;
      this->rover_course = 0.0;
      this->gps_tel = "";
    }
  }

  // field types and members
  using _gps_connection_type =
    bool;
  _gps_connection_type gps_connection;
  using _gps_data_type =
    bool;
  _gps_data_type gps_data;
  using _age_type =
    double;
  _age_type age;
  using _gga_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gga_msg_type gga_msg;
  using _gga_time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gga_time_type gga_time;
  using _rover_lat_type =
    double;
  _rover_lat_type rover_lat;
  using _rover_lon_type =
    double;
  _rover_lon_type rover_lon;
  using _rover_alt_type =
    double;
  _rover_alt_type rover_alt;
  using _rover_geoid_type =
    double;
  _rover_geoid_type rover_geoid;
  using _rmc_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rmc_msg_type rmc_msg;
  using _rmc_time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rmc_time_type rmc_time;
  using _rover_date_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rover_date_type rover_date;
  using _rover_speed_type =
    double;
  _rover_speed_type rover_speed;
  using _rover_course_type =
    double;
  _rover_course_type rover_course;
  using _gps_tel_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gps_tel_type gps_tel;

  // setters for named parameter idiom
  Type & set__gps_connection(
    const bool & _arg)
  {
    this->gps_connection = _arg;
    return *this;
  }
  Type & set__gps_data(
    const bool & _arg)
  {
    this->gps_data = _arg;
    return *this;
  }
  Type & set__age(
    const double & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__gga_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gga_msg = _arg;
    return *this;
  }
  Type & set__gga_time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gga_time = _arg;
    return *this;
  }
  Type & set__rover_lat(
    const double & _arg)
  {
    this->rover_lat = _arg;
    return *this;
  }
  Type & set__rover_lon(
    const double & _arg)
  {
    this->rover_lon = _arg;
    return *this;
  }
  Type & set__rover_alt(
    const double & _arg)
  {
    this->rover_alt = _arg;
    return *this;
  }
  Type & set__rover_geoid(
    const double & _arg)
  {
    this->rover_geoid = _arg;
    return *this;
  }
  Type & set__rmc_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rmc_msg = _arg;
    return *this;
  }
  Type & set__rmc_time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rmc_time = _arg;
    return *this;
  }
  Type & set__rover_date(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rover_date = _arg;
    return *this;
  }
  Type & set__rover_speed(
    const double & _arg)
  {
    this->rover_speed = _arg;
    return *this;
  }
  Type & set__rover_course(
    const double & _arg)
  {
    this->rover_course = _arg;
    return *this;
  }
  Type & set__gps_tel(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gps_tel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__msg__MyTrimbleMsg
    std::shared_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__msg__MyTrimbleMsg
    std::shared_ptr<interfaces_subzero::msg::MyTrimbleMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyTrimbleMsg_ & other) const
  {
    if (this->gps_connection != other.gps_connection) {
      return false;
    }
    if (this->gps_data != other.gps_data) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->gga_msg != other.gga_msg) {
      return false;
    }
    if (this->gga_time != other.gga_time) {
      return false;
    }
    if (this->rover_lat != other.rover_lat) {
      return false;
    }
    if (this->rover_lon != other.rover_lon) {
      return false;
    }
    if (this->rover_alt != other.rover_alt) {
      return false;
    }
    if (this->rover_geoid != other.rover_geoid) {
      return false;
    }
    if (this->rmc_msg != other.rmc_msg) {
      return false;
    }
    if (this->rmc_time != other.rmc_time) {
      return false;
    }
    if (this->rover_date != other.rover_date) {
      return false;
    }
    if (this->rover_speed != other.rover_speed) {
      return false;
    }
    if (this->rover_course != other.rover_course) {
      return false;
    }
    if (this->gps_tel != other.gps_tel) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyTrimbleMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyTrimbleMsg_

// alias to use template instance with default allocator
using MyTrimbleMsg =
  interfaces_subzero::msg::MyTrimbleMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__MY_TRIMBLE_MSG__STRUCT_HPP_
