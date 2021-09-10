// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/rigid_body__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mocap_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mocap_interfaces/msg/detail/rigid_body__struct.h"
#include "mocap_interfaces/msg/detail/rigid_body__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mocap_interfaces/msg/detail/point__functions.h"  // p
#include "mocap_interfaces/msg/detail/unit_quaternion__functions.h"  // q

// forward declare type support functions
size_t get_serialized_size_mocap_interfaces__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mocap_interfaces__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, Point)();
size_t get_serialized_size_mocap_interfaces__msg__UnitQuaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mocap_interfaces__msg__UnitQuaternion(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, UnitQuaternion)();


using _RigidBody__ros_msg_type = mocap_interfaces__msg__RigidBody;

static bool _RigidBody__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RigidBody__ros_msg_type * ros_message = static_cast<const _RigidBody__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: valid
  {
    cdr << (ros_message->valid ? true : false);
  }

  // Field name: mean_error
  {
    cdr << ros_message->mean_error;
  }

  // Field name: p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->p, cdr))
    {
      return false;
    }
  }

  // Field name: q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, UnitQuaternion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->q, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RigidBody__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RigidBody__ros_msg_type * ros_message = static_cast<_RigidBody__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid = tmp ? true : false;
  }

  // Field name: mean_error
  {
    cdr >> ros_message->mean_error;
  }

  // Field name: p
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->p))
    {
      return false;
    }
  }

  // Field name: q
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, UnitQuaternion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->q))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap_interfaces
size_t get_serialized_size_mocap_interfaces__msg__RigidBody(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RigidBody__ros_msg_type * ros_message = static_cast<const _RigidBody__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_error
  {
    size_t item_size = sizeof(ros_message->mean_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p

  current_alignment += get_serialized_size_mocap_interfaces__msg__Point(
    &(ros_message->p), current_alignment);
  // field.name q

  current_alignment += get_serialized_size_mocap_interfaces__msg__UnitQuaternion(
    &(ros_message->q), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RigidBody__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mocap_interfaces__msg__RigidBody(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap_interfaces
size_t max_serialized_size_mocap_interfaces__msg__RigidBody(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mean_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: p
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mocap_interfaces__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: q
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mocap_interfaces__msg__UnitQuaternion(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RigidBody__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mocap_interfaces__msg__RigidBody(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RigidBody = {
  "mocap_interfaces::msg",
  "RigidBody",
  _RigidBody__cdr_serialize,
  _RigidBody__cdr_deserialize,
  _RigidBody__get_serialized_size,
  _RigidBody__max_serialized_size
};

static rosidl_message_type_support_t _RigidBody__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RigidBody,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mocap_interfaces, msg, RigidBody)() {
  return &_RigidBody__type_support;
}

#if defined(__cplusplus)
}
#endif
