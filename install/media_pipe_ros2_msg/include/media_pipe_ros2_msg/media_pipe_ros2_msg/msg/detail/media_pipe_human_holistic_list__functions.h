// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_holistic_list.h"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__FUNCTIONS_H_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__FUNCTIONS_H_

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

#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__struct.h"

/// Initialize msg/MediaPipeHumanHolisticList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mpros2_msg__msg__MediaPipeHumanHolisticList
 * )) before or use
 * mpros2_msg__msg__MediaPipeHumanHolisticList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__MediaPipeHumanHolisticList__init(mpros2_msg__msg__MediaPipeHumanHolisticList * msg);

/// Finalize msg/MediaPipeHumanHolisticList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__MediaPipeHumanHolisticList__fini(mpros2_msg__msg__MediaPipeHumanHolisticList * msg);

/// Create msg/MediaPipeHumanHolisticList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
mpros2_msg__msg__MediaPipeHumanHolisticList *
mpros2_msg__msg__MediaPipeHumanHolisticList__create(void);

/// Destroy msg/MediaPipeHumanHolisticList message.
/**
 * It calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__MediaPipeHumanHolisticList__destroy(mpros2_msg__msg__MediaPipeHumanHolisticList * msg);

/// Check for msg/MediaPipeHumanHolisticList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__MediaPipeHumanHolisticList__are_equal(const mpros2_msg__msg__MediaPipeHumanHolisticList * lhs, const mpros2_msg__msg__MediaPipeHumanHolisticList * rhs);

/// Copy a msg/MediaPipeHumanHolisticList message.
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
mpros2_msg__msg__MediaPipeHumanHolisticList__copy(
  const mpros2_msg__msg__MediaPipeHumanHolisticList * input,
  mpros2_msg__msg__MediaPipeHumanHolisticList * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MediaPipeHumanHolisticList messages.
/**
 * It allocates the memory for the number of elements and calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__init(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array, size_t size);

/// Finalize array of msg/MediaPipeHumanHolisticList messages.
/**
 * It calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__fini(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array);

/// Create array of msg/MediaPipeHumanHolisticList messages.
/**
 * It allocates the memory for the array and calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence *
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__create(size_t size);

/// Destroy array of msg/MediaPipeHumanHolisticList messages.
/**
 * It calls
 * mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
void
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__destroy(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array);

/// Check for msg/MediaPipeHumanHolisticList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
bool
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__are_equal(const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * lhs, const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * rhs);

/// Copy an array of msg/MediaPipeHumanHolisticList messages.
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
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__copy(
  const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * input,
  mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__FUNCTIONS_H_
