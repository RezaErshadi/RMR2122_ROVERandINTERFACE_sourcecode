// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:msg/RMCmsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__msg__RMCmsg __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__msg__RMCmsg __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RMCmsg_
{
  using Type = RMCmsg_<ContainerAllocator>;

  explicit RMCmsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
      this->time = "";
      this->date = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->speed = 0.0;
      this->course = 0.0;
    }
  }

  explicit RMCmsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc),
    time(_alloc),
    date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
      this->time = "";
      this->date = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->speed = 0.0;
      this->course = 0.0;
    }
  }

  // field types and members
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _msg_type msg;
  using _time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _time_type time;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _date_type date;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _speed_type =
    double;
  _speed_type speed;
  using _course_type =
    double;
  _course_type course;

  // setters for named parameter idiom
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__course(
    const double & _arg)
  {
    this->course = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::msg::RMCmsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::msg::RMCmsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::RMCmsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::RMCmsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__msg__RMCmsg
    std::shared_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__msg__RMCmsg
    std::shared_ptr<interfaces_subzero::msg::RMCmsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RMCmsg_ & other) const
  {
    if (this->msg != other.msg) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->course != other.course) {
      return false;
    }
    return true;
  }
  bool operator!=(const RMCmsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RMCmsg_

// alias to use template instance with default allocator
using RMCmsg =
  interfaces_subzero::msg::RMCmsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__RM_CMSG__STRUCT_HPP_
