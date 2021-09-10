// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mocap_interfaces:msg/RotationMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__BUILDER_HPP_
#define MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__BUILDER_HPP_

#include "mocap_interfaces/msg/detail/rotation_matrix__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mocap_interfaces
{

namespace msg
{

namespace builder
{

class Init_RotationMatrix_qw
{
public:
  explicit Init_RotationMatrix_qw(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  ::mocap_interfaces::msg::RotationMatrix qw(::mocap_interfaces::msg::RotationMatrix::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_qz
{
public:
  explicit Init_RotationMatrix_qz(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_qw qz(::mocap_interfaces::msg::RotationMatrix::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_RotationMatrix_qw(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_qy
{
public:
  explicit Init_RotationMatrix_qy(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_qz qy(::mocap_interfaces::msg::RotationMatrix::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_RotationMatrix_qz(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_qx
{
public:
  explicit Init_RotationMatrix_qx(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_qy qx(::mocap_interfaces::msg::RotationMatrix::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_RotationMatrix_qy(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_z
{
public:
  explicit Init_RotationMatrix_z(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_qx z(::mocap_interfaces::msg::RotationMatrix::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_RotationMatrix_qx(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_y
{
public:
  explicit Init_RotationMatrix_y(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_z y(::mocap_interfaces::msg::RotationMatrix::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RotationMatrix_z(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_x
{
public:
  explicit Init_RotationMatrix_x(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_y x(::mocap_interfaces::msg::RotationMatrix::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RotationMatrix_y(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_mean_error
{
public:
  explicit Init_RotationMatrix_mean_error(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_x mean_error(::mocap_interfaces::msg::RotationMatrix::_mean_error_type arg)
  {
    msg_.mean_error = std::move(arg);
    return Init_RotationMatrix_x(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_valid
{
public:
  explicit Init_RotationMatrix_valid(::mocap_interfaces::msg::RotationMatrix & msg)
  : msg_(msg)
  {}
  Init_RotationMatrix_mean_error valid(::mocap_interfaces::msg::RotationMatrix::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_RotationMatrix_mean_error(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

class Init_RotationMatrix_id
{
public:
  Init_RotationMatrix_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotationMatrix_valid id(::mocap_interfaces::msg::RotationMatrix::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RotationMatrix_valid(msg_);
  }

private:
  ::mocap_interfaces::msg::RotationMatrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mocap_interfaces::msg::RotationMatrix>()
{
  return mocap_interfaces::msg::builder::Init_RotationMatrix_id();
}

}  // namespace mocap_interfaces

#endif  // MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__BUILDER_HPP_
