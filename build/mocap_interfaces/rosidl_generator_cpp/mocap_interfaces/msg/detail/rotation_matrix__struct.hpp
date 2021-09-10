// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mocap_interfaces:msg/RotationMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mocap_interfaces__msg__RotationMatrix __attribute__((deprecated))
#else
# define DEPRECATED__mocap_interfaces__msg__RotationMatrix __declspec(deprecated)
#endif

namespace mocap_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RotationMatrix_
{
  using Type = RotationMatrix_<ContainerAllocator>;

  explicit RotationMatrix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->valid = false;
      this->mean_error = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  explicit RotationMatrix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->valid = false;
      this->mean_error = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
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
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _qx_type =
    double;
  _qx_type qx;
  using _qy_type =
    double;
  _qy_type qy;
  using _qz_type =
    double;
  _qz_type qz;
  using _qw_type =
    double;
  _qw_type qw;

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
  Type & set__qx(
    const double & _arg)
  {
    this->qx = _arg;
    return *this;
  }
  Type & set__qy(
    const double & _arg)
  {
    this->qy = _arg;
    return *this;
  }
  Type & set__qz(
    const double & _arg)
  {
    this->qz = _arg;
    return *this;
  }
  Type & set__qw(
    const double & _arg)
  {
    this->qw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> *;
  using ConstRawPtr =
    const mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mocap_interfaces__msg__RotationMatrix
    std::shared_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mocap_interfaces__msg__RotationMatrix
    std::shared_ptr<mocap_interfaces::msg::RotationMatrix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RotationMatrix_ & other) const
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
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qx != other.qx) {
      return false;
    }
    if (this->qy != other.qy) {
      return false;
    }
    if (this->qz != other.qz) {
      return false;
    }
    if (this->qw != other.qw) {
      return false;
    }
    return true;
  }
  bool operator!=(const RotationMatrix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RotationMatrix_

// alias to use template instance with default allocator
using RotationMatrix =
  mocap_interfaces::msg::RotationMatrix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_HPP_
