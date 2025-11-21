// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanHand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xf8, 0x92, 0x0b, 0x8a, 0x69, 0xc0, 0x47,
      0x69, 0x83, 0x9f, 0xb2, 0x22, 0x7a, 0x8f, 0x63,
      0x0c, 0x9c, 0x31, 0xa6, 0x0a, 0xcf, 0xf4, 0x66,
      0x1d, 0x6b, 0x3f, 0x8e, 0x58, 0xaf, 0xdd, 0x2f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mpros2_msg/msg/detail/hand_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mpros2_msg__msg__HandPoint__EXPECTED_HASH = {1, {
    0x53, 0x6f, 0x03, 0xbc, 0x11, 0x0f, 0x2e, 0xa2,
    0xa5, 0xf1, 0x11, 0x3d, 0x0f, 0x39, 0x10, 0xf8,
    0x53, 0x5e, 0x7b, 0xda, 0x65, 0xbd, 0xac, 0xba,
    0x54, 0xfc, 0x0b, 0x8c, 0xb0, 0x52, 0x03, 0xb3,
  }};
#endif

static char mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanHand";
static char mpros2_msg__msg__HandPoint__TYPE_NAME[] = "mpros2_msg/msg/HandPoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__MediaPipeHumanHand__FIELD_NAME__right_hand_key_points[] = "right_hand_key_points";
static char mpros2_msg__msg__MediaPipeHumanHand__FIELD_NAME__left_hand_key_points[] = "left_hand_key_points";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__MediaPipeHumanHand__FIELDS[] = {
  {
    {mpros2_msg__msg__MediaPipeHumanHand__FIELD_NAME__right_hand_key_points, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      21,
      0,
      {mpros2_msg__msg__HandPoint__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHand__FIELD_NAME__left_hand_key_points, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      21,
      0,
      {mpros2_msg__msg__HandPoint__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mpros2_msg__msg__MediaPipeHumanHand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mpros2_msg__msg__HandPoint__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanHand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
      {mpros2_msg__msg__MediaPipeHumanHand__FIELDS, 2, 2},
    },
    {mpros2_msg__msg__MediaPipeHumanHand__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mpros2_msg__msg__HandPoint__EXPECTED_HASH, mpros2_msg__msg__HandPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mpros2_msg__msg__HandPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "HandPoint[21] right_hand_key_points\n"
  "HandPoint[21] left_hand_key_points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanHand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 70, 70},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanHand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__MediaPipeHumanHand__get_individual_type_description_source(NULL),
    sources[1] = *mpros2_msg__msg__HandPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
