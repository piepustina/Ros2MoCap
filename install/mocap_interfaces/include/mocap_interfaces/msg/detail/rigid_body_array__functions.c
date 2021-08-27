// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_interfaces:msg/RigidBodyArray.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/rigid_body_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `rigid_bodies`
#include "mocap_interfaces/msg/detail/rigid_body__functions.h"

bool
mocap_interfaces__msg__RigidBodyArray__init(mocap_interfaces__msg__RigidBodyArray * msg)
{
  if (!msg) {
    return false;
  }
  // rigid_bodies
  if (!mocap_interfaces__msg__RigidBody__Sequence__init(&msg->rigid_bodies, 0)) {
    mocap_interfaces__msg__RigidBodyArray__fini(msg);
    return false;
  }
  return true;
}

void
mocap_interfaces__msg__RigidBodyArray__fini(mocap_interfaces__msg__RigidBodyArray * msg)
{
  if (!msg) {
    return;
  }
  // rigid_bodies
  mocap_interfaces__msg__RigidBody__Sequence__fini(&msg->rigid_bodies);
}

mocap_interfaces__msg__RigidBodyArray *
mocap_interfaces__msg__RigidBodyArray__create()
{
  mocap_interfaces__msg__RigidBodyArray * msg = (mocap_interfaces__msg__RigidBodyArray *)malloc(sizeof(mocap_interfaces__msg__RigidBodyArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_interfaces__msg__RigidBodyArray));
  bool success = mocap_interfaces__msg__RigidBodyArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mocap_interfaces__msg__RigidBodyArray__destroy(mocap_interfaces__msg__RigidBodyArray * msg)
{
  if (msg) {
    mocap_interfaces__msg__RigidBodyArray__fini(msg);
  }
  free(msg);
}


bool
mocap_interfaces__msg__RigidBodyArray__Sequence__init(mocap_interfaces__msg__RigidBodyArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mocap_interfaces__msg__RigidBodyArray * data = NULL;
  if (size) {
    data = (mocap_interfaces__msg__RigidBodyArray *)calloc(size, sizeof(mocap_interfaces__msg__RigidBodyArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_interfaces__msg__RigidBodyArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_interfaces__msg__RigidBodyArray__fini(&data[i - 1]);
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
mocap_interfaces__msg__RigidBodyArray__Sequence__fini(mocap_interfaces__msg__RigidBodyArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap_interfaces__msg__RigidBodyArray__fini(&array->data[i]);
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

mocap_interfaces__msg__RigidBodyArray__Sequence *
mocap_interfaces__msg__RigidBodyArray__Sequence__create(size_t size)
{
  mocap_interfaces__msg__RigidBodyArray__Sequence * array = (mocap_interfaces__msg__RigidBodyArray__Sequence *)malloc(sizeof(mocap_interfaces__msg__RigidBodyArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mocap_interfaces__msg__RigidBodyArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mocap_interfaces__msg__RigidBodyArray__Sequence__destroy(mocap_interfaces__msg__RigidBodyArray__Sequence * array)
{
  if (array) {
    mocap_interfaces__msg__RigidBodyArray__Sequence__fini(array);
  }
  free(array);
}
