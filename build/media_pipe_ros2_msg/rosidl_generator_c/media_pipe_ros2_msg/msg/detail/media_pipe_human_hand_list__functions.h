// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from media_pipe_ros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "media_pipe_ros2_msg/msg/media_pipe_human_hand_list.h"


#ifndef MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__FUNCTIONS_H_
#define MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__FUNCTIONS_H_

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
#include "media_pipe_ros2_msg/msg/rosidl_generator_c__visibility_control.h"

#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_hand_list__struct.h"

/// Initialize msg/MediaPipeHumanHandList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList
 * )) before or use
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__init(media_pipe_ros2_msg__msg__MediaPipeHumanHandList * msg);

/// Finalize msg/MediaPipeHumanHandList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
void
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__fini(media_pipe_ros2_msg__msg__MediaPipeHumanHandList * msg);

/// Create msg/MediaPipeHumanHandList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
media_pipe_ros2_msg__msg__MediaPipeHumanHandList *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__create(void);

/// Destroy msg/MediaPipeHumanHandList message.
/**
 * It calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
void
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__destroy(media_pipe_ros2_msg__msg__MediaPipeHumanHandList * msg);

/// Check for msg/MediaPipeHumanHandList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__are_equal(const media_pipe_ros2_msg__msg__MediaPipeHumanHandList * lhs, const media_pipe_ros2_msg__msg__MediaPipeHumanHandList * rhs);

/// Copy a msg/MediaPipeHumanHandList message.
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
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__copy(
  const media_pipe_ros2_msg__msg__MediaPipeHumanHandList * input,
  media_pipe_ros2_msg__msg__MediaPipeHumanHandList * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
const rosidl_type_hash_t *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
const rosidl_runtime_c__type_description__TypeDescription *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
const rosidl_runtime_c__type_description__TypeSource *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
const rosidl_runtime_c__type_description__TypeSource__Sequence *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MediaPipeHumanHandList messages.
/**
 * It allocates the memory for the number of elements and calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__init(media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * array, size_t size);

/// Finalize array of msg/MediaPipeHumanHandList messages.
/**
 * It calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
void
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__fini(media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * array);

/// Create array of msg/MediaPipeHumanHandList messages.
/**
 * It allocates the memory for the array and calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence *
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__create(size_t size);

/// Destroy array of msg/MediaPipeHumanHandList messages.
/**
 * It calls
 * media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
void
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__destroy(media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * array);

/// Check for msg/MediaPipeHumanHandList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__are_equal(const media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * lhs, const media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * rhs);

/// Copy an array of msg/MediaPipeHumanHandList messages.
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
ROSIDL_GENERATOR_C_PUBLIC_media_pipe_ros2_msg
bool
media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence__copy(
  const media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * input,
  media_pipe_ros2_msg__msg__MediaPipeHumanHandList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__FUNCTIONS_H_
