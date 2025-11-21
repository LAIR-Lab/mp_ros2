// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand_list.h"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_H_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'human_hand_list'
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.h"

/// Struct defined in msg/MediaPipeHumanHandList in the package mpros2_msg.
typedef struct mpros2_msg__msg__MediaPipeHumanHandList
{
  int32_t num_humans;
  mpros2_msg__msg__MediaPipeHumanHand human_hand_list;
} mpros2_msg__msg__MediaPipeHumanHandList;

// Struct for a sequence of mpros2_msg__msg__MediaPipeHumanHandList.
typedef struct mpros2_msg__msg__MediaPipeHumanHandList__Sequence
{
  mpros2_msg__msg__MediaPipeHumanHandList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpros2_msg__msg__MediaPipeHumanHandList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_H_
