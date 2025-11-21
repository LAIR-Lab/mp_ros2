// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__TRAITS_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpros2_msg/msg/detail/media_pipe_human_hand_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'human_hand_list'
#include "mpros2_msg/msg/detail/media_pipe_human_hand__traits.hpp"

namespace mpros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MediaPipeHumanHandList & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MediaPipeHumanHandList & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MediaPipeHumanHandList & msg, bool use_flow_style = false)
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
  const mpros2_msg::msg::MediaPipeHumanHandList & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpros2_msg::msg::MediaPipeHumanHandList & msg)
{
  return mpros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpros2_msg::msg::MediaPipeHumanHandList>()
{
  return "mpros2_msg::msg::MediaPipeHumanHandList";
}

template<>
inline const char * name<mpros2_msg::msg::MediaPipeHumanHandList>()
{
  return "mpros2_msg/msg/MediaPipeHumanHandList";
}

template<>
struct has_fixed_size<mpros2_msg::msg::MediaPipeHumanHandList>
  : std::integral_constant<bool, has_fixed_size<mpros2_msg::msg::MediaPipeHumanHand>::value> {};

template<>
struct has_bounded_size<mpros2_msg::msg::MediaPipeHumanHandList>
  : std::integral_constant<bool, has_bounded_size<mpros2_msg::msg::MediaPipeHumanHand>::value> {};

template<>
struct is_message<mpros2_msg::msg::MediaPipeHumanHandList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__TRAITS_HPP_
