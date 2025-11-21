// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/pose_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__PosePoint__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xa5, 0x01, 0x55, 0x77, 0xd0, 0x4d, 0x27,
      0x14, 0x82, 0x19, 0x63, 0x50, 0x25, 0x1f, 0x08,
      0x95, 0x9e, 0x28, 0x17, 0x32, 0x35, 0xbc, 0x7d,
      0x79, 0x21, 0x2a, 0x78, 0x9d, 0x01, 0x74, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mpros2_msg__msg__PosePoint__TYPE_NAME[] = "mpros2_msg/msg/PosePoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__PosePoint__FIELD_NAME__name[] = "name";
static char mpros2_msg__msg__PosePoint__FIELD_NAME__x[] = "x";
static char mpros2_msg__msg__PosePoint__FIELD_NAME__y[] = "y";
static char mpros2_msg__msg__PosePoint__FIELD_NAME__z[] = "z";
static char mpros2_msg__msg__PosePoint__FIELD_NAME__visibility[] = "visibility";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__PosePoint__FIELDS[] = {
  {
    {mpros2_msg__msg__PosePoint__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__PosePoint__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__PosePoint__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__PosePoint__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__PosePoint__FIELD_NAME__visibility, 10, 10},
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
mpros2_msg__msg__PosePoint__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
      {mpros2_msg__msg__PosePoint__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 visibility";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__PosePoint__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__PosePoint__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__PosePoint__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
