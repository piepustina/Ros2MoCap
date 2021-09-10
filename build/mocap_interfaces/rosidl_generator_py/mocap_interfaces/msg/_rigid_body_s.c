// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mocap_interfaces/msg/detail/rigid_body__struct.h"
#include "mocap_interfaces/msg/detail/rigid_body__functions.h"

bool mocap_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mocap_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool mocap_interfaces__msg__unit_quaternion__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mocap_interfaces__msg__unit_quaternion__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mocap_interfaces__msg__rigid_body__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mocap_interfaces.msg._rigid_body.RigidBody", full_classname_dest, 42) == 0);
  }
  mocap_interfaces__msg__RigidBody * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mean_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mean_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p
    PyObject * field = PyObject_GetAttrString(_pymsg, "p");
    if (!field) {
      return false;
    }
    if (!mocap_interfaces__msg__point__convert_from_py(field, &ros_message->p)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // q
    PyObject * field = PyObject_GetAttrString(_pymsg, "q");
    if (!field) {
      return false;
    }
    if (!mocap_interfaces__msg__unit_quaternion__convert_from_py(field, &ros_message->q)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mocap_interfaces__msg__rigid_body__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RigidBody */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mocap_interfaces.msg._rigid_body");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RigidBody");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mocap_interfaces__msg__RigidBody * ros_message = (mocap_interfaces__msg__RigidBody *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mean_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p
    PyObject * field = NULL;
    field = mocap_interfaces__msg__point__convert_to_py(&ros_message->p);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q
    PyObject * field = NULL;
    field = mocap_interfaces__msg__unit_quaternion__convert_to_py(&ros_message->q);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "q", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
