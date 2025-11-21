// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_hand__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mpros2_msg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mpros2_msg::msg::HandPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mpros2_msg::msg::HandPoint &);
size_t get_serialized_size(
  const mpros2_msg::msg::HandPoint &,
  size_t current_alignment);
size_t
max_serialized_size_HandPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mpros2_msg::msg::HandPoint &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mpros2_msg::msg::HandPoint &,
  size_t current_alignment);
size_t
max_serialized_size_key_HandPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mpros2_msg

// functions for mpros2_msg::msg::HandPoint already declared above


namespace mpros2_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_serialize(
  const mpros2_msg::msg::MediaPipeHumanHand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.right_hand_key_points[i],
        cdr);
    }
  }

  // Member: left_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.left_hand_key_points[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mpros2_msg::msg::MediaPipeHumanHand & ros_message)
{
  // Member: right_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.right_hand_key_points[i]);
    }
  }

  // Member: left_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.left_hand_key_points[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
get_serialized_size(
  const mpros2_msg::msg::MediaPipeHumanHand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_hand_key_points
  {
    size_t array_size = 21;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.right_hand_key_points[index], current_alignment);
    }
  }

  // Member: left_hand_key_points
  {
    size_t array_size = 21;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.left_hand_key_points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
max_serialized_size_MediaPipeHumanHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: left_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mpros2_msg::msg::MediaPipeHumanHand;
    is_plain =
      (
      offsetof(DataType, left_hand_key_points) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_serialize_key(
  const mpros2_msg::msg::MediaPipeHumanHand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.right_hand_key_points[i],
        cdr);
    }
  }

  // Member: left_hand_key_points
  {
    for (size_t i = 0; i < 21; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.left_hand_key_points[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
get_serialized_size_key(
  const mpros2_msg::msg::MediaPipeHumanHand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_hand_key_points
  {
    size_t array_size = 21;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.right_hand_key_points[index], current_alignment);
    }
  }

  // Member: left_hand_key_points
  {
    size_t array_size = 21;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.left_hand_key_points[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
max_serialized_size_key_MediaPipeHumanHand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: right_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_key_HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: left_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_key_HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mpros2_msg::msg::MediaPipeHumanHand;
    is_plain =
      (
      offsetof(DataType, left_hand_key_points) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MediaPipeHumanHand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mpros2_msg::msg::MediaPipeHumanHand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MediaPipeHumanHand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mpros2_msg::msg::MediaPipeHumanHand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MediaPipeHumanHand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mpros2_msg::msg::MediaPipeHumanHand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MediaPipeHumanHand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MediaPipeHumanHand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MediaPipeHumanHand__callbacks = {
  "mpros2_msg::msg",
  "MediaPipeHumanHand",
  _MediaPipeHumanHand__cdr_serialize,
  _MediaPipeHumanHand__cdr_deserialize,
  _MediaPipeHumanHand__get_serialized_size,
  _MediaPipeHumanHand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MediaPipeHumanHand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MediaPipeHumanHand__callbacks,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mpros2_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mpros2_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanHand>()
{
  return &mpros2_msg::msg::typesupport_fastrtps_cpp::_MediaPipeHumanHand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mpros2_msg, msg, MediaPipeHumanHand)() {
  return &mpros2_msg::msg::typesupport_fastrtps_cpp::_MediaPipeHumanHand__handle;
}

#ifdef __cplusplus
}
#endif
