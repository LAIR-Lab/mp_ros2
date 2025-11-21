// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from media_pipe_ros2_msg:msg/FaceMeshPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "media_pipe_ros2_msg/msg/face_mesh_point.hpp"


#ifndef MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_
#define MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "media_pipe_ros2_msg/msg/detail/face_mesh_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace media_pipe_ros2_msg
{

namespace msg
{

namespace builder
{

class Init_FaceMeshPoint_z
{
public:
  explicit Init_FaceMeshPoint_z(::media_pipe_ros2_msg::msg::FaceMeshPoint & msg)
  : msg_(msg)
  {}
  ::media_pipe_ros2_msg::msg::FaceMeshPoint z(::media_pipe_ros2_msg::msg::FaceMeshPoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::media_pipe_ros2_msg::msg::FaceMeshPoint msg_;
};

class Init_FaceMeshPoint_y
{
public:
  explicit Init_FaceMeshPoint_y(::media_pipe_ros2_msg::msg::FaceMeshPoint & msg)
  : msg_(msg)
  {}
  Init_FaceMeshPoint_z y(::media_pipe_ros2_msg::msg::FaceMeshPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FaceMeshPoint_z(msg_);
  }

private:
  ::media_pipe_ros2_msg::msg::FaceMeshPoint msg_;
};

class Init_FaceMeshPoint_x
{
public:
  Init_FaceMeshPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceMeshPoint_y x(::media_pipe_ros2_msg::msg::FaceMeshPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FaceMeshPoint_y(msg_);
  }

private:
  ::media_pipe_ros2_msg::msg::FaceMeshPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::media_pipe_ros2_msg::msg::FaceMeshPoint>()
{
  return media_pipe_ros2_msg::msg::builder::Init_FaceMeshPoint_x();
}

}  // namespace media_pipe_ros2_msg

#endif  // MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_
