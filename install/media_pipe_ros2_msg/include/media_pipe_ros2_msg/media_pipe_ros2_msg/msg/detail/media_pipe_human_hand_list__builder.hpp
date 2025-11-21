// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/media_pipe_human_hand_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_MediaPipeHumanHandList_human_hand_list
{
public:
  explicit Init_MediaPipeHumanHandList_human_hand_list(::mpros2_msg::msg::MediaPipeHumanHandList & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::MediaPipeHumanHandList human_hand_list(::mpros2_msg::msg::MediaPipeHumanHandList::_human_hand_list_type arg)
  {
    msg_.human_hand_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanHandList msg_;
};

class Init_MediaPipeHumanHandList_num_humans
{
public:
  Init_MediaPipeHumanHandList_num_humans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MediaPipeHumanHandList_human_hand_list num_humans(::mpros2_msg::msg::MediaPipeHumanHandList::_num_humans_type arg)
  {
    msg_.num_humans = std::move(arg);
    return Init_MediaPipeHumanHandList_human_hand_list(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanHandList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::MediaPipeHumanHandList>()
{
  return mpros2_msg::msg::builder::Init_MediaPipeHumanHandList_num_humans();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__BUILDER_HPP_
