// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/unit_quaternion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mocap_interfaces__msg__UnitQuaternion__init(mocap_interfaces__msg__UnitQuaternion * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // w
  return true;
}

void
mocap_interfaces__msg__UnitQuaternion__fini(mocap_interfaces__msg__UnitQuaternion * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

mocap_interfaces__msg__UnitQuaternion *
mocap_interfaces__msg__UnitQuaternion__create()
{
  mocap_interfaces__msg__UnitQuaternion * msg = (mocap_interfaces__msg__UnitQuaternion *)malloc(sizeof(mocap_interfaces__msg__UnitQuaternion));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mocap_interfaces__msg__UnitQuaternion));
  bool success = mocap_interfaces__msg__UnitQuaternion__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mocap_interfaces__msg__UnitQuaternion__destroy(mocap_interfaces__msg__UnitQuaternion * msg)
{
  if (msg) {
    mocap_interfaces__msg__UnitQuaternion__fini(msg);
  }
  free(msg);
}


bool
mocap_interfaces__msg__UnitQuaternion__Sequence__init(mocap_interfaces__msg__UnitQuaternion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mocap_interfaces__msg__UnitQuaternion * data = NULL;
  if (size) {
    data = (mocap_interfaces__msg__UnitQuaternion *)calloc(size, sizeof(mocap_interfaces__msg__UnitQuaternion));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mocap_interfaces__msg__UnitQuaternion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mocap_interfaces__msg__UnitQuaternion__fini(&data[i - 1]);
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
mocap_interfaces__msg__UnitQuaternion__Sequence__fini(mocap_interfaces__msg__UnitQuaternion__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mocap_interfaces__msg__UnitQuaternion__fini(&array->data[i]);
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

mocap_interfaces__msg__UnitQuaternion__Sequence *
mocap_interfaces__msg__UnitQuaternion__Sequence__create(size_t size)
{
  mocap_interfaces__msg__UnitQuaternion__Sequence * array = (mocap_interfaces__msg__UnitQuaternion__Sequence *)malloc(sizeof(mocap_interfaces__msg__UnitQuaternion__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mocap_interfaces__msg__UnitQuaternion__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mocap_interfaces__msg__UnitQuaternion__Sequence__destroy(mocap_interfaces__msg__UnitQuaternion__Sequence * array)
{
  if (array) {
    mocap_interfaces__msg__UnitQuaternion__Sequence__fini(array);
  }
  free(array);
}
