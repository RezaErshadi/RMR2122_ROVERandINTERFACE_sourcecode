// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_subzero:srv/ApRESConf.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__BUILDER_HPP_
#define INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__BUILDER_HPP_

#include "interfaces_subzero/srv/detail/ap_res_conf__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_ApRESConf_Request_prefix
{
public:
  explicit Init_ApRESConf_Request_prefix(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  ::interfaces_subzero::srv::ApRESConf_Request prefix(::interfaces_subzero::srv::ApRESConf_Request::_prefix_type arg)
  {
    msg_.prefix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_download
{
public:
  explicit Init_ApRESConf_Request_download(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_prefix download(::interfaces_subzero::srv::ApRESConf_Request::_download_type arg)
  {
    msg_.download = std::move(arg);
    return Init_ApRESConf_Request_prefix(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_n_subburst
{
public:
  explicit Init_ApRESConf_Request_n_subburst(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_download n_subburst(::interfaces_subzero::srv::ApRESConf_Request::_n_subburst_type arg)
  {
    msg_.n_subburst = std::move(arg);
    return Init_ApRESConf_Request_download(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_polarization
{
public:
  explicit Init_ApRESConf_Request_polarization(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_n_subburst polarization(::interfaces_subzero::srv::ApRESConf_Request::_polarization_type arg)
  {
    msg_.polarization = std::move(arg);
    return Init_ApRESConf_Request_n_subburst(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_rx
{
public:
  explicit Init_ApRESConf_Request_rx(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_polarization rx(::interfaces_subzero::srv::ApRESConf_Request::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_ApRESConf_Request_polarization(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_tx
{
public:
  explicit Init_ApRESConf_Request_tx(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_rx tx(::interfaces_subzero::srv::ApRESConf_Request::_tx_type arg)
  {
    msg_.tx = std::move(arg);
    return Init_ApRESConf_Request_rx(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_gains
{
public:
  explicit Init_ApRESConf_Request_gains(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_tx gains(::interfaces_subzero::srv::ApRESConf_Request::_gains_type arg)
  {
    msg_.gains = std::move(arg);
    return Init_ApRESConf_Request_tx(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_attenuators
{
public:
  explicit Init_ApRESConf_Request_attenuators(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_gains attenuators(::interfaces_subzero::srv::ApRESConf_Request::_attenuators_type arg)
  {
    msg_.attenuators = std::move(arg);
    return Init_ApRESConf_Request_gains(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_n_attenuator
{
public:
  explicit Init_ApRESConf_Request_n_attenuator(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_attenuators n_attenuator(::interfaces_subzero::srv::ApRESConf_Request::_n_attenuator_type arg)
  {
    msg_.n_attenuator = std::move(arg);
    return Init_ApRESConf_Request_attenuators(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_type
{
public:
  explicit Init_ApRESConf_Request_type(::interfaces_subzero::srv::ApRESConf_Request & msg)
  : msg_(msg)
  {}
  Init_ApRESConf_Request_n_attenuator type(::interfaces_subzero::srv::ApRESConf_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ApRESConf_Request_n_attenuator(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

class Init_ApRESConf_Request_act
{
public:
  Init_ApRESConf_Request_act()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApRESConf_Request_type act(::interfaces_subzero::srv::ApRESConf_Request::_act_type arg)
  {
    msg_.act = std::move(arg);
    return Init_ApRESConf_Request_type(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::ApRESConf_Request>()
{
  return interfaces_subzero::srv::builder::Init_ApRESConf_Request_act();
}

}  // namespace interfaces_subzero


namespace interfaces_subzero
{

namespace srv
{

namespace builder
{

class Init_ApRESConf_Response_msg_sent
{
public:
  Init_ApRESConf_Response_msg_sent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_subzero::srv::ApRESConf_Response msg_sent(::interfaces_subzero::srv::ApRESConf_Response::_msg_sent_type arg)
  {
    msg_.msg_sent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_subzero::srv::ApRESConf_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_subzero::srv::ApRESConf_Response>()
{
  return interfaces_subzero::srv::builder::Init_ApRESConf_Response_msg_sent();
}

}  // namespace interfaces_subzero

#endif  // INTERFACES_SUBZERO__SRV__DETAIL__AP_RES_CONF__BUILDER_HPP_
