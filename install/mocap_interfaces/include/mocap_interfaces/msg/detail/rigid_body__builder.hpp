// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_

#include "mocap_interfaces/msg/detail/rigid_body__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mocap_interfaces
{

namespace msg
{

namespace builder
{

class Init_RigidBody_q
{
public:
  explicit Init_RigidBody_q(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  ::mocap_interfaces::msg::RigidBody q(::mocap_interfaces::msg::RigidBody::_q_type arg)
  {
    msg_.q = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_p
{
public:
  explicit Init_RigidBody_p(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_q p(::mocap_interfaces::msg::RigidBody::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_RigidBody_q(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_mean_error
{
public:
  explicit Init_RigidBody_mean_error(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_p mean_error(::mocap_interfaces::msg::RigidBody::_mean_error_type arg)
  {
    msg_.mean_error = std::move(arg);
    return Init_RigidBody_p(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_valid
{
public:
  explicit Init_RigidBody_valid(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_mean_error valid(::mocap_interfaces::msg::RigidBody::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_RigidBody_mean_error(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_id
{
public:
  Init_RigidBody_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RigidBody_valid id(::mocap_interfaces::msg::RigidBody::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RigidBody_valid(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_interfaces::msg::RigidBody>()
{
  return mocap_interfaces::msg::builder::Init_RigidBody_id();
}

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_
