// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_hand__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mpros2_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.h"
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mpros2_msg/msg/detail/hand_point__functions.h"  // left_hand_key_points, right_hand_key_points

// forward declare type support functions

bool cdr_serialize_mpros2_msg__msg__HandPoint(
  const mpros2_msg__msg__HandPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mpros2_msg__msg__HandPoint(
  eprosima::fastcdr::Cdr & cdr,
  mpros2_msg__msg__HandPoint * ros_message);

size_t get_serialized_size_mpros2_msg__msg__HandPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mpros2_msg__msg__HandPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mpros2_msg__msg__HandPoint(
  const mpros2_msg__msg__HandPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mpros2_msg__msg__HandPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mpros2_msg__msg__HandPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mpros2_msg, msg, HandPoint)();


using _MediaPipeHumanHand__ros_msg_type = mpros2_msg__msg__MediaPipeHumanHand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_mpros2_msg__msg__MediaPipeHumanHand(
  const mpros2_msg__msg__MediaPipeHumanHand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: right_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->right_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mpros2_msg__msg__HandPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: left_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->left_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mpros2_msg__msg__HandPoint(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_deserialize_mpros2_msg__msg__MediaPipeHumanHand(
  eprosima::fastcdr::Cdr & cdr,
  mpros2_msg__msg__MediaPipeHumanHand * ros_message)
{
  // Field name: right_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->right_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mpros2_msg__msg__HandPoint(cdr, &array_ptr[i]);
    }
  }

  // Field name: left_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->left_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mpros2_msg__msg__HandPoint(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_mpros2_msg__msg__MediaPipeHumanHand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MediaPipeHumanHand__ros_msg_type * ros_message = static_cast<const _MediaPipeHumanHand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: right_hand_key_points
  {
    size_t array_size = 21;
    auto array_ptr = ros_message->right_hand_key_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mpros2_msg__msg__HandPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: left_hand_key_points
  {
    size_t array_size = 21;
    auto array_ptr = ros_message->left_hand_key_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mpros2_msg__msg__HandPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_mpros2_msg__msg__MediaPipeHumanHand(
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

  // Field name: right_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mpros2_msg__msg__HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mpros2_msg__msg__HandPoint(
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
    using DataType = mpros2_msg__msg__MediaPipeHumanHand;
    is_plain =
      (
      offsetof(DataType, left_hand_key_points) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
bool cdr_serialize_key_mpros2_msg__msg__MediaPipeHumanHand(
  const mpros2_msg__msg__MediaPipeHumanHand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: right_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->right_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mpros2_msg__msg__HandPoint(
        &array_ptr[i], cdr);
    }
  }

  // Field name: left_hand_key_points
  {
    size_t size = 21;
    auto array_ptr = ros_message->left_hand_key_points;
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mpros2_msg__msg__HandPoint(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t get_serialized_size_key_mpros2_msg__msg__MediaPipeHumanHand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MediaPipeHumanHand__ros_msg_type * ros_message = static_cast<const _MediaPipeHumanHand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: right_hand_key_points
  {
    size_t array_size = 21;
    auto array_ptr = ros_message->right_hand_key_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mpros2_msg__msg__HandPoint(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: left_hand_key_points
  {
    size_t array_size = 21;
    auto array_ptr = ros_message->left_hand_key_points;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mpros2_msg__msg__HandPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mpros2_msg
size_t max_serialized_size_key_mpros2_msg__msg__MediaPipeHumanHand(
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
  // Field name: right_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mpros2_msg__msg__HandPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: left_hand_key_points
  {
    size_t array_size = 21;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_mpros2_msg__msg__HandPoint(
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
    using DataType = mpros2_msg__msg__MediaPipeHumanHand;
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
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mpros2_msg__msg__MediaPipeHumanHand * ros_message = static_cast<const mpros2_msg__msg__MediaPipeHumanHand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mpros2_msg__msg__MediaPipeHumanHand(ros_message, cdr);
}

static bool _MediaPipeHumanHand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mpros2_msg__msg__MediaPipeHumanHand * ros_message = static_cast<mpros2_msg__msg__MediaPipeHumanHand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mpros2_msg__msg__MediaPipeHumanHand(cdr, ros_message);
}

static uint32_t _MediaPipeHumanHand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mpros2_msg__msg__MediaPipeHumanHand(
      untyped_ros_message, 0));
}

static size_t _MediaPipeHumanHand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mpros2_msg__msg__MediaPipeHumanHand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MediaPipeHumanHand = {
  "mpros2_msg::msg",
  "MediaPipeHumanHand",
  _MediaPipeHumanHand__cdr_serialize,
  _MediaPipeHumanHand__cdr_deserialize,
  _MediaPipeHumanHand__get_serialized_size,
  _MediaPipeHumanHand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MediaPipeHumanHand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MediaPipeHumanHand,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanHand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mpros2_msg, msg, MediaPipeHumanHand)() {
  return &_MediaPipeHumanHand__type_support;
}

#if defined(__cplusplus)
}
#endif
