// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mocap_interfaces:msg/RigidBodyArray.idl
// generated code does not contain a copyright notice

#ifndef MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__FUNCTIONS_H_
#define MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mocap_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mocap_interfaces/msg/detail/rigid_body_array__struct.h"

/// Initialize msg/RigidBodyArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mocap_interfaces__msg__RigidBodyArray
 * )) before or use
 * mocap_interfaces__msg__RigidBodyArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
bool
mocap_interfaces__msg__RigidBodyArray__init(mocap_interfaces__msg__RigidBodyArray * msg);

/// Finalize msg/RigidBodyArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBodyArray__fini(mocap_interfaces__msg__RigidBodyArray * msg);

/// Create msg/RigidBodyArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mocap_interfaces__msg__RigidBodyArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
mocap_interfaces__msg__RigidBodyArray *
mocap_interfaces__msg__RigidBodyArray__create();

/// Destroy msg/RigidBodyArray message.
/**
 * It calls
 * mocap_interfaces__msg__RigidBodyArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBodyArray__destroy(mocap_interfaces__msg__RigidBodyArray * msg);


/// Initialize array of msg/RigidBodyArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * mocap_interfaces__msg__RigidBodyArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
bool
mocap_interfaces__msg__RigidBodyArray__Sequence__init(mocap_interfaces__msg__RigidBodyArray__Sequence * array, size_t size);

/// Finalize array of msg/RigidBodyArray messages.
/**
 * It calls
 * mocap_interfaces__msg__RigidBodyArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBodyArray__Sequence__fini(mocap_interfaces__msg__RigidBodyArray__Sequence * array);

/// Create array of msg/RigidBodyArray messages.
/**
 * It allocates the memory for the array and calls
 * mocap_interfaces__msg__RigidBodyArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
mocap_interfaces__msg__RigidBodyArray__Sequence *
mocap_interfaces__msg__RigidBodyArray__Sequence__create(size_t size);

/// Destroy array of msg/RigidBodyArray messages.
/**
 * It calls
 * mocap_interfaces__msg__RigidBodyArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mocap_interfaces
void
mocap_interfaces__msg__RigidBodyArray__Sequence__destroy(mocap_interfaces__msg__RigidBodyArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MOCAP_INTERFACES__MSG__DETAIL__RIGID_BODY_ARRAY__FUNCTIONS_H_
