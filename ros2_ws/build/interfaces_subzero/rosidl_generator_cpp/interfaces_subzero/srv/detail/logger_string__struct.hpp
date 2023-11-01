// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:srv/LoggerString.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__STRUCT_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__LoggerString_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__LoggerString_Request __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoggerString_Request_
{
  using Type = LoggerString_Request_<ContainerAllocator>;

  explicit LoggerString_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->data = "";
    }
  }

  explicit LoggerString_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->data = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__LoggerString_Request
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__LoggerString_Request
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoggerString_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoggerString_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoggerString_Request_

// alias to use template instance with default allocator
using LoggerString_Request =
  interfaces_subzero::srv::LoggerString_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__LoggerString_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__LoggerString_Response __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LoggerString_Response_
{
  using Type = LoggerString_Response_<ContainerAllocator>;

  explicit LoggerString_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_sent = false;
    }
  }

  explicit LoggerString_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__LoggerString_Response
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__LoggerString_Response
    std::shared_ptr<interfaces_subzero::srv::LoggerString_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoggerString_Response_ & other) const
  {
    if (this->msg_sent != other.msg_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoggerString_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoggerString_Response_

// alias to use template instance with default allocator
using LoggerString_Response =
  interfaces_subzero::srv::LoggerString_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero

namespace interfaces_subzero
{

namespace srv
{

struct LoggerString
{
  using Request = interfaces_subzero::srv::LoggerString_Request;
  using Response = interfaces_subzero::srv::LoggerString_Response;
};

}  // namespace srv

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__LOGGER_STRING__STRUCT_HPP_
