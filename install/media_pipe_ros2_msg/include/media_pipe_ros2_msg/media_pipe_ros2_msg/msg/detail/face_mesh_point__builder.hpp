// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/FaceMeshPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/face_mesh_point.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/face_mesh_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_FaceMeshPoint_z
{
public:
  explicit Init_FaceMeshPoint_z(::mpros2_msg::msg::FaceMeshPoint & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::FaceMeshPoint z(::mpros2_msg::msg::FaceMeshPoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::FaceMeshPoint msg_;
};

class Init_FaceMeshPoint_y
{
public:
  explicit Init_FaceMeshPoint_y(::mpros2_msg::msg::FaceMeshPoint & msg)
  : msg_(msg)
  {}
  Init_FaceMeshPoint_z y(::mpros2_msg::msg::FaceMeshPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FaceMeshPoint_z(msg_);
  }

private:
  ::mpros2_msg::msg::FaceMeshPoint msg_;
};

class Init_FaceMeshPoint_x
{
public:
  Init_FaceMeshPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaceMeshPoint_y x(::mpros2_msg::msg::FaceMeshPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FaceMeshPoint_y(msg_);
  }

private:
  ::mpros2_msg::msg::FaceMeshPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::FaceMeshPoint>()
{
  return mpros2_msg::msg::builder::Init_FaceMeshPoint_x();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__FACE_MESH_POINT__BUILDER_HPP_
