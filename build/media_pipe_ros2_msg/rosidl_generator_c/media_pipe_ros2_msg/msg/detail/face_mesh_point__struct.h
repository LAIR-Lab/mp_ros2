// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpros2_msg:msg/FaceMeshPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/face_mesh_point.h"


#ifndef mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__STRUCT_H_
#define mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/FaceMeshPoint in the package mpros2_msg.
typedef struct mpros2_msg__msg__FaceMeshPoint
{
  double x;
  double y;
  double z;
} mpros2_msg__msg__FaceMeshPoint;

// Struct for a sequence of mpros2_msg__msg__FaceMeshPoint.
typedef struct mpros2_msg__msg__FaceMeshPoint__Sequence
{
  mpros2_msg__msg__FaceMeshPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpros2_msg__msg__FaceMeshPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__STRUCT_H_
