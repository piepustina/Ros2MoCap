// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap_interfaces:msg/RotationMatrix.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_H_
#define MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RotationMatrix in the package mocap_interfaces.
typedef struct mocap_interfaces__msg__RotationMatrix
{
  int64_t id;
  bool valid;
  double mean_error;
  double x;
  double y;
  double z;
  double qx;
  double qy;
  double qz;
  double qw;
} mocap_interfaces__msg__RotationMatrix;

// Struct for a sequence of mocap_interfaces__msg__RotationMatrix.
typedef struct mocap_interfaces__msg__RotationMatrix__Sequence
{
  mocap_interfaces__msg__RotationMatrix * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap_interfaces__msg__RotationMatrix__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__ROTATION_MATRIX__STRUCT_H_
