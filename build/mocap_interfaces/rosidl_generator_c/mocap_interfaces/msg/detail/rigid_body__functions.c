// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/rigid_body__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `p`
#include "mocap_interfaces/msg/detail/point__functions.h"
// Member `q`
#include "mocap_interfaces/msg/detail/unit_quaternion__functions.h"

bool
mocap_interfaces__msg__RigidBody__init(mocap_interfaces__msg__RigidBody * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // valid
  // mean_error
  // p
  if (!mocap_interfaces__msg__Point__init(&msg->p)) {
    mocap_interfaces__msg__RigidBody__fini(msg);
    return false;
  }
  // q
  if (!mocap_interfaces__msg__UnitQuaternion__init(&msg->q)) {
    mocap_interfaces__msg__RigidBody__fini(msg);
    return false;
  }
  return true;
}

void
mocap_interfaces__msg__RigidBody__fini(mocap_interfaces__msg__RigidBody * msg)
{
  if (!msg) {
    return;
  }
  // id
  // valid
  // mean_error
  // p
  mocap_interfaces__msg__Point__fini(&msg->p);
  // q
  mocap_interfaces__msg__UnitQuaternion__fini(&msg->q);
}

mocap_interfaces__msg__RigidBody *
mocap_interfaces__msg__RigidBody__create()
{
  mocap_interfaces__msg__RigidBody * msg = (mocap_interfaces__msg__RigidBody *)malloc(sizeof(mocap_interfaces__msg__RigidBody));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_interfaces__msg__RigidBody));
  bool success = mocap_interfaces__msg__RigidBody__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mocap_interfaces__msg__RigidBody__destroy(mocap_interfaces__msg__RigidBody * msg)
{
  if (msg) {
    mocap_interfaces__msg__RigidBody__fini(msg);
  }
  free(msg);
}


bool
mocap_interfaces__msg__RigidBody__Sequence__init(mocap_interfaces__msg__RigidBody__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mocap_interfaces__msg__RigidBody * data = NULL;
  if (size) {
    data = (mocap_interfaces__msg__RigidBody *)calloc(size, sizeof(mocap_interfaces__msg__RigidBody));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_interfaces__msg__RigidBody__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_interfaces__msg__RigidBody__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mocap_interfaces__msg__RigidBody__Sequence__fini(mocap_interfaces__msg__RigidBody__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap_interfaces__msg__RigidBody__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mocap_interfaces__msg__RigidBody__Sequence *
mocap_interfaces__msg__RigidBody__Sequence__create(size_t size)
{
  mocap_interfaces__msg__RigidBody__Sequence * array = (mocap_interfaces__msg__RigidBody__Sequence *)malloc(sizeof(mocap_interfaces__msg__RigidBody__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mocap_interfaces__msg__RigidBody__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mocap_interfaces__msg__RigidBody__Sequence__destroy(mocap_interfaces__msg__RigidBody__Sequence * array)
{
  if (array) {
    mocap_interfaces__msg__RigidBody__Sequence__fini(array);
  }
  free(array);
}
