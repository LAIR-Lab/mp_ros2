// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/pose_point.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__POSE_POINT__TRAITS_HPP_
#define mpros2_MSG__MSG__DETAIL__POSE_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mpros2_msg/msg/detail/pose_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mpros2_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PosePoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: visibility
  {
    out << "visibility: ";
    rosidl_generator_traits::value_to_yaml(msg.visibility, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: visibility
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visibility: ";
    rosidl_generator_traits::value_to_yaml(msg.visibility, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosePoint & msg, bool use_flow_style = false)
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
  const mpros2_msg::msg::PosePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  mpros2_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mpros2_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const mpros2_msg::msg::PosePoint & msg)
{
  return mpros2_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mpros2_msg::msg::PosePoint>()
{
  return "mpros2_msg::msg::PosePoint";
}

template<>
inline const char * name<mpros2_msg::msg::PosePoint>()
{
  return "mpros2_msg/msg/PosePoint";
}

template<>
struct has_fixed_size<mpros2_msg::msg::PosePoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mpros2_msg::msg::PosePoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mpros2_msg::msg::PosePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // mpros2_MSG__MSG__DETAIL__POSE_POINT__TRAITS_HPP_
