// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_interfaces:msg/RigidBodyArray.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__BUILDER_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__BUILDER_HPP_

#include "mocap_interfaces/msg/detail/rigid_body_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mocap_interfaces
{

namespace msg
{

namespace builder
{

class Init_RigidBodyArray_rigid_bodies
{
public:
  Init_RigidBodyArray_rigid_bodies()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mocap_interfaces::msg::RigidBodyArray rigid_bodies(::mocap_interfaces::msg::RigidBodyArray::_rigid_bodies_type arg)
  {
    msg_.rigid_bodies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::RigidBodyArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_interfaces::msg::RigidBodyArray>()
{
  return mocap_interfaces::msg::builder::Init_RigidBodyArray_rigid_bodies();
}

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__BUILDER_HPP_
