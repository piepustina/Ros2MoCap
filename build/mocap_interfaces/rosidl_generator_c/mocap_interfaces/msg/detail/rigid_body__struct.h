// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_H_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p'
#include "mocap_interfaces/msg/detail/point__struct.h"
// Member 'q'
#include "mocap_interfaces/msg/detail/unit_quaternion__struct.h"

// Struct defined in msg/RigidBody in the package mocap_interfaces.
typedef struct mocap_interfaces__msg__RigidBody
{
  int64_t id;
  bool valid;
  double mean_error;
  mocap_interfaces__msg__Point p;
  mocap_interfaces__msg__UnitQuaternion q;
} mocap_interfaces__msg__RigidBody;

// Struct for a sequence of mocap_interfaces__msg__RigidBody.
typedef struct mocap_interfaces__msg__RigidBody__Sequence
{
  mocap_interfaces__msg__RigidBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mocap_interfaces__msg__RigidBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__STRUCT_H_
