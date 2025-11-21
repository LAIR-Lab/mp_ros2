// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanPoseList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf5, 0x27, 0x9a, 0x98, 0xc6, 0x8d, 0x06, 0x9d,
      0x9c, 0xcf, 0x0b, 0x9f, 0x37, 0xc7, 0xb0, 0xad,
      0x09, 0x60, 0xee, 0x56, 0xe3, 0xc7, 0xbf, 0x64,
      0x84, 0x57, 0x9a, 0xb1, 0x09, 0x7a, 0xf6, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mpros2_msg/msg/detail/pose_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mpros2_msg__msg__PosePoint__EXPECTED_HASH = {1, {
    0x2a, 0xa5, 0x01, 0x55, 0x77, 0xd0, 0x4d, 0x27,
    0x14, 0x82, 0x19, 0x63, 0x50, 0x25, 0x1f, 0x08,
    0x95, 0x9e, 0x28, 0x17, 0x32, 0x35, 0xbc, 0x7d,
    0x79, 0x21, 0x2a, 0x78, 0x9d, 0x01, 0x74, 0xfc,
  }};
#endif

static char mpros2_msg__msg__MediaPipeHumanPoseList__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanPoseList";
static char mpros2_msg__msg__PosePoint__TYPE_NAME[] = "mpros2_msg/msg/PosePoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__MediaPipeHumanPoseList__FIELD_NAME__num_humans[] = "num_humans";
static char mpros2_msg__msg__MediaPipeHumanPoseList__FIELD_NAME__human_pose_list[] = "human_pose_list";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__MediaPipeHumanPoseList__FIELDS[] = {
  {
    {mpros2_msg__msg__MediaPipeHumanPoseList__FIELD_NAME__num_humans, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanPoseList__FIELD_NAME__human_pose_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      33,
      0,
      {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mpros2_msg__msg__MediaPipeHumanPoseList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanPoseList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__MediaPipeHumanPoseList__TYPE_NAME, 46, 46},
      {mpros2_msg__msg__MediaPipeHumanPoseList__FIELDS, 2, 2},
    },
    {mpros2_msg__msg__MediaPipeHumanPoseList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mpros2_msg__msg__PosePoint__EXPECTED_HASH, mpros2_msg__msg__PosePoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mpros2_msg__msg__PosePoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_humans\n"
  "PosePoint[33] human_pose_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanPoseList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__MediaPipeHumanPoseList__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanPoseList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__MediaPipeHumanPoseList__get_individual_type_description_source(NULL),
    sources[1] = *mpros2_msg__msg__PosePoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
