// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand_list__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand_list__struct.hpp"
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

void MediaPipeHumanHandList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mpros2_msg::msg::MediaPipeHumanHandList(_init);
}

void MediaPipeHumanHandList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mpros2_msg::msg::MediaPipeHumanHandList *>(message_memory);
  typed_message->~MediaPipeHumanHandList();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MediaPipeHumanHandList_message_member_array[2] = {
  {
    "num_humans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg::msg::MediaPipeHumanHandList, num_humans),  // bytes offset in struct
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
    offsetof(mpros2_msg::msg::MediaPipeHumanHandList, human_hand_list),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MediaPipeHumanHandList_message_members = {
  "mpros2_msg::msg",  // message namespace
  "MediaPipeHumanHandList",  // message name
  2,  // number of fields
  sizeof(mpros2_msg::msg::MediaPipeHumanHandList),
  false,  // has_any_key_member_
  MediaPipeHumanHandList_message_member_array,  // message members
  MediaPipeHumanHandList_init_function,  // function to initialize message memory (memory has to be allocated)
  MediaPipeHumanHandList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MediaPipeHumanHandList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MediaPipeHumanHandList_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHandList__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHandList__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHandList__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mpros2_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanHandList>()
{
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHandList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mpros2_msg, msg, MediaPipeHumanHandList)() {
  return &::mpros2_msg::msg::rosidl_typesupport_introspection_cpp::MediaPipeHumanHandList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
