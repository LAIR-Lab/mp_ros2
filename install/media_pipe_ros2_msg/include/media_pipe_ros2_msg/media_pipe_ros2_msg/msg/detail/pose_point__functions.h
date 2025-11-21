// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/pose_point.h"


#ifndef mpros2_MSG__MSG__DETAIL__POSE_POINT__FUNCTIONS_H_
#define mpros2_MSG__MSG__DETAIL__POSE_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mpros2_msg/msg/rosidl_generator_c__visibility_control.h"

#include "mpros2_msg/msg/detail/pose_point__struct.h"

/// Initialize msg/PosePoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mpros2_msg__msg__PosePoint
 * )) before or use
 * mpros2_msg__msg__PosePoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__init(mpros2_msg__msg__PosePoint * msg);

/// Finalize msg/PosePoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__PosePoint__fini(mpros2_msg__msg__PosePoint * msg);

/// Create msg/PosePoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mpros2_msg__msg__PosePoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
mpros2_msg__msg__PosePoint *
mpros2_msg__msg__PosePoint__create(void);

/// Destroy msg/PosePoint message.
/**
 * It calls
 * mpros2_msg__msg__PosePoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__PosePoint__destroy(mpros2_msg__msg__PosePoint * msg);

/// Check for msg/PosePoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__are_equal(const mpros2_msg__msg__PosePoint * lhs, const mpros2_msg__msg__PosePoint * rhs);

/// Copy a msg/PosePoint message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__copy(
  const mpros2_msg__msg__PosePoint * input,
  mpros2_msg__msg__PosePoint * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__PosePoint__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__PosePoint__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__PosePoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__PosePoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PosePoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * mpros2_msg__msg__PosePoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__Sequence__init(mpros2_msg__msg__PosePoint__Sequence * array, size_t size);

/// Finalize array of msg/PosePoint messages.
/**
 * It calls
 * mpros2_msg__msg__PosePoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__PosePoint__Sequence__fini(mpros2_msg__msg__PosePoint__Sequence * array);

/// Create array of msg/PosePoint messages.
/**
 * It allocates the memory for the array and calls
 * mpros2_msg__msg__PosePoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
mpros2_msg__msg__PosePoint__Sequence *
mpros2_msg__msg__PosePoint__Sequence__create(size_t size);

/// Destroy array of msg/PosePoint messages.
/**
 * It calls
 * mpros2_msg__msg__PosePoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__PosePoint__Sequence__destroy(mpros2_msg__msg__PosePoint__Sequence * array);

/// Check for msg/PosePoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__Sequence__are_equal(const mpros2_msg__msg__PosePoint__Sequence * lhs, const mpros2_msg__msg__PosePoint__Sequence * rhs);

/// Copy an array of msg/PosePoint messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__PosePoint__Sequence__copy(
  const mpros2_msg__msg__PosePoint__Sequence * input,
  mpros2_msg__msg__PosePoint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__POSE_POINT__FUNCTIONS_H_
