// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand.h"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_H_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'right_hand_key_points'
// Member 'left_hand_key_points'
#include "mpros2_msg/msg/detail/hand_point__struct.h"

/// Struct defined in msg/MediaPipeHumanHand in the package mpros2_msg.
typedef struct mpros2_msg__msg__MediaPipeHumanHand
{
  mpros2_msg__msg__HandPoint right_hand_key_points[21];
  mpros2_msg__msg__HandPoint left_hand_key_points[21];
} mpros2_msg__msg__MediaPipeHumanHand;

// Struct for a sequence of mpros2_msg__msg__MediaPipeHumanHand.
typedef struct mpros2_msg__msg__MediaPipeHumanHand__Sequence
{
  mpros2_msg__msg__MediaPipeHumanHand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpros2_msg__msg__MediaPipeHumanHand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_H_
