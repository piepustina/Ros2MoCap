// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_interfaces:msg/RotationMatrix.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/rotation_matrix__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mocap_interfaces__msg__RotationMatrix__init(mocap_interfaces__msg__RotationMatrix * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // valid
  // mean_error
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
  return true;
}

void
mocap_interfaces__msg__RotationMatrix__fini(mocap_interfaces__msg__RotationMatrix * msg)
{
  if (!msg) {
    return;
  }
  // id
  // valid
  // mean_error
  // x
  // y
  // z
  // qx
  // qy
  // qz
  // qw
}

mocap_interfaces__msg__RotationMatrix *
mocap_interfaces__msg__RotationMatrix__create()
{
  mocap_interfaces__msg__RotationMatrix * msg = (mocap_interfaces__msg__RotationMatrix *)malloc(sizeof(mocap_interfaces__msg__RotationMatrix));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_interfaces__msg__RotationMatrix));
  bool success = mocap_interfaces__msg__RotationMatrix__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mocap_interfaces__msg__RotationMatrix__destroy(mocap_interfaces__msg__RotationMatrix * msg)
{
  if (msg) {
    mocap_interfaces__msg__RotationMatrix__fini(msg);
  }
  free(msg);
}


bool
mocap_interfaces__msg__RotationMatrix__Sequence__init(mocap_interfaces__msg__RotationMatrix__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mocap_interfaces__msg__RotationMatrix * data = NULL;
  if (size) {
    data = (mocap_interfaces__msg__RotationMatrix *)calloc(size, sizeof(mocap_interfaces__msg__RotationMatrix));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_interfaces__msg__RotationMatrix__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_interfaces__msg__RotationMatrix__fini(&data[i - 1]);
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
mocap_interfaces__msg__RotationMatrix__Sequence__fini(mocap_interfaces__msg__RotationMatrix__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap_interfaces__msg__RotationMatrix__fini(&array->data[i]);
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

mocap_interfaces__msg__RotationMatrix__Sequence *
mocap_interfaces__msg__RotationMatrix__Sequence__create(size_t size)
{
  mocap_interfaces__msg__RotationMatrix__Sequence * array = (mocap_interfaces__msg__RotationMatrix__Sequence *)malloc(sizeof(mocap_interfaces__msg__RotationMatrix__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mocap_interfaces__msg__RotationMatrix__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mocap_interfaces__msg__RotationMatrix__Sequence__destroy(mocap_interfaces__msg__RotationMatrix__Sequence * array)
{
  if (array) {
    mocap_interfaces__msg__RotationMatrix__Sequence__fini(array);
  }
  free(array);
}
