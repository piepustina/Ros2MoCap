// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__BUILDER_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__BUILDER_HPP_

#include "mocap_interfaces/msg/detail/unit_quaternion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mocap_interfaces
{

namespace msg
{

namespace builder
{

class Init_UnitQuaternion_w
{
public:
  explicit Init_UnitQuaternion_w(::mocap_interfaces::msg::UnitQuaternion & msg)
  : msg_(msg)
  {}
  ::mocap_interfaces::msg::UnitQuaternion w(::mocap_interfaces::msg::UnitQuaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::UnitQuaternion msg_;
};

class Init_UnitQuaternion_z
{
public:
  explicit Init_UnitQuaternion_z(::mocap_interfaces::msg::UnitQuaternion & msg)
  : msg_(msg)
  {}
  Init_UnitQuaternion_w z(::mocap_interfaces::msg::UnitQuaternion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_UnitQuaternion_w(msg_);
  }

private:
  ::mocap_interfaces::msg::UnitQuaternion msg_;
};

class Init_UnitQuaternion_y
{
public:
  explicit Init_UnitQuaternion_y(::mocap_interfaces::msg::UnitQuaternion & msg)
  : msg_(msg)
  {}
  Init_UnitQuaternion_z y(::mocap_interfaces::msg::UnitQuaternion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UnitQuaternion_z(msg_);
  }

private:
  ::mocap_interfaces::msg::UnitQuaternion msg_;
};

class Init_UnitQuaternion_x
{
public:
  Init_UnitQuaternion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitQuaternion_y x(::mocap_interfaces::msg::UnitQuaternion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UnitQuaternion_y(msg_);
  }

private:
  ::mocap_interfaces::msg::UnitQuaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_interfaces::msg::UnitQuaternion>()
{
  return mocap_interfaces::msg::builder::Init_UnitQuaternion_x();
}

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__BUILDER_HPP_
