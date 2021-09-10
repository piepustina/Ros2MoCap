// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'p'
#include "mocap_interfaces/msg/detail/point__struct.hpp"
// Member 'q'
#include "mocap_interfaces/msg/detail/unit_quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mocap_interfaces__msg__RigidBody __attribute__((deprecated))
#else
# define DEPRECATED__mocap_interfaces__msg__RigidBody __declspec(deprecated)
#endif

namespace mocap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RigidBody_
{
  using Type = RigidBody_<ContainerAllocator>;

  explicit RigidBody_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_init),
    q(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->valid = false;
      this->mean_error = 0.0;
    }
  }

  explicit RigidBody_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : p(_alloc, _init),
    q(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->valid = false;
      this->mean_error = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _valid_type =
    bool;
  _valid_type valid;
  using _mean_error_type =
    double;
  _mean_error_type mean_error;
  using _p_type =
    mocap_interfaces::msg::Point_<ContainerAllocator>;
  _p_type p;
  using _q_type =
    mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator>;
  _q_type q;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__mean_error(
    const double & _arg)
  {
    this->mean_error = _arg;
    return *this;
  }
  Type & set__p(
    const mocap_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->p = _arg;
    return *this;
  }
  Type & set__q(
    const mocap_interfaces::msg::UnitQuaternion_<ContainerAllocator> & _arg)
  {
    this->q = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap_interfaces::msg::RigidBody_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap_interfaces::msg::RigidBody_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::RigidBody_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::RigidBody_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap_interfaces__msg__RigidBody
    std::shared_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap_interfaces__msg__RigidBody
    std::shared_ptr<mocap_interfaces::msg::RigidBody_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RigidBody_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->mean_error != other.mean_error) {
      return false;
    }
    if (this->p != other.p) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    return true;
  }
  bool operator!=(const RigidBody_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RigidBody_

// alias to use template instance with default allocator
using RigidBody =
  mocap_interfaces::msg::RigidBody_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_
