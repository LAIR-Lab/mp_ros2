// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/pose_point.h"


#ifndef mpros2_MSG__MSG__DETAIL__POSE_POINT__STRUCT_H_
#define mpros2_MSG__MSG__DETAIL__POSE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PosePoint in the package mpros2_msg.
typedef struct mpros2_msg__msg__PosePoint
{
  rosidl_runtime_c__String name;
  double x;
  double y;
  double z;
  double visibility;
} mpros2_msg__msg__PosePoint;

// Struct for a sequence of mpros2_msg__msg__PosePoint.
typedef struct mpros2_msg__msg__PosePoint__Sequence
{
  mpros2_msg__msg__PosePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpros2_msg__msg__PosePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__POSE_POINT__STRUCT_H_
