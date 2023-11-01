// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:srv/SpeedValues.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__SpeedValues_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__SpeedValues_Request __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeedValues_Request_
{
  using Type = SpeedValues_Request_<ContainerAllocator>;

  explicit SpeedValues_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_linear = 0.0;
      this->w_angular = 0.0;
    }
  }

  explicit SpeedValues_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_linear = 0.0;
      this->w_angular = 0.0;
    }
  }

  // field types and members
  using _v_linear_type =
    double;
  _v_linear_type v_linear;
  using _w_angular_type =
    double;
  _w_angular_type w_angular;

  // setters for named parameter idiom
  Type & set__v_linear(
    const double & _arg)
  {
    this->v_linear = _arg;
    return *this;
  }
  Type & set__w_angular(
    const double & _arg)
  {
    this->w_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__SpeedValues_Request
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__SpeedValues_Request
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedValues_Request_ & other) const
  {
    if (this->v_linear != other.v_linear) {
      return false;
    }
    if (this->w_angular != other.w_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedValues_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedValues_Request_

// alias to use template instance with default allocator
using SpeedValues_Request =
  interfaces_subzero::srv::SpeedValues_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__SpeedValues_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__SpeedValues_Response __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpeedValues_Response_
{
  using Type = SpeedValues_Response_<ContainerAllocator>;

  explicit SpeedValues_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_sent = false;
    }
  }

  explicit SpeedValues_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__SpeedValues_Response
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__SpeedValues_Response
    std::shared_ptr<interfaces_subzero::srv::SpeedValues_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedValues_Response_ & other) const
  {
    if (this->msg_sent != other.msg_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedValues_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedValues_Response_

// alias to use template instance with default allocator
using SpeedValues_Response =
  interfaces_subzero::srv::SpeedValues_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero

namespace interfaces_subzero
{

namespace srv
{

struct SpeedValues
{
  using Request = interfaces_subzero::srv::SpeedValues_Request;
  using Response = interfaces_subzero::srv::SpeedValues_Response;
};

}  // namespace srv

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__SPEED_VALUES__STRUCT_HPP_
