// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/pose_point.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__POSE_POINT__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__POSE_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/pose_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_PosePoint_visibility
{
public:
  explicit Init_PosePoint_visibility(::mpros2_msg::msg::PosePoint & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::PosePoint visibility(::mpros2_msg::msg::PosePoint::_visibility_type arg)
  {
    msg_.visibility = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::PosePoint msg_;
};

class Init_PosePoint_z
{
public:
  explicit Init_PosePoint_z(::mpros2_msg::msg::PosePoint & msg)
  : msg_(msg)
  {}
  Init_PosePoint_visibility z(::mpros2_msg::msg::PosePoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_PosePoint_visibility(msg_);
  }

private:
  ::mpros2_msg::msg::PosePoint msg_;
};

class Init_PosePoint_y
{
public:
  explicit Init_PosePoint_y(::mpros2_msg::msg::PosePoint & msg)
  : msg_(msg)
  {}
  Init_PosePoint_z y(::mpros2_msg::msg::PosePoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PosePoint_z(msg_);
  }

private:
  ::mpros2_msg::msg::PosePoint msg_;
};

class Init_PosePoint_x
{
public:
  explicit Init_PosePoint_x(::mpros2_msg::msg::PosePoint & msg)
  : msg_(msg)
  {}
  Init_PosePoint_y x(::mpros2_msg::msg::PosePoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PosePoint_y(msg_);
  }

private:
  ::mpros2_msg::msg::PosePoint msg_;
};

class Init_PosePoint_name
{
public:
  Init_PosePoint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePoint_x name(::mpros2_msg::msg::PosePoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PosePoint_x(msg_);
  }

private:
  ::mpros2_msg::msg::PosePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::PosePoint>()
{
  return mpros2_msg::msg::builder::Init_PosePoint_name();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__POSE_POINT__BUILDER_HPP_
