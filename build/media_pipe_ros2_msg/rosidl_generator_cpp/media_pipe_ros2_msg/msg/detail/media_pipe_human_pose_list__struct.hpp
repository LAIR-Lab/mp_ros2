// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from media_pipe_ros2_msg:msg/MediaPipeHumanPoseList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "media_pipe_ros2_msg/msg/media_pipe_human_pose_list.hpp"


#ifndef MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__STRUCT_HPP_
#define MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'human_pose_list'
#include "media_pipe_ros2_msg/msg/detail/pose_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__media_pipe_ros2_msg__msg__MediaPipeHumanPoseList __attribute__((deprecated))
#else
# define DEPRECATED__media_pipe_ros2_msg__msg__MediaPipeHumanPoseList __declspec(deprecated)
#endif

namespace media_pipe_ros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MediaPipeHumanPoseList_
{
  using Type = MediaPipeHumanPoseList_<ContainerAllocator>;

  explicit MediaPipeHumanPoseList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_pose_list.fill(media_pipe_ros2_msg::msg::PosePoint_<ContainerAllocator>{_init});
    }
  }

  explicit MediaPipeHumanPoseList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_pose_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_pose_list.fill(media_pipe_ros2_msg::msg::PosePoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _num_humans_type =
    int32_t;
  _num_humans_type num_humans;
  using _human_pose_list_type =
    std::array<media_pipe_ros2_msg::msg::PosePoint_<ContainerAllocator>, 33>;
  _human_pose_list_type human_pose_list;

  // setters for named parameter idiom
  Type & set__num_humans(
    const int32_t & _arg)
  {
    this->num_humans = _arg;
    return *this;
  }
  Type & set__human_pose_list(
    const std::array<media_pipe_ros2_msg::msg::PosePoint_<ContainerAllocator>, 33> & _arg)
  {
    this->human_pose_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> *;
  using ConstRawPtr =
    const media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__media_pipe_ros2_msg__msg__MediaPipeHumanPoseList
    std::shared_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__media_pipe_ros2_msg__msg__MediaPipeHumanPoseList
    std::shared_ptr<media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MediaPipeHumanPoseList_ & other) const
  {
    if (this->num_humans != other.num_humans) {
      return false;
    }
    if (this->human_pose_list != other.human_pose_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MediaPipeHumanPoseList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MediaPipeHumanPoseList_

// alias to use template instance with default allocator
using MediaPipeHumanPoseList =
  media_pipe_ros2_msg::msg::MediaPipeHumanPoseList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace media_pipe_ros2_msg

#endif  // MEDIA_PIPE_ROS2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_POSE_LIST__STRUCT_HPP_
