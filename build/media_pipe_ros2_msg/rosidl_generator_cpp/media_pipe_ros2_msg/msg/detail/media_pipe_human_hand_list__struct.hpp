// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHandList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_hand_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'human_hand_list'
#include "mpros2_msg/msg/detail/media_pipe_human_hand__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHandList __attribute__((deprecated))
#else
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHandList __declspec(deprecated)
#endif

namespace mpros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MediaPipeHumanHandList_
{
  using Type = MediaPipeHumanHandList_<ContainerAllocator>;

  explicit MediaPipeHumanHandList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_hand_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
    }
  }

  explicit MediaPipeHumanHandList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_hand_list(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
    }
  }

  // field types and members
  using _num_humans_type =
    int32_t;
  _num_humans_type num_humans;
  using _human_hand_list_type =
    mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>;
  _human_hand_list_type human_hand_list;

  // setters for named parameter idiom
  Type & set__num_humans(
    const int32_t & _arg)
  {
    this->num_humans = _arg;
    return *this;
  }
  Type & set__human_hand_list(
    const mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator> & _arg)
  {
    this->human_hand_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHandList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHandList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHandList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MediaPipeHumanHandList_ & other) const
  {
    if (this->num_humans != other.num_humans) {
      return false;
    }
    if (this->human_hand_list != other.human_hand_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MediaPipeHumanHandList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MediaPipeHumanHandList_

// alias to use template instance with default allocator
using MediaPipeHumanHandList =
  mpros2_msg::msg::MediaPipeHumanHandList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HAND_LIST__STRUCT_HPP_
