// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice
#include "mocap_interfaces/msg/detail/rigid_body__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mocap_interfaces/msg/detail/rigid_body__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mocap_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mocap_interfaces::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mocap_interfaces::msg::Point &);
size_t get_serialized_size(
  const mocap_interfaces::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mocap_interfaces

namespace mocap_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mocap_interfaces::msg::UnitQuaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mocap_interfaces::msg::UnitQuaternion &);
size_t get_serialized_size(
  const mocap_interfaces::msg::UnitQuaternion &,
  size_t current_alignment);
size_t
max_serialized_size_UnitQuaternion(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mocap_interfaces


namespace mocap_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
cdr_serialize(
  const mocap_interfaces::msg::RigidBody & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: valid
  cdr << (ros_message.valid ? true : false);
  // Member: mean_error
  cdr << ros_message.mean_error;
  // Member: p
  mocap_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.p,
    cdr);
  // Member: q
  mocap_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.q,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mocap_interfaces::msg::RigidBody & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid = tmp ? true : false;
  }

  // Member: mean_error
  cdr >> ros_message.mean_error;

  // Member: p
  mocap_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.p);

  // Member: q
  mocap_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.q);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
get_serialized_size(
  const mocap_interfaces::msg::RigidBody & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid
  {
    size_t item_size = sizeof(ros_message.valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean_error
  {
    size_t item_size = sizeof(ros_message.mean_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p

  current_alignment +=
    mocap_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.p, current_alignment);
  // Member: q

  current_alignment +=
    mocap_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.q, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mocap_interfaces
max_serialized_size_RigidBody(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mean_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: p
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mocap_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: q
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mocap_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_UnitQuaternion(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RigidBody__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mocap_interfaces::msg::RigidBody *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RigidBody__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mocap_interfaces::msg::RigidBody *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RigidBody__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mocap_interfaces::msg::RigidBody *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RigidBody__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RigidBody(full_bounded, 0);
}

static message_type_support_callbacks_t _RigidBody__callbacks = {
  "mocap_interfaces::msg",
  "RigidBody",
  _RigidBody__cdr_serialize,
  _RigidBody__cdr_deserialize,
  _RigidBody__get_serialized_size,
  _RigidBody__max_serialized_size
};

static rosidl_message_type_support_t _RigidBody__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RigidBody__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mocap_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mocap_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mocap_interfaces::msg::RigidBody>()
{
  return &mocap_interfaces::msg::typesupport_fastrtps_cpp::_RigidBody__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mocap_interfaces, msg, RigidBody)() {
  return &mocap_interfaces::msg::typesupport_fastrtps_cpp::_RigidBody__handle;
}

#ifdef __cplusplus
}
#endif
