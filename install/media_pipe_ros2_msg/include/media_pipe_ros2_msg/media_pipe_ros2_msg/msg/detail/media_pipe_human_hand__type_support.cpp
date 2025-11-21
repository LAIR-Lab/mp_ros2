// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.hpp"
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

void MediaPipeHumanHand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mpros2_msg::msg::MediaPipeHumanHand(_init);
}

void MediaPipeHumanHand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mpros2_msg::msg::MediaPipeHumanHand *>(message_memory);
  typed_message->~MediaPipeHumanHand();
}

size_t size_function__MediaPipeHumanHand__right_hand_key_points(const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * get_const_function__MediaPipeHumanHand__right_hand_key_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<mpros2_msg::msg::HandPoint, 21> *>(untyped_member);
  return &member[index];
}

void * get_function__MediaPipeHumanHand__right_hand_key_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<mpros2_msg::msg::HandPoint, 21> *>(untyped_member);
  return &member[index];
}

void fetch_function__MediaPipeHumanHand__right_hand_key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mpros2_msg::msg::HandPoint *>(
    get_const_function__MediaPipeHumanHand__right_hand_key_points(untyped_member, index));
  auto & value = *reinterpret_cast<mpros2_msg::msg::HandPoint *>(untyped_value);
  value = item;
}

void assign_function__MediaPipeHumanHand__right_hand_key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mpros2_msg::msg::HandPoint *>(
    get_function__MediaPipeHumanHand__right_hand_key_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const mpros2_msg::msg::HandPoint *>(untyped_value);
  item = value;
}

size_t size_function__MediaPipeHumanHand__left_hand_key_points(const void * untyped_member)
{
  (void)untyped_member;
  return 21;
}

const void * get_const_function__MediaPipeHumanHand__left_hand_key_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<mpros2_msg::msg::HandPoint, 21> *>(untyped_member);
  return &member[index];
}

void * get_function__MediaPipeHumanHand__left_hand_key_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<mpros2_msg::msg::HandPoint, 21> *>(untyped_member);
  return &member[index];
}

void fetch_function__MediaPipeHumanHand__left_hand_key_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mpros2_msg::msg::HandPoint *>(
    get_const_function__MediaPipeHumanHand__left_hand_key_points(untyped_member, index));
  auto & value = *reinterpret_cast<mpros2_msg::msg::HandPoint *>(untyped_value);
  value = item;
}

void assign_function__MediaPipeHumanHand__left_hand_key_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mpros2_msg::msg::HandPoint *>(
    get_function__MediaPipeHumanHand__left_hand_key_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const mpros2_msg::msg::HandPoint *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MediaPipeHumanHand_message_member_array[2] = {
  {
    "right_hand_key_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mpros2_msg::msg::HandPoint>(),  // members of sub message
    false,  // is key
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHand, right_hand_key_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__MediaPipeHumanHand__right_hand_key_points,  // size() function pointer
    get_const_function__MediaPipeHumanHand__right_hand_key_points,  // get_const(index) function pointer
    get_function__MediaPipeHumanHand__right_hand_key_points,  // get(index) function pointer
    fetch_function__MediaPipeHumanHand__right_hand_key_points,  // fetch(index, &value) function pointer
    assign_function__MediaPipeHumanHand__right_hand_key_points,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_hand_key_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mpros2_msg::msg::HandPoint>(),  // members of sub message
    false,  // is key
    true,  // is array
    21,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHand, left_hand_key_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__MediaPipeHumanHand__left_hand_key_points,  // size() function pointer
    get_const_function__MediaPipeHumanHand__left_hand_key_points,  // get_const(index) function pointer
    get_function__MediaPipeHumanHand__left_hand_key_points,  // get(index) function pointer
    fetch_function__MediaPipeHumanHand__left_hand_key_points,  // fetch(index, &value) function pointer
    assign_function__MediaPipeHumanHand__left_hand_key_points,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MediaPipeHumanHand_message_members = {
  "mpros2_msg::msg",  // message namespace
  "MediaPipeHumanHand",  // message name
  2,  // number of fields
  sizeof(mpros2_msg::msg::MediaPipeHumanHand),
  false,  // has_any_key_member_
  MediaPipeHumanHand_message_member_array,  // message members
  MediaPipeHumanHand_init_function,  // function to initialize message memory (memory has to be allocated)
  MediaPipeHumanHand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MediaPipeHumanHand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MediaPipeHumanHand_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mpros2_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanHand>()
{
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mpros2_msg, msg, MediaPipeHumanHand)() {
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
