// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_pose_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__TRAITS_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'human_pose_list'
#include "mpros2_msg/msg/detail/pose_point__traits.hpp"

namespace mpros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MediaPipeHumanPoseList & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_humans
  {
    out << "num_humans: ";
    rosidl_generator_traits::value_to_yaml(msg.num_humans, out);
    out << ", ";
  }

  // member: human_pose_list
  {
    if (msg.human_pose_list.size() == 0) {
      out << "human_pose_list: []";
    } else {
      out << "human_pose_list: [";
      size_t pending_items = msg.human_pose_list.size();
      for (auto item : msg.human_pose_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MediaPipeHumanPoseList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_humans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_humans: ";
    rosidl_generator_traits::value_to_yaml(msg.num_humans, out);
    out << "\n";
  }

  // member: human_pose_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.human_pose_list.size() == 0) {
      out << "human_pose_list: []\n";
    } else {
      out << "human_pose_list:\n";
      for (auto item : msg.human_pose_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MediaPipeHumanPoseList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mpros2_msg

namespace rosidl_generator_traits
{

[[deprecated("use mpros2_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mpros2_msg::msg::MediaPipeHumanPoseList & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpros2_msg::msg::MediaPipeHumanPoseList & msg)
{
  return mpros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpros2_msg::msg::MediaPipeHumanPoseList>()
{
  return "mpros2_msg::msg::MediaPipeHumanPoseList";
}

template<>
inline const char * name<mpros2_msg::msg::MediaPipeHumanPoseList>()
{
  return "mpros2_msg/msg/MediaPipeHumanPoseList";
}

template<>
struct has_fixed_size<mpros2_msg::msg::MediaPipeHumanPoseList>
  : std::integral_constant<bool, has_fixed_size<mpros2_msg::msg::PosePoint>::value> {};

template<>
struct has_bounded_size<mpros2_msg::msg::MediaPipeHumanPoseList>
  : std::integral_constant<bool, has_bounded_size<mpros2_msg::msg::PosePoint>::value> {};

template<>
struct is_message<mpros2_msg::msg::MediaPipeHumanPoseList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__TRAITS_HPP_
