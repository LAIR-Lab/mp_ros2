// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice
#ifndef mpros2_MSG__MSG__DETAIL__POSE_POINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define mpros2_MSG__MSG__DETAIL__POSE_POINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mpros2_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mpros2_msg/msg/detail/pose_point__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_mpros2_msg__msg__PosePoint(
  const mpros2_msg__msg__PosePoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_deserialize_mpros2_msg__msg__PosePoint(
  eprosima::fastcdr::Cdr &,
  mpros2_msg__msg__PosePoint * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_mpros2_msg__msg__PosePoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_mpros2_msg__msg__PosePoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_key_mpros2_msg__msg__PosePoint(
  const mpros2_msg__msg__PosePoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_key_mpros2_msg__msg__PosePoint(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_key_mpros2_msg__msg__PosePoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mpros2_msg, msg, PosePoint)();

#ifdef __cplusplus
}
#endif

#endif  // mpros2_MSG__MSG__DETAIL__POSE_POINT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
