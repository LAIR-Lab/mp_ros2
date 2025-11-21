// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_face_mesh_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/media_pipe_human_face_mesh_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_MediaPipeHumanFaceMeshList_human_face_mesh_list
{
public:
  explicit Init_MediaPipeHumanFaceMeshList_human_face_mesh_list(::mpros2_msg::msg::MediaPipeHumanFaceMeshList & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::MediaPipeHumanFaceMeshList human_face_mesh_list(::mpros2_msg::msg::MediaPipeHumanFaceMeshList::_human_face_mesh_list_type arg)
  {
    msg_.human_face_mesh_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanFaceMeshList msg_;
};

class Init_MediaPipeHumanFaceMeshList_num_humans
{
public:
  Init_MediaPipeHumanFaceMeshList_num_humans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MediaPipeHumanFaceMeshList_human_face_mesh_list num_humans(::mpros2_msg::msg::MediaPipeHumanFaceMeshList::_num_humans_type arg)
  {
    msg_.num_humans = std::move(arg);
    return Init_MediaPipeHumanFaceMeshList_human_face_mesh_list(msg_);
  }

private:
  ::mpros2_msg::msg::MediaPipeHumanFaceMeshList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::MediaPipeHumanFaceMeshList>()
{
  return mpros2_msg::msg::builder::Init_MediaPipeHumanFaceMeshList_num_humans();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_
