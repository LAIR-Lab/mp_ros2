// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x5e, 0x30, 0x7c, 0xee, 0x8d, 0xe8, 0x06,
      0x22, 0x42, 0x68, 0x15, 0x82, 0x43, 0x72, 0xae,
      0x25, 0x0a, 0x0d, 0x76, 0x94, 0xc4, 0x2d, 0xfd,
      0xf3, 0xde, 0x2b, 0x73, 0xfd, 0x7c, 0xd6, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "mpros2_msg/msg/detail/pose_point__functions.h"
#include "mpros2_msg/msg/detail/face_mesh_point__functions.h"
#include "mpros2_msg/msg/detail/hand_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mpros2_msg__msg__FaceMeshPoint__EXPECTED_HASH = {1, {
    0x68, 0x0c, 0x3b, 0x60, 0x4b, 0xee, 0x34, 0x42,
    0x88, 0x76, 0x50, 0x76, 0xcf, 0x30, 0xb2, 0x6f,
    0x1f, 0xa9, 0x0e, 0xaf, 0x1b, 0xad, 0xc5, 0x15,
    0xf0, 0xc0, 0xa1, 0x5f, 0x9c, 0x75, 0x68, 0x1e,
  }};
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
static const rosidl_type_hash_t mpros2_msg__msg__PosePoint__EXPECTED_HASH = {1, {
    0x2a, 0xa5, 0x01, 0x55, 0x77, 0xd0, 0x4d, 0x27,
    0x14, 0x82, 0x19, 0x63, 0x50, 0x25, 0x1f, 0x08,
    0x95, 0x9e, 0x28, 0x17, 0x32, 0x35, 0xbc, 0x7d,
    0x79, 0x21, 0x2a, 0x78, 0x9d, 0x01, 0x74, 0xfc,
  }};
#endif

static char mpros2_msg__msg__MediaPipeHumanHolisticList__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanHolisticList";
static char mpros2_msg__msg__FaceMeshPoint__TYPE_NAME[] = "mpros2_msg/msg/FaceMeshPoint";
static char mpros2_msg__msg__HandPoint__TYPE_NAME[] = "mpros2_msg/msg/HandPoint";
static char mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanHand";
static char mpros2_msg__msg__PosePoint__TYPE_NAME[] = "mpros2_msg/msg/PosePoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__num_humans[] = "num_humans";
static char mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_hand_list[] = "human_hand_list";
static char mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_face_mesh_list[] = "human_face_mesh_list";
static char mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_pose_list[] = "human_pose_list";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__MediaPipeHumanHolisticList__FIELDS[] = {
  {
    {mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__num_humans, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_hand_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_face_mesh_list, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      468,
      0,
      {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHolisticList__FIELD_NAME__human_pose_list, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      33,
      0,
      {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mpros2_msg__msg__MediaPipeHumanHolisticList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__HandPoint__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanHand__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__PosePoint__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__MediaPipeHumanHolisticList__TYPE_NAME, 50, 50},
      {mpros2_msg__msg__MediaPipeHumanHolisticList__FIELDS, 4, 4},
    },
    {mpros2_msg__msg__MediaPipeHumanHolisticList__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&mpros2_msg__msg__FaceMeshPoint__EXPECTED_HASH, mpros2_msg__msg__FaceMeshPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mpros2_msg__msg__FaceMeshPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mpros2_msg__msg__HandPoint__EXPECTED_HASH, mpros2_msg__msg__HandPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = mpros2_msg__msg__HandPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mpros2_msg__msg__MediaPipeHumanHand__EXPECTED_HASH, mpros2_msg__msg__MediaPipeHumanHand__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = mpros2_msg__msg__MediaPipeHumanHand__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&mpros2_msg__msg__PosePoint__EXPECTED_HASH, mpros2_msg__msg__PosePoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = mpros2_msg__msg__PosePoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_humans\n"
  "MediaPipeHumanHand human_hand_list\n"
  "FaceMeshPoint[468] human_face_mesh_list\n"
  "PosePoint[33] human_pose_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__MediaPipeHumanHolisticList__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 121, 121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__MediaPipeHumanHolisticList__get_individual_type_description_source(NULL),
    sources[1] = *mpros2_msg__msg__FaceMeshPoint__get_individual_type_description_source(NULL);
    sources[2] = *mpros2_msg__msg__HandPoint__get_individual_type_description_source(NULL);
    sources[3] = *mpros2_msg__msg__MediaPipeHumanHand__get_individual_type_description_source(NULL);
    sources[4] = *mpros2_msg__msg__PosePoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
