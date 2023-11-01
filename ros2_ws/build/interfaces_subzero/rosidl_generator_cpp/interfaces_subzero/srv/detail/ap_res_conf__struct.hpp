// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_subzero:srv/ApRESConf.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__ApRESConf_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__ApRESConf_Request __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApRESConf_Request_
{
  using Type = ApRESConf_Request_<ContainerAllocator>;

  explicit ApRESConf_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->act = "";
      this->type = "";
      this->n_attenuator = 0ll;
      this->polarization = "";
      this->n_subburst = 0ll;
      this->download = false;
      this->prefix = "";
    }
  }

  explicit ApRESConf_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : act(_alloc),
    type(_alloc),
    polarization(_alloc),
    prefix(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->act = "";
      this->type = "";
      this->n_attenuator = 0ll;
      this->polarization = "";
      this->n_subburst = 0ll;
      this->download = false;
      this->prefix = "";
    }
  }

  // field types and members
  using _act_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _act_type act;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _n_attenuator_type =
    int64_t;
  _n_attenuator_type n_attenuator;
  using _attenuators_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _attenuators_type attenuators;
  using _gains_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _gains_type gains;
  using _tx_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _tx_type tx;
  using _rx_type =
    std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other>;
  _rx_type rx;
  using _polarization_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _polarization_type polarization;
  using _n_subburst_type =
    int64_t;
  _n_subburst_type n_subburst;
  using _download_type =
    bool;
  _download_type download;
  using _prefix_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _prefix_type prefix;

  // setters for named parameter idiom
  Type & set__act(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->act = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__n_attenuator(
    const int64_t & _arg)
  {
    this->n_attenuator = _arg;
    return *this;
  }
  Type & set__attenuators(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->attenuators = _arg;
    return *this;
  }
  Type & set__gains(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->gains = _arg;
    return *this;
  }
  Type & set__tx(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->tx = _arg;
    return *this;
  }
  Type & set__rx(
    const std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other> & _arg)
  {
    this->rx = _arg;
    return *this;
  }
  Type & set__polarization(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->polarization = _arg;
    return *this;
  }
  Type & set__n_subburst(
    const int64_t & _arg)
  {
    this->n_subburst = _arg;
    return *this;
  }
  Type & set__download(
    const bool & _arg)
  {
    this->download = _arg;
    return *this;
  }
  Type & set__prefix(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->prefix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__ApRESConf_Request
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__ApRESConf_Request
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApRESConf_Request_ & other) const
  {
    if (this->act != other.act) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->n_attenuator != other.n_attenuator) {
      return false;
    }
    if (this->attenuators != other.attenuators) {
      return false;
    }
    if (this->gains != other.gains) {
      return false;
    }
    if (this->tx != other.tx) {
      return false;
    }
    if (this->rx != other.rx) {
      return false;
    }
    if (this->polarization != other.polarization) {
      return false;
    }
    if (this->n_subburst != other.n_subburst) {
      return false;
    }
    if (this->download != other.download) {
      return false;
    }
    if (this->prefix != other.prefix) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApRESConf_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApRESConf_Request_

// alias to use template instance with default allocator
using ApRESConf_Request =
  interfaces_subzero::srv::ApRESConf_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero


#ifndef _WIN32
# define DEPRECATED__interfaces_subzero__srv__ApRESConf_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_subzero__srv__ApRESConf_Response __declspec(deprecated)
#endif

namespace interfaces_subzero
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApRESConf_Response_
{
  using Type = ApRESConf_Response_<ContainerAllocator>;

  explicit ApRESConf_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg_sent = false;
    }
  }

  explicit ApRESConf_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_subzero__srv__ApRESConf_Response
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_subzero__srv__ApRESConf_Response
    std::shared_ptr<interfaces_subzero::srv::ApRESConf_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApRESConf_Response_ & other) const
  {
    if (this->msg_sent != other.msg_sent) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApRESConf_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApRESConf_Response_

// alias to use template instance with default allocator
using ApRESConf_Response =
  interfaces_subzero::srv::ApRESConf_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_subzero

namespace interfaces_subzero
{

namespace srv
{

struct ApRESConf
{
  using Request = interfaces_subzero::srv::ApRESConf_Request;
  using Response = interfaces_subzero::srv::ApRESConf_Response;
};

}  // namespace srv

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__STRUCT_HPP_
