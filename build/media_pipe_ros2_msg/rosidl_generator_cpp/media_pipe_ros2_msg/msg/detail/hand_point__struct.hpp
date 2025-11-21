// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpros2_msg:msg/HandPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/hand_point.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__HAND_POINT__STRUCT_HPP_
#define mpros2_MSG__MSG__DETAIL__HAND_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mpros2_msg__msg__HandPoint __attribute__((deprecated))
#else
# define DEPRECATED__mpros2_msg__msg__HandPoint __declspec(deprecated)
#endif

namespace mpros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandPoint_
{
  using Type = HandPoint_<ContainerAllocator>;

  explicit HandPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit HandPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpros2_msg::msg::HandPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpros2_msg::msg::HandPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::HandPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::HandPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpros2_msg__msg__HandPoint
    std::shared_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpros2_msg__msg__HandPoint
    std::shared_ptr<mpros2_msg::msg::HandPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandPoint_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandPoint_

// alias to use template instance with default allocator
using HandPoint =
  mpros2_msg::msg::HandPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__HAND_POINT__STRUCT_HPP_
