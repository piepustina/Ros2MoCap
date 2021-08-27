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

class Init_RigidBody_qw
{
public:
  explicit Init_RigidBody_qw(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  ::mocap_interfaces::msg::RigidBody qw(::mocap_interfaces::msg::RigidBody::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_qz
{
public:
  explicit Init_RigidBody_qz(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_qw qz(::mocap_interfaces::msg::RigidBody::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_RigidBody_qw(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_qy
{
public:
  explicit Init_RigidBody_qy(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_qz qy(::mocap_interfaces::msg::RigidBody::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_RigidBody_qz(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_qx
{
public:
  explicit Init_RigidBody_qx(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_qy qx(::mocap_interfaces::msg::RigidBody::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_RigidBody_qy(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_z
{
public:
  explicit Init_RigidBody_z(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_qx z(::mocap_interfaces::msg::RigidBody::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RigidBody_qx(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_y
{
public:
  explicit Init_RigidBody_y(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_z y(::mocap_interfaces::msg::RigidBody::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RigidBody_z(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBody msg_;
};

class Init_RigidBody_x
{
public:
  explicit Init_RigidBody_x(::mocap_interfaces::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_y x(::mocap_interfaces::msg::RigidBody::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RigidBody_y(msg_);
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
  Init_RigidBody_x mean_error(::mocap_interfaces::msg::RigidBody::_mean_error_type arg)
  {
    msg_.mean_error = std::move(arg);
    return Init_RigidBody_x(msg_);
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
