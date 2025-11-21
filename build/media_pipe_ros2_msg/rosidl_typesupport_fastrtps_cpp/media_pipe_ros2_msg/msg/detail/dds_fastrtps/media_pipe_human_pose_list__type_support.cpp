// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__functions.h"
#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__struct.hpp"

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
  const mpros2_msg::msg::PosePoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mpros2_msg::msg::PosePoint &);
size_t get_serialized_size(
  const mpros2_msg::msg::PosePoint &,
  size_t current_alignment);
size_t
max_serialized_size_PosePoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const mpros2_msg::msg::PosePoint &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const mpros2_msg::msg::PosePoint &,
  size_t current_alignment);
size_t
max_serialized_size_key_PosePoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mpros2_msg


namespace mpros2_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_serialize(
  const mpros2_msg::msg::MediaPipeHumanPoseList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_humans
  cdr << ros_message.num_humans;

  // Member: human_pose_list
  {
    for (size_t i = 0; i < 33; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.human_pose_list[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mpros2_msg::msg::MediaPipeHumanPoseList & ros_message)
{
  // Member: num_humans
  cdr >> ros_message.num_humans;

  // Member: human_pose_list
  {
    for (size_t i = 0; i < 33; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.human_pose_list[i]);
    }
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
get_serialized_size(
  const mpros2_msg::msg::MediaPipeHumanPoseList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_humans
  {
    size_t item_size = sizeof(ros_message.num_humans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: human_pose_list
  {
    size_t array_size = 33;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.human_pose_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
max_serialized_size_MediaPipeHumanPoseList(
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

  // Member: num_humans
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: human_pose_list
  {
    size_t array_size = 33;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_PosePoint(
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
    using DataType = mpros2_msg::msg::MediaPipeHumanPoseList;
    is_plain =
      (
      offsetof(DataType, human_pose_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
cdr_serialize_key(
  const mpros2_msg::msg::MediaPipeHumanPoseList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_humans
  cdr << ros_message.num_humans;

  // Member: human_pose_list
  {
    for (size_t i = 0; i < 33; i++) {
      mpros2_msg::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.human_pose_list[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
get_serialized_size_key(
  const mpros2_msg::msg::MediaPipeHumanPoseList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_humans
  {
    size_t item_size = sizeof(ros_message.num_humans);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: human_pose_list
  {
    size_t array_size = 33;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mpros2_msg::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.human_pose_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mpros2_msg
max_serialized_size_key_MediaPipeHumanPoseList(
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

  // Member: num_humans
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: human_pose_list
  {
    size_t array_size = 33;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        mpros2_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_key_PosePoint(
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
    using DataType = mpros2_msg::msg::MediaPipeHumanPoseList;
    is_plain =
      (
      offsetof(DataType, human_pose_list) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _MediaPipeHumanPoseList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mpros2_msg::msg::MediaPipeHumanPoseList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MediaPipeHumanPoseList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mpros2_msg::msg::MediaPipeHumanPoseList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MediaPipeHumanPoseList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mpros2_msg::msg::MediaPipeHumanPoseList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MediaPipeHumanPoseList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MediaPipeHumanPoseList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MediaPipeHumanPoseList__callbacks = {
  "mpros2_msg::msg",
  "MediaPipeHumanPoseList",
  _MediaPipeHumanPoseList__cdr_serialize,
  _MediaPipeHumanPoseList__cdr_deserialize,
  _MediaPipeHumanPoseList__get_serialized_size,
  _MediaPipeHumanPoseList__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _MediaPipeHumanPoseList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MediaPipeHumanPoseList__callbacks,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__MediaPipeHumanPoseList__get_type_hash,
  &mpros2_msg__msg__MediaPipeHumanPoseList__get_type_description,
  &mpros2_msg__msg__MediaPipeHumanPoseList__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mpros2_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mpros2_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<mpros2_msg::msg::MediaPipeHumanPoseList>()
{
  return &mpros2_msg::msg::typesupport_fastrtps_cpp::_MediaPipeHumanPoseList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mpros2_msg, msg, MediaPipeHumanPoseList)() {
  return &mpros2_msg::msg::typesupport_fastrtps_cpp::_MediaPipeHumanPoseList__handle;
}

#ifdef __cplusplus
}
#endif
