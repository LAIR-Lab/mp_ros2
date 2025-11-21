// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_holistic_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__STRUCT_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__STRUCT_HPP_

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
// Member 'human_face_mesh_list'
#include "mpros2_msg/msg/detail/face_mesh_point__struct.hpp"
// Member 'human_pose_list'
#include "mpros2_msg/msg/detail/pose_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHolisticList __attribute__((deprecated))
#else
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanHolisticList __declspec(deprecated)
#endif

namespace mpros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MediaPipeHumanHolisticList_
{
  using Type = MediaPipeHumanHolisticList_<ContainerAllocator>;

  explicit MediaPipeHumanHolisticList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_hand_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_face_mesh_list.fill(mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>{_init});
      this->human_pose_list.fill(mpros2_msg::msg::PosePoint_<ContainerAllocator>{_init});
    }
  }

  explicit MediaPipeHumanHolisticList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_hand_list(_alloc, _init),
    human_face_mesh_list(_alloc),
    human_pose_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_face_mesh_list.fill(mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>{_alloc, _init});
      this->human_pose_list.fill(mpros2_msg::msg::PosePoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _num_humans_type =
    int32_t;
  _num_humans_type num_humans;
  using _human_hand_list_type =
    mpros2_msg::msg::MediaPipeHumanHand_<ContainerAllocator>;
  _human_hand_list_type human_hand_list;
  using _human_face_mesh_list_type =
    std::array<mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>, 468>;
  _human_face_mesh_list_type human_face_mesh_list;
  using _human_pose_list_type =
    std::array<mpros2_msg::msg::PosePoint_<ContainerAllocator>, 33>;
  _human_pose_list_type human_pose_list;

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
  Type & set__human_face_mesh_list(
    const std::array<mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>, 468> & _arg)
  {
    this->human_face_mesh_list = _arg;
    return *this;
  }
  Type & set__human_pose_list(
    const std::array<mpros2_msg::msg::PosePoint_<ContainerAllocator>, 33> & _arg)
  {
    this->human_pose_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHolisticList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanHolisticList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanHolisticList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MediaPipeHumanHolisticList_ & other) const
  {
    if (this->num_humans != other.num_humans) {
      return false;
    }
    if (this->human_hand_list != other.human_hand_list) {
      return false;
    }
    if (this->human_face_mesh_list != other.human_face_mesh_list) {
      return false;
    }
    if (this->human_pose_list != other.human_pose_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MediaPipeHumanHolisticList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MediaPipeHumanHolisticList_

// alias to use template instance with default allocator
using MediaPipeHumanHolisticList =
  mpros2_msg::msg::MediaPipeHumanHolisticList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_HOLISTIC_LIST__STRUCT_HPP_
