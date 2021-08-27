// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap_interfaces:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__FUNCTIONS_H_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mocap_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mocap_interfaces/msg/detail/rigid_body__struct.h"

/// Initialize msg/RigidBody message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap_interfaces__msg__RigidBody
 * )) before or use
 * mocap_interfaces__msg__RigidBody__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
bool
mocap_interfaces__msg__RigidBody__init(mocap_interfaces__msg__RigidBody * msg);

/// Finalize msg/RigidBody message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBody__fini(mocap_interfaces__msg__RigidBody * msg);

/// Create msg/RigidBody message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap_interfaces__msg__RigidBody__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
mocap_interfaces__msg__RigidBody *
mocap_interfaces__msg__RigidBody__create();

/// Destroy msg/RigidBody message.
/**
 * It calls
 * mocap_interfaces__msg__RigidBody__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBody__destroy(mocap_interfaces__msg__RigidBody * msg);


/// Initialize array of msg/RigidBody messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap_interfaces__msg__RigidBody__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
bool
mocap_interfaces__msg__RigidBody__Sequence__init(mocap_interfaces__msg__RigidBody__Sequence * array, size_t size);

/// Finalize array of msg/RigidBody messages.
/**
 * It calls
 * mocap_interfaces__msg__RigidBody__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBody__Sequence__fini(mocap_interfaces__msg__RigidBody__Sequence * array);

/// Create array of msg/RigidBody messages.
/**
 * It allocates the memory for the array and calls
 * mocap_interfaces__msg__RigidBody__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
mocap_interfaces__msg__RigidBody__Sequence *
mocap_interfaces__msg__RigidBody__Sequence__create(size_t size);

/// Destroy array of msg/RigidBody messages.
/**
 * It calls
 * mocap_interfaces__msg__RigidBody__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBody__Sequence__destroy(mocap_interfaces__msg__RigidBody__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY__FUNCTIONS_H_
