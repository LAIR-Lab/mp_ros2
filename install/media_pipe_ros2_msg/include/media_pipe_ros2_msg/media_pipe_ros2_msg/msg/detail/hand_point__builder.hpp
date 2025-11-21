// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mpros2_msg:msg/HandPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/hand_point.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__HAND_POINT__BUILDER_HPP_
#define mpros2_MSG__MSG__DETAIL__HAND_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mpros2_msg/msg/detail/hand_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mpros2_msg
{

namespace msg
{

namespace builder
{

class Init_HandPoint_z
{
public:
  explicit Init_HandPoint_z(::mpros2_msg::msg::HandPoint & msg)
  : msg_(msg)
  {}
  ::mpros2_msg::msg::HandPoint z(::mpros2_msg::msg::HandPoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mpros2_msg::msg::HandPoint msg_;
};

class Init_HandPoint_y
{
public:
  explicit Init_HandPoint_y(::mpros2_msg::msg::HandPoint & msg)
  : msg_(msg)
  {}
  Init_HandPoint_z y(::mpros2_msg::msg::HandPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_HandPoint_z(msg_);
  }

private:
  ::mpros2_msg::msg::HandPoint msg_;
};

class Init_HandPoint_x
{
public:
  explicit Init_HandPoint_x(::mpros2_msg::msg::HandPoint & msg)
  : msg_(msg)
  {}
  Init_HandPoint_y x(::mpros2_msg::msg::HandPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_HandPoint_y(msg_);
  }

private:
  ::mpros2_msg::msg::HandPoint msg_;
};

class Init_HandPoint_name
{
public:
  Init_HandPoint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandPoint_x name(::mpros2_msg::msg::HandPoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_HandPoint_x(msg_);
  }

private:
  ::mpros2_msg::msg::HandPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mpros2_msg::msg::HandPoint>()
{
  return mpros2_msg::msg::builder::Init_HandPoint_name();
}

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__HAND_POINT__BUILDER_HPP_
