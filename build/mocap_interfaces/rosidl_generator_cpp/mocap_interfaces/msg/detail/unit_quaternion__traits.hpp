// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__TRAITS_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__TRAITS_HPP_

#include "mocap_interfaces/msg/detail/unit_quaternion__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mocap_interfaces::msg::UnitQuaternion>()
{
  return "mocap_interfaces::msg::UnitQuaternion";
}

template<>
inline const char * name<mocap_interfaces::msg::UnitQuaternion>()
{
  return "mocap_interfaces/msg/UnitQuaternion";
}

template<>
struct has_fixed_size<mocap_interfaces::msg::UnitQuaternion>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mocap_interfaces::msg::UnitQuaternion>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mocap_interfaces::msg::UnitQuaternion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__TRAITS_HPP_
