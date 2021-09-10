// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mocap_interfaces__msg__UnitQuaternion __attribute__((deprecated))
#else
# define DEPRECATED__mocap_interfaces__msg__UnitQuaternion __declspec(deprecated)
#endif

namespace mocap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitQuaternion_
{
  using Type = UnitQuaternion_<ContainerAllocator>;

  explicit UnitQuaternion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  explicit UnitQuaternion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _w_type =
    double;
  _w_type w;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const double & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap_interfaces__msg__UnitQuaternion
    std::shared_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap_interfaces__msg__UnitQuaternion
    std::shared_ptr<mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitQuaternion_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitQuaternion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitQuaternion_

// alias to use template instance with default allocator
using UnitQuaternion =
  mocap_interfaces::msg::UnitQuaternion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_HPP_
