// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:srv/NextTarget.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__STRUCT_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__NextTarget_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__NextTarget_Request __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NextTarget_Request_
{
  using Type = NextTarget_Request_<ContainerAllocator>;

  explicit NextTarget_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i_next_target = 0ll;
      this->next_target_lat = 0.0;
      this->next_target_lon = 0.0;
      this->bearing_to_next_target = 0.0;
      this->dist_to_next_target = 0.0;
      this->dist_from_last_ref = 0.0;
    }
  }

  explicit NextTarget_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->i_next_target = 0ll;
      this->next_target_lat = 0.0;
      this->next_target_lon = 0.0;
      this->bearing_to_next_target = 0.0;
      this->dist_to_next_target = 0.0;
      this->dist_from_last_ref = 0.0;
    }
  }

  // field types and members
  using _i_next_target_type =
    int64_t;
  _i_next_target_type i_next_target;
  using _next_target_lat_type =
    double;
  _next_target_lat_type next_target_lat;
  using _next_target_lon_type =
    double;
  _next_target_lon_type next_target_lon;
  using _bearing_to_next_target_type =
    double;
  _bearing_to_next_target_type bearing_to_next_target;
  using _dist_to_next_target_type =
    double;
  _dist_to_next_target_type dist_to_next_target;
  using _dist_from_last_ref_type =
    double;
  _dist_from_last_ref_type dist_from_last_ref;

  // setters for named parameter idiom
  Type & set__i_next_target(
    const int64_t & _arg)
  {
    this->i_next_target = _arg;
    return *this;
  }
  Type & set__next_target_lat(
    const double & _arg)
  {
    this->next_target_lat = _arg;
    return *this;
  }
  Type & set__next_target_lon(
    const double & _arg)
  {
    this->next_target_lon = _arg;
    return *this;
  }
  Type & set__bearing_to_next_target(
    const double & _arg)
  {
    this->bearing_to_next_target = _arg;
    return *this;
  }
  Type & set__dist_to_next_target(
    const double & _arg)
  {
    this->dist_to_next_target = _arg;
    return *this;
  }
  Type & set__dist_from_last_ref(
    const double & _arg)
  {
    this->dist_from_last_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__NextTarget_Request
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__NextTarget_Request
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NextTarget_Request_ & other) const
  {
    if (this->i_next_target != other.i_next_target) {
      return false;
    }
    if (this->next_target_lat != other.next_target_lat) {
      return false;
    }
    if (this->next_target_lon != other.next_target_lon) {
      return false;
    }
    if (this->bearing_to_next_target != other.bearing_to_next_target) {
      return false;
    }
    if (this->dist_to_next_target != other.dist_to_next_target) {
      return false;
    }
    if (this->dist_from_last_ref != other.dist_from_last_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const NextTarget_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NextTarget_Request_

// alias to use template instance with default allocator
using NextTarget_Request =
  interfaces_subzero::srv::NextTarget_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__NextTarget_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__NextTarget_Response __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NextTarget_Response_
{
  using Type = NextTarget_Response_<ContainerAllocator>;

  explicit NextTarget_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_sent = false;
    }
  }

  explicit NextTarget_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_sent = false;
    }
  }

  // field types and members
  using _msg_sent_type =
    bool;
  _msg_sent_type msg_sent;

  // setters for named parameter idiom
  Type & set__msg_sent(
    const bool & _arg)
  {
    this->msg_sent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__NextTarget_Response
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__NextTarget_Response
    std::shared_ptr<interfaces_subzero::srv::NextTarget_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NextTarget_Response_ & other) const
  {
    if (this->msg_sent != other.msg_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const NextTarget_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NextTarget_Response_

// alias to use template instance with default allocator
using NextTarget_Response =
  interfaces_subzero::srv::NextTarget_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero

namespace interfaces_subzero
{

namespace srv
{

struct NextTarget
{
  using Request = interfaces_subzero::srv::NextTarget_Request;
  using Response = interfaces_subzero::srv::NextTarget_Response;
};

}  // namespace srv

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__NEXT_TARGET__STRUCT_HPP_
