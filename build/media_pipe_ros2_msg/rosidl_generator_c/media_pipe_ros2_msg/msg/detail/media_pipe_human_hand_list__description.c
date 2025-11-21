// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/media_pipe_human_hand_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanHandList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0xfb, 0x9d, 0xff, 0xc4, 0x45, 0x55, 0x4b,
      0x50, 0xa6, 0xf0, 0x9e, 0x0a, 0x33, 0xb7, 0x09,
      0xd9, 0xec, 0x2f, 0xda, 0x5e, 0xb8, 0x14, 0xb3,
      0x7d, 0x87, 0x4f, 0x07, 0x0c, 0xfa, 0x32, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "mpros2_msg/msg/detail/hand_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mpros2_msg__msg__HandPoint__EXPECTED_HASH = {1, {
    0x53, 0x6f, 0x03, 0xbc, 0x11, 0x0f, 0x2e, 0xa2,
    0xa5, 0xf1, 0x11, 0x3d, 0x0f, 0x39, 0x10, 0xf8,
    0x53, 0x5e, 0x7b, 0xda, 0x65, 0xbd, 0xac, 0xba,
    0x54, 0xfc, 0x0b, 0x8c, 0xb0, 0x52, 0x03, 0xb3,
  }};
static const rosidl_type_hash_t mpros2_msg__msg__MediaPipeHumanHand__EXPECTED_HASH = {1, {
    0xc5, 0xf8, 0x92, 0x0b, 0x8a, 0x69, 0xc0, 0x47,
    0x69, 0x83, 0x9f, 0xb2, 0x22, 0x7a, 0x8f, 0x63,
    0x0c, 0x9c, 0x31, 0xa6, 0x0a, 0xcf, 0xf4, 0x66,
    0x1d, 0x6b, 0x3f, 0x8e, 0x58, 0xaf, 0xdd, 0x2f,
  }};
#endif

static char mpros2_msg__msg__MediaPipeHumanHandList__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanHandList";
static char mpros2_msg__msg__HandPoint__TYPE_NAME[] = "mpros2_msg/msg/HandPoint";
static char mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanHand";

// Define type names, field names, and default values
static char mpros2_msg__msg__MediaPipeHumanHandList__FIELD_NAME__num_humans[] = "num_humans";
static char mpros2_msg__msg__MediaPipeHumanHandList__FIELD_NAME__human_hand_list[] = "human_hand_list";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__MediaPipeHumanHandList__FIELDS[] = {
  {
    {mpros2_msg__msg__MediaPipeHumanHandList__FIELD_NAME__num_humans, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHandList__FIELD_NAME__human_hand_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mpros2_msg__msg__MediaPipeHumanHandList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mpros2_msg__msg__HandPoint__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanHandList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__MediaPipeHumanHandList__TYPE_NAME, 46, 46},
      {mpros2_msg__msg__MediaPipeHumanHandList__FIELDS, 2, 2},
    },
    {mpros2_msg__msg__MediaPipeHumanHandList__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&mpros2_msg__msg__HandPoint__EXPECTED_HASH, mpros2_msg__msg__HandPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mpros2_msg__msg__HandPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mpros2_msg__msg__MediaPipeHumanHand__EXPECTED_HASH, mpros2_msg__msg__MediaPipeHumanHand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mpros2_msg__msg__MediaPipeHumanHand__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_humans\n"
  "MediaPipeHumanHand human_hand_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanHandList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__MediaPipeHumanHandList__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanHandList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__MediaPipeHumanHandList__get_individual_type_description_source(NULL),
    sources[1] = *mpros2_msg__msg__HandPoint__get_individual_type_description_source(NULL);
    sources[2] = *mpros2_msg__msg__MediaPipeHumanHand__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
