// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_pose_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/media_pipe_human_pose_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_MediaPipeHumanPoseList_human_pose_list
{
public:
  explicit Init_MediaPipeHumanPoseList_human_pose_list(::mpros2_msg::msg::MediaPipeHumanPoseList & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::MediaPipeHumanPoseList human_pose_list(::mpros2_msg::msg::MediaPipeHumanPoseList::_human_pose_list_type arg)
  {
    msg_.human_pose_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanPoseList msg_;
};

class Init_MediaPipeHumanPoseList_num_humans
{
public:
  Init_MediaPipeHumanPoseList_num_humans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MediaPipeHumanPoseList_human_pose_list num_humans(::mpros2_msg::msg::MediaPipeHumanPoseList::_num_humans_type arg)
  {
    msg_.num_humans = std::move(arg);
    return Init_MediaPipeHumanPoseList_human_pose_list(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanPoseList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::MediaPipeHumanPoseList>()
{
  return mpros2_msg::msg::builder::Init_MediaPipeHumanPoseList_num_humans();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__BUILDER_HPP_
