// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mocap_interfaces:msg/UnitQuaternion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mocap_interfaces/msg/detail/unit_quaternion__rosidl_typesupport_introspection_c.h"
#include "mocap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mocap_interfaces/msg/detail/unit_quaternion__functions.h"
#include "mocap_interfaces/msg/detail/unit_quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mocap_interfaces__msg__UnitQuaternion__init(message_memory);
}

void UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_fini_function(void * message_memory)
{
  mocap_interfaces__msg__UnitQuaternion__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces__msg__UnitQuaternion, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces__msg__UnitQuaternion, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces__msg__UnitQuaternion, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mocap_interfaces__msg__UnitQuaternion, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_members = {
  "mocap_interfaces__msg",  // message namespace
  "UnitQuaternion",  // message name
  4,  // number of fields
  sizeof(mocap_interfaces__msg__UnitQuaternion),
  UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_member_array,  // message members
  UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_init_function,  // function to initialize message memory (memory has to be allocated)
  UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_type_support_handle = {
  0,
  &UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mocap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mocap_interfaces, msg, UnitQuaternion)() {
  if (!UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_type_support_handle.typesupport_identifier) {
    UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnitQuaternion__rosidl_typesupport_introspection_c__UnitQuaternion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
