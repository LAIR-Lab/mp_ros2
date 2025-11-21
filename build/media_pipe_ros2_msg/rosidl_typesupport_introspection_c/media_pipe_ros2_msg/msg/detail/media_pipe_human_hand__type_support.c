// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mpros2_msg/msg/detail/media_pipe_human_hand__rosidl_typesupport_introspection_c.h"
#include "mpros2_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.h"


// Include directives for member types
// Member `right_hand_key_points`
// Member `left_hand_key_points`
#include "mpros2_msg/msg/hand_point.h"
// Member `right_hand_key_points`
// Member `left_hand_key_points`
#include "mpros2_msg/msg/detail/hand_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mpros2_msg__msg__MediaPipeHumanHand__init(message_memory);
}

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_fini_function(void * message_memory)
{
  mpros2_msg__msg__MediaPipeHumanHand__fini(message_memory);
}

size_t mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHand__right_hand_key_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__right_hand_key_points(
  const void * untyped_member, size_t index)
{
  const mpros2_msg__msg__HandPoint * member =
    (const mpros2_msg__msg__HandPoint *)(untyped_member);
  return &member[index];
}

void * mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__right_hand_key_points(
  void * untyped_member, size_t index)
{
  mpros2_msg__msg__HandPoint * member =
    (mpros2_msg__msg__HandPoint *)(untyped_member);
  return &member[index];
}

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHand__right_hand_key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mpros2_msg__msg__HandPoint * item =
    ((const mpros2_msg__msg__HandPoint *)
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__right_hand_key_points(untyped_member, index));
  mpros2_msg__msg__HandPoint * value =
    (mpros2_msg__msg__HandPoint *)(untyped_value);
  *value = *item;
}

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHand__right_hand_key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mpros2_msg__msg__HandPoint * item =
    ((mpros2_msg__msg__HandPoint *)
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__right_hand_key_points(untyped_member, index));
  const mpros2_msg__msg__HandPoint * value =
    (const mpros2_msg__msg__HandPoint *)(untyped_value);
  *item = *value;
}

size_t mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHand__left_hand_key_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__left_hand_key_points(
  const void * untyped_member, size_t index)
{
  const mpros2_msg__msg__HandPoint * member =
    (const mpros2_msg__msg__HandPoint *)(untyped_member);
  return &member[index];
}

void * mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__left_hand_key_points(
  void * untyped_member, size_t index)
{
  mpros2_msg__msg__HandPoint * member =
    (mpros2_msg__msg__HandPoint *)(untyped_member);
  return &member[index];
}

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHand__left_hand_key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mpros2_msg__msg__HandPoint * item =
    ((const mpros2_msg__msg__HandPoint *)
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__left_hand_key_points(untyped_member, index));
  mpros2_msg__msg__HandPoint * value =
    (mpros2_msg__msg__HandPoint *)(untyped_value);
  *value = *item;
}

void mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHand__left_hand_key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mpros2_msg__msg__HandPoint * item =
    ((mpros2_msg__msg__HandPoint *)
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__left_hand_key_points(untyped_member, index));
  const mpros2_msg__msg__HandPoint * value =
    (const mpros2_msg__msg__HandPoint *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_member_array[2] = {
  {
    "right_hand_key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHand, right_hand_key_points),  // bytes offset in struct
    NULL,  // default value
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHand__right_hand_key_points,  // size() function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__right_hand_key_points,  // get_const(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__right_hand_key_points,  // get(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHand__right_hand_key_points,  // fetch(index, &value) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHand__right_hand_key_points,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_hand_key_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__MediaPipeHumanHand, left_hand_key_points),  // bytes offset in struct
    NULL,  // default value
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__size_function__MediaPipeHumanHand__left_hand_key_points,  // size() function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_const_function__MediaPipeHumanHand__left_hand_key_points,  // get_const(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__get_function__MediaPipeHumanHand__left_hand_key_points,  // get(index) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__fetch_function__MediaPipeHumanHand__left_hand_key_points,  // fetch(index, &value) function pointer
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__assign_function__MediaPipeHumanHand__left_hand_key_points,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_members = {
  "mpros2_msg__msg",  // message namespace
  "MediaPipeHumanHand",  // message name
  2,  // number of fields
  sizeof(mpros2_msg__msg__MediaPipeHumanHand),
  false,  // has_any_key_member_
  mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_member_array,  // message members
  mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_init_function,  // function to initialize message memory (memory has to be allocated)
  mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_type_support_handle = {
  0,
  &mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mpros2_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, MediaPipeHumanHand)() {
  mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, HandPoint)();
  mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, HandPoint)();
  if (!mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_type_support_handle.typesupport_identifier) {
    mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mpros2_msg__msg__MediaPipeHumanHand__rosidl_typesupport_introspection_c__MediaPipeHumanHand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
