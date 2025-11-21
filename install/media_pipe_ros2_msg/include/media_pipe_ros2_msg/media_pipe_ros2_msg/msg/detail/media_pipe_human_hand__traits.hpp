// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__TRAITS_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'right_hand_key_points'
// Member 'left_hand_key_points'
#include "mpros2_msg/msg/detail/hand_point__traits.hpp"

namespace mpros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MediaPipeHumanHand & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_hand_key_points
  {
    if (msg.right_hand_key_points.size() == 0) {
      out << "right_hand_key_points: []";
    } else {
      out << "right_hand_key_points: [";
      size_t pending_items = msg.right_hand_key_points.size();
      for (auto item : msg.right_hand_key_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_hand_key_points
  {
    if (msg.left_hand_key_points.size() == 0) {
      out << "left_hand_key_points: []";
    } else {
      out << "left_hand_key_points: [";
      size_t pending_items = msg.left_hand_key_points.size();
      for (auto item : msg.left_hand_key_points) {
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
  const MediaPipeHumanHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_hand_key_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_hand_key_points.size() == 0) {
      out << "right_hand_key_points: []\n";
    } else {
      out << "right_hand_key_points:\n";
      for (auto item : msg.right_hand_key_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_hand_key_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_hand_key_points.size() == 0) {
      out << "left_hand_key_points: []\n";
    } else {
      out << "left_hand_key_points:\n";
      for (auto item : msg.left_hand_key_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MediaPipeHumanHand & msg, bool use_flow_style = false)
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
  const mpros2_msg::msg::MediaPipeHumanHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpros2_msg::msg::MediaPipeHumanHand & msg)
{
  return mpros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpros2_msg::msg::MediaPipeHumanHand>()
{
  return "mpros2_msg::msg::MediaPipeHumanHand";
}

template<>
inline const char * name<mpros2_msg::msg::MediaPipeHumanHand>()
{
  return "mpros2_msg/msg/MediaPipeHumanHand";
}

template<>
struct has_fixed_size<mpros2_msg::msg::MediaPipeHumanHand>
  : std::integral_constant<bool, has_fixed_size<mpros2_msg::msg::HandPoint>::value> {};

template<>
struct has_bounded_size<mpros2_msg::msg::MediaPipeHumanHand>
  : std::integral_constant<bool, has_bounded_size<mpros2_msg::msg::HandPoint>::value> {};

template<>
struct is_message<mpros2_msg::msg::MediaPipeHumanHand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__TRAITS_HPP_
