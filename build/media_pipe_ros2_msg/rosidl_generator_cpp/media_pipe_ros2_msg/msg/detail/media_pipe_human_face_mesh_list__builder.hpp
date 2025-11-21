// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from media_pipe_ros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "media_pipe_ros2_msg/msg/media_pipe_human_face_mesh_list.hpp"


#ifndef MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_
#define MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_face_mesh_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace media_pipe_ros2_msg
{

namespace msg
{

namespace builder
{

class Init_MediaPipeHumanFaceMeshList_human_face_mesh_list
{
public:
  explicit Init_MediaPipeHumanFaceMeshList_human_face_mesh_list(::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList & msg)
  : msg_(msg)
  {}
  ::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList human_face_mesh_list(::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList::_human_face_mesh_list_type arg)
  {
    msg_.human_face_mesh_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList msg_;
};

class Init_MediaPipeHumanFaceMeshList_num_humans
{
public:
  Init_MediaPipeHumanFaceMeshList_num_humans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MediaPipeHumanFaceMeshList_human_face_mesh_list num_humans(::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList::_num_humans_type arg)
  {
    msg_.num_humans = std::move(arg);
    return Init_MediaPipeHumanFaceMeshList_human_face_mesh_list(msg_);
  }

private:
  ::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::media_pipe_ros2_msg::msg::MediaPipeHumanFaceMeshList>()
{
  return media_pipe_ros2_msg::msg::builder::Init_MediaPipeHumanFaceMeshList_num_humans();
}

}  // namespace media_pipe_ros2_msg

#endif  // MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__BUILDER_HPP_
