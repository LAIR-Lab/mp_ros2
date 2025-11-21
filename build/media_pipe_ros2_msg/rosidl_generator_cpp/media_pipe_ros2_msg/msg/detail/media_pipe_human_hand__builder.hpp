// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_MediaPipeHumanHand_left_hand_key_points
{
public:
  explicit Init_MediaPipeHumanHand_left_hand_key_points(::mpros2_msg::msg::MediaPipeHumanHand & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::MediaPipeHumanHand left_hand_key_points(::mpros2_msg::msg::MediaPipeHumanHand::_left_hand_key_points_type arg)
  {
    msg_.left_hand_key_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanHand msg_;
};

class Init_MediaPipeHumanHand_right_hand_key_points
{
public:
  Init_MediaPipeHumanHand_right_hand_key_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MediaPipeHumanHand_left_hand_key_points right_hand_key_points(::mpros2_msg::msg::MediaPipeHumanHand::_right_hand_key_points_type arg)
  {
    msg_.right_hand_key_points = std::move(arg);
    return Init_MediaPipeHumanHand_left_hand_key_points(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanHand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::MediaPipeHumanHand>()
{
  return mpros2_msg::msg::builder::Init_MediaPipeHumanHand_right_hand_key_points();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__BUILDER_HPP_
