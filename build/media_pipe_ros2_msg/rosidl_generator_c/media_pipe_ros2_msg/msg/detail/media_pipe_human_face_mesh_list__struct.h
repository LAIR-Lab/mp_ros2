// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mpros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_face_mesh_list.h"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_H_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'human_face_mesh_list'
#include "mpros2_msg/msg/detail/face_mesh_point__struct.h"

/// Struct defined in msg/MediaPipeHumanFaceMeshList in the package mpros2_msg.
typedef struct mpros2_msg__msg__MediaPipeHumanFaceMeshList
{
  int32_t num_humans;
  mpros2_msg__msg__FaceMeshPoint human_face_mesh_list[468];
} mpros2_msg__msg__MediaPipeHumanFaceMeshList;

// Struct for a sequence of mpros2_msg__msg__MediaPipeHumanFaceMeshList.
typedef struct mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence
{
  mpros2_msg__msg__MediaPipeHumanFaceMeshList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_H_
