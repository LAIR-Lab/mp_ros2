// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice
#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mpros2_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_mpros2_msg__msg__MediaPipeHumanPoseList(
  const mpros2_msg__msg__MediaPipeHumanPoseList * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_deserialize_mpros2_msg__msg__MediaPipeHumanPoseList(
  eprosima::fastcdr::Cdr &,
  mpros2_msg__msg__MediaPipeHumanPoseList * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_mpros2_msg__msg__MediaPipeHumanPoseList(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_mpros2_msg__msg__MediaPipeHumanPoseList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_key_mpros2_msg__msg__MediaPipeHumanPoseList(
  const mpros2_msg__msg__MediaPipeHumanPoseList * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_key_mpros2_msg__msg__MediaPipeHumanPoseList(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_key_mpros2_msg__msg__MediaPipeHumanPoseList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mpros2_msg, msg, MediaPipeHumanPoseList)();

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
