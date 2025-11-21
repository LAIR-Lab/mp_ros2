// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_holistic_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__TRAITS_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'human_hand_list'
#include "mpros2_msg/msg/detail/media_pipe_human_hand__traits.hpp"
// Member 'human_face_mesh_list'
#include "mpros2_msg/msg/detail/face_mesh_point__traits.hpp"
// Member 'human_pose_list'
#include "mpros2_msg/msg/detail/pose_point__traits.hpp"

namespace mpros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MediaPipeHumanHolisticList & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_humans
  {
    out << "num_humans: ";
    rosidl_generator_traits::value_to_yaml(msg.num_humans, out);
    out << ", ";
  }

  // member: human_hand_list
  {
    out << "human_hand_list: ";
    to_flow_style_yaml(msg.human_hand_list, out);
    out << ", ";
  }

  // member: human_face_mesh_list
  {
    if (msg.human_face_mesh_list.size() == 0) {
      out << "human_face_mesh_list: []";
    } else {
      out << "human_face_mesh_list: [";
      size_t pending_items = msg.human_face_mesh_list.size();
      for (auto item : msg.human_face_mesh_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const MediaPipeHumanHolisticList & msg,
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

  // member: human_hand_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_hand_list:\n";
    to_block_style_yaml(msg.human_hand_list, out, indentation + 2);
  }

  // member: human_face_mesh_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.human_face_mesh_list.size() == 0) {
      out << "human_face_mesh_list: []\n";
    } else {
      out << "human_face_mesh_list:\n";
      for (auto item : msg.human_face_mesh_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const MediaPipeHumanHolisticList & msg, bool use_flow_style = false)
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
  const mpros2_msg::msg::MediaPipeHumanHolisticList & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpros2_msg::msg::MediaPipeHumanHolisticList & msg)
{
  return mpros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpros2_msg::msg::MediaPipeHumanHolisticList>()
{
  return "mpros2_msg::msg::MediaPipeHumanHolisticList";
}

template<>
inline const char * name<mpros2_msg::msg::MediaPipeHumanHolisticList>()
{
  return "mpros2_msg/msg/MediaPipeHumanHolisticList";
}

template<>
struct has_fixed_size<mpros2_msg::msg::MediaPipeHumanHolisticList>
  : std::integral_constant<bool, has_fixed_size<mpros2_msg::msg::FaceMeshPoint>::value && has_fixed_size<mpros2_msg::msg::MediaPipeHumanHand>::value && has_fixed_size<mpros2_msg::msg::PosePoint>::value> {};

template<>
struct has_bounded_size<mpros2_msg::msg::MediaPipeHumanHolisticList>
  : std::integral_constant<bool, has_bounded_size<mpros2_msg::msg::FaceMeshPoint>::value && has_bounded_size<mpros2_msg::msg::MediaPipeHumanHand>::value && has_bounded_size<mpros2_msg::msg::PosePoint>::value> {};

template<>
struct is_message<mpros2_msg::msg::MediaPipeHumanHolisticList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__TRAITS_HPP_
