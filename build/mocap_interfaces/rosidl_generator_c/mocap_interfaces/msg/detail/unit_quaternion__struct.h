// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_H_
#define MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/UnitQuaternion in the package mocap_interfaces.
typedef struct mocap_interfaces__msg__UnitQuaternion
{
  double x;
  double y;
  double z;
  double w;
} mocap_interfaces__msg__UnitQuaternion;

// Struct for a sequence of mocap_interfaces__msg__UnitQuaternion.
typedef struct mocap_interfaces__msg__UnitQuaternion__Sequence
{
  mocap_interfaces__msg__UnitQuaternion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap_interfaces__msg__UnitQuaternion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__UNIT_QUATERNION__STRUCT_H_
