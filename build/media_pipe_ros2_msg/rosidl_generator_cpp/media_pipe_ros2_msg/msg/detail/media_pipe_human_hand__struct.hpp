// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'right_hand_key_points'
// Member 'left_hand_key_points'
#include "mpros2_msg/msg/detail/hand_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHand __attribute__((deprecated))
#else
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHand __declspec(deprecated)
#endif

namespace mpros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MediaPipeHumanHand_
{
  using Type = MediaPipeHumanHand_<ContainerAllocator>;

  explicit MediaPipeHumanHand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_hand_key_points.fill(mpros2_msg::msg::HandPoint_<ContainerAllocator>{_init});
      this->left_hand_key_points.fill(mpros2_msg::msg::HandPoint_<ContainerAllocator>{_init});
    }
  }

  explicit MediaPipeHumanHand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : right_hand_key_points(_alloc),
    left_hand_key_points(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_hand_key_points.fill(mpros2_msg::msg::HandPoint_<ContainerAllocator>{_alloc, _init});
      this->left_hand_key_points.fill(mpros2_msg::msg::HandPoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _right_hand_key_points_type =
    std::array<mpros2_msg::msg::HandPoint_<ContainerAllocator>, 21>;
  _right_hand_key_points_type right_hand_key_points;
  using _left_hand_key_points_type =
    std::array<mpros2_msg::msg::HandPoint_<ContainerAllocator>, 21>;
  _left_hand_key_points_type left_hand_key_points;

  // setters for named parameter idiom
  Type & set__right_hand_key_points(
    const std::array<mpros2_msg::msg::HandPoint_<ContainerAllocator>, 21> & _arg)
  {
    this->right_hand_key_points = _arg;
    return *this;
  }
  Type & set__left_hand_key_points(
    const std::array<mpros2_msg::msg::HandPoint_<ContainerAllocator>, 21> & _arg)
  {
    this->left_hand_key_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHand
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHand
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MediaPipeHumanHand_ & other) const
  {
    if (this->right_hand_key_points != other.right_hand_key_points) {
      return false;
    }
    if (this->left_hand_key_points != other.left_hand_key_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const MediaPipeHumanHand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MediaPipeHumanHand_

// alias to use template instance with default allocator
using MediaPipeHumanHand =
  mpros2_msg::msg::MediaPipeHumanHand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND__STRUCT_HPP_
