// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mpros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice

#include "mpros2_msg/msg/detail/media_pipe_human_face_mesh_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mpros2_msg
const rosidl_type_hash_t *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0x2a, 0x71, 0x41, 0x65, 0x50, 0xd3, 0xbd,
      0x29, 0xd3, 0xcf, 0x45, 0x27, 0x13, 0x9f, 0xfe,
      0x49, 0xcb, 0x82, 0x8e, 0x7c, 0x6a, 0x98, 0x7b,
      0x6d, 0x0d, 0xf5, 0xfc, 0x00, 0x75, 0x46, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mpros2_msg/msg/detail/face_mesh_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mpros2_msg__msg__FaceMeshPoint__EXPECTED_HASH = {1, {
    0x68, 0x0c, 0x3b, 0x60, 0x4b, 0xee, 0x34, 0x42,
    0x88, 0x76, 0x50, 0x76, 0xcf, 0x30, 0xb2, 0x6f,
    0x1f, 0xa9, 0x0e, 0xaf, 0x1b, 0xad, 0xc5, 0x15,
    0xf0, 0xc0, 0xa1, 0x5f, 0x9c, 0x75, 0x68, 0x1e,
  }};
#endif

static char mpros2_msg__msg__MediaPipeHumanFaceMeshList__TYPE_NAME[] = "mpros2_msg/msg/MediaPipeHumanFaceMeshList";
static char mpros2_msg__msg__FaceMeshPoint__TYPE_NAME[] = "mpros2_msg/msg/FaceMeshPoint";

// Define type names, field names, and default values
static char mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELD_NAME__num_humans[] = "num_humans";
static char mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELD_NAME__human_face_mesh_list[] = "human_face_mesh_list";

static rosidl_runtime_c__type_description__Field mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELDS[] = {
  {
    {mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELD_NAME__num_humans, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELD_NAME__human_face_mesh_list, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_ARRAY,
      468,
      0,
      {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mpros2_msg__msg__MediaPipeHumanFaceMeshList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mpros2_msg__msg__FaceMeshPoint__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mpros2_msg__msg__MediaPipeHumanFaceMeshList__TYPE_NAME, 50, 50},
      {mpros2_msg__msg__MediaPipeHumanFaceMeshList__FIELDS, 2, 2},
    },
    {mpros2_msg__msg__MediaPipeHumanFaceMeshList__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mpros2_msg__msg__FaceMeshPoint__EXPECTED_HASH, mpros2_msg__msg__FaceMeshPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mpros2_msg__msg__FaceMeshPoint__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num_humans\n"
  "FaceMeshPoint[468] human_face_mesh_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mpros2_msg__msg__MediaPipeHumanFaceMeshList__TYPE_NAME, 50, 50},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mpros2_msg__msg__MediaPipeHumanFaceMeshList__get_individual_type_description_source(NULL),
    sources[1] = *mpros2_msg__msg__FaceMeshPoint__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
