// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/FaceMeshPoint.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/face_mesh_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__FaceMeshPoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x0c, 0x3b, 0x60, 0x4b, 0xee, 0x34, 0x42,
      0x88, 0x76, 0x50, 0x76, 0xcf, 0x30, 0xb2, 0x6f,
      0x1f, 0xa9, 0x0e, 0xaf, 0x1b, 0xad, 0xc5, 0x15,
      0xf0, 0xc0, 0xa1, 0x5f, 0x9c, 0x75, 0x68, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mpros2_msg__msg__FaceMeshPoint__TYPE_NAME[] = "mpros2_msg/msg/FaceMeshPoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__x[] = "x";
static char mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__y[] = "y";
static char mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__FaceMeshPoint__FIELDS[] = {
  {
    {mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__FaceMeshPoint__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__FaceMeshPoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
      {mpros2_msg__msg__FaceMeshPoint__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__FaceMeshPoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__FaceMeshPoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__FaceMeshPoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
