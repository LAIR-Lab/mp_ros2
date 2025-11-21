// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__rosidl_typesupport_introspection_c.h"
#include "mpros2_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__struct.h"


// Include directives for member types
// Member `human_hand_list`
#include "mpros2_msg/msg/media_pipe_human_hand.h"
// Member `human_hand_list`
#include "mpros2_msg/msg/detail/media_pipe_human_hand__rosidl_typesupport_introspection_c.h"
// Member `human_face_mesh_list`
#include "mpros2_msg/msg/face_mesh_point.h"
// Member `human_face_mesh_list`
#include "mpros2_msg/msg/detail/face_mesh_point__rosidl_typesupport_introspection_c.h"
// Member `human_pose_list`
#include "mpros2_msg/msg/pose_point.h"
// Member `human_pose_list`
#include "mpros2_msg/msg/detail/pose_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mpros2_msg__msg__MediaPipeHumanHolisticList__init(message_memory);
}

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_fini_function(void * message_memory)
{
  mpros2_msg__msg__MediaPipeHumanHolisticList__fini(message_memory);
}

size_t mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  const void * untyped_member)
{
  (void)untyped_member;
  return 468;
}

const void * mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  const void * untyped_member, size_t index)
{
  const mpros2_msg__msg__FaceMeshPoint * member =
    (const mpros2_msg__msg__FaceMeshPoint *)(untyped_member);
  return &member[index];
}

void * mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  void * untyped_member, size_t index)
{
  mpros2_msg__msg__FaceMeshPoint * member =
    (mpros2_msg__msg__FaceMeshPoint *)(untyped_member);
  return &member[index];
}

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mpros2_msg__msg__FaceMeshPoint * item =
    ((const mpros2_msg__msg__FaceMeshPoint *)
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list(untyped_member, index));
  mpros2_msg__msg__FaceMeshPoint * value =
    (mpros2_msg__msg__FaceMeshPoint *)(untyped_value);
  *value = *item;
}

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mpros2_msg__msg__FaceMeshPoint * item =
    ((mpros2_msg__msg__FaceMeshPoint *)
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_face_mesh_list(untyped_member, index));
  const mpros2_msg__msg__FaceMeshPoint * value =
    (const mpros2_msg__msg__FaceMeshPoint *)(untyped_value);
  *item = *value;
}

size_t mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHolisticList__human_pose_list(
  const void * untyped_member)
{
  (void)untyped_member;
  return 33;
}

const void * mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_pose_list(
  const void * untyped_member, size_t index)
{
  const mpros2_msg__msg__PosePoint * member =
    (const mpros2_msg__msg__PosePoint *)(untyped_member);
  return &member[index];
}

void * mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_pose_list(
  void * untyped_member, size_t index)
{
  mpros2_msg__msg__PosePoint * member =
    (mpros2_msg__msg__PosePoint *)(untyped_member);
  return &member[index];
}

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHolisticList__human_pose_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mpros2_msg__msg__PosePoint * item =
    ((const mpros2_msg__msg__PosePoint *)
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_pose_list(untyped_member, index));
  mpros2_msg__msg__PosePoint * value =
    (mpros2_msg__msg__PosePoint *)(untyped_value);
  *value = *item;
}

void mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHolisticList__human_pose_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mpros2_msg__msg__PosePoint * item =
    ((mpros2_msg__msg__PosePoint *)
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_pose_list(untyped_member, index));
  const mpros2_msg__msg__PosePoint * value =
    (const mpros2_msg__msg__PosePoint *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_member_array[4] = {
  {
    "num_humans",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHolisticList, num_humans),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "human_hand_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHolisticList, human_hand_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "human_face_mesh_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    468,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHolisticList, human_face_mesh_list),  // bytes offset in struct
    NULL,  // default value
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // size() function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // get_const(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // get(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // fetch(index, &value) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "human_pose_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    33,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHolisticList, human_pose_list),  // bytes offset in struct
    NULL,  // default value
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHolisticList__human_pose_list,  // size() function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHolisticList__human_pose_list,  // get_const(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHolisticList__human_pose_list,  // get(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHolisticList__human_pose_list,  // fetch(index, &value) function pointer
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHolisticList__human_pose_list,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_members = {
  "mpros2_msg__msg",  // message namespace
  "MediaPipeHumanHolisticList",  // message name
  4,  // number of fields
  sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList),
  false,  // has_any_key_member_
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_member_array,  // message members
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_init_function,  // function to initialize message memory (memory has to be allocated)
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_type_support_handle = {
  0,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mpros2_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, MediaPipeHumanHolisticList)() {
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, MediaPipeHumanHand)();
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, FaceMeshPoint)();
  mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, PosePoint)();
  if (!mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_type_support_handle.typesupport_identifier) {
    mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mpros2_msg__msg__MediaPipeHumanHolisticList__rosidl_typesupport_introspection_c__MediaPipeHumanHolisticList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
