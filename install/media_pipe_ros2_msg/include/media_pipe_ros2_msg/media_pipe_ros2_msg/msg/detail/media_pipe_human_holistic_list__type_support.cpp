// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mpros2_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MediaPipeHumanHolisticList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mpros2_msg::msg::MediaPipeHumanHolisticList(_init);
}

void MediaPipeHumanHolisticList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mpros2_msg::msg::MediaPipeHumanHolisticList *>(message_memory);
  typed_message->~MediaPipeHumanHolisticList();
}

size_t size_function__MediaPipeHumanHolisticList__human_face_mesh_list(const void * untyped_member)
{
  (void)untyped_member;
  return 468;
}

const void * get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<mpros2_msg::msg::FaceMeshPoint, 468> *>(untyped_member);
  return &member[index];
}

void * get_function__MediaPipeHumanHolisticList__human_face_mesh_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<mpros2_msg::msg::FaceMeshPoint, 468> *>(untyped_member);
  return &member[index];
}

void fetch_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mpros2_msg::msg::FaceMeshPoint *>(
    get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list(untyped_member, index));
  auto & value = *reinterpret_cast<mpros2_msg::msg::FaceMeshPoint *>(untyped_value);
  value = item;
}

void assign_function__MediaPipeHumanHolisticList__human_face_mesh_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mpros2_msg::msg::FaceMeshPoint *>(
    get_function__MediaPipeHumanHolisticList__human_face_mesh_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const mpros2_msg::msg::FaceMeshPoint *>(untyped_value);
  item = value;
}

size_t size_function__MediaPipeHumanHolisticList__human_pose_list(const void * untyped_member)
{
  (void)untyped_member;
  return 33;
}

const void * get_const_function__MediaPipeHumanHolisticList__human_pose_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<mpros2_msg::msg::PosePoint, 33> *>(untyped_member);
  return &member[index];
}

void * get_function__MediaPipeHumanHolisticList__human_pose_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<mpros2_msg::msg::PosePoint, 33> *>(untyped_member);
  return &member[index];
}

void fetch_function__MediaPipeHumanHolisticList__human_pose_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mpros2_msg::msg::PosePoint *>(
    get_const_function__MediaPipeHumanHolisticList__human_pose_list(untyped_member, index));
  auto & value = *reinterpret_cast<mpros2_msg::msg::PosePoint *>(untyped_value);
  value = item;
}

void assign_function__MediaPipeHumanHolisticList__human_pose_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mpros2_msg::msg::PosePoint *>(
    get_function__MediaPipeHumanHolisticList__human_pose_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const mpros2_msg::msg::PosePoint *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MediaPipeHumanHolisticList_message_member_array[4] = {
  {
    "num_humans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHolisticList, num_humans),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "human_hand_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanHand>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHolisticList, human_hand_list),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "human_face_mesh_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mpros2_msg::msg::FaceMeshPoint>(),  // members of sub message
    false,  // is key
    true,  // is array
    468,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHolisticList, human_face_mesh_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // size() function pointer
    get_const_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // get_const(index) function pointer
    get_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // get(index) function pointer
    fetch_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // fetch(index, &value) function pointer
    assign_function__MediaPipeHumanHolisticList__human_face_mesh_list,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "human_pose_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mpros2_msg::msg::PosePoint>(),  // members of sub message
    false,  // is key
    true,  // is array
    33,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHolisticList, human_pose_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MediaPipeHumanHolisticList__human_pose_list,  // size() function pointer
    get_const_function__MediaPipeHumanHolisticList__human_pose_list,  // get_const(index) function pointer
    get_function__MediaPipeHumanHolisticList__human_pose_list,  // get(index) function pointer
    fetch_function__MediaPipeHumanHolisticList__human_pose_list,  // fetch(index, &value) function pointer
    assign_function__MediaPipeHumanHolisticList__human_pose_list,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MediaPipeHumanHolisticList_message_members = {
  "mpros2_msg::msg",  // message namespace
  "MediaPipeHumanHolisticList",  // message name
  4,  // number of fields
  sizeof(mpros2_msg::msg::MediaPipeHumanHolisticList),
  false,  // has_any_key_member_
  MediaPipeHumanHolisticList_message_member_array,  // message members
  MediaPipeHumanHolisticList_init_function,  // function to initialize message memory (memory has to be allocated)
  MediaPipeHumanHolisticList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MediaPipeHumanHolisticList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MediaPipeHumanHolisticList_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHolisticList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mpros2_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanHolisticList>()
{
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHolisticList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mpros2_msg, msg, MediaPipeHumanHolisticList)() {
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHolisticList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
