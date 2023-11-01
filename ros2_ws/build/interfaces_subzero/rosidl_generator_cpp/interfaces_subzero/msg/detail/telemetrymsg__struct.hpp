// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:msg/Telemetrymsg.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_HPP_
#define INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__msg__Telemetrymsg __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__msg__Telemetrymsg __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetrymsg_
{
  using Type = Telemetrymsg_<ContainerAllocator>;

  explicit Telemetrymsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Telemetrymsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__msg__Telemetrymsg
    std::shared_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__msg__Telemetrymsg
    std::shared_ptr<interfaces_subzero::msg::Telemetrymsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetrymsg_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetrymsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetrymsg_

// alias to use template instance with default allocator
using Telemetrymsg =
  interfaces_subzero::msg::Telemetrymsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__MSG__DETAIL__TELEMETRYMSG__STRUCT_HPP_
