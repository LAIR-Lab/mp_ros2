// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mpros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mpros2_msg/msg/media_pipe_human_face_mesh_list.hpp"


#ifndef mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_HPP_
#define mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'human_face_mesh_list'
#include "mpros2_msg/msg/detail/face_mesh_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanFaceMeshList __attribute__((deprecated))
#else
# define DEPRECATED__mpros2_msg__msg__MediaPipeHumanFaceMeshList __declspec(deprecated)
#endif

namespace mpros2_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MediaPipeHumanFaceMeshList_
{
  using Type = MediaPipeHumanFaceMeshList_<ContainerAllocator>;

  explicit MediaPipeHumanFaceMeshList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_face_mesh_list.fill(mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>{_init});
    }
  }

  explicit MediaPipeHumanFaceMeshList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : human_face_mesh_list(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_humans = 0l;
      this->human_face_mesh_list.fill(mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _num_humans_type =
    int32_t;
  _num_humans_type num_humans;
  using _human_face_mesh_list_type =
    std::array<mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>, 468>;
  _human_face_mesh_list_type human_face_mesh_list;

  // setters for named parameter idiom
  Type & set__num_humans(
    const int32_t & _arg)
  {
    this->num_humans = _arg;
    return *this;
  }
  Type & set__human_face_mesh_list(
    const std::array<mpros2_msg::msg::FaceMeshPoint_<ContainerAllocator>, 468> & _arg)
  {
    this->human_face_mesh_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> *;
  using ConstRawPtr =
    const mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanFaceMeshList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mpros2_msg__msg__MediaPipeHumanFaceMeshList
    std::shared_ptr<mpros2_msg::msg::MediaPipeHumanFaceMeshList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MediaPipeHumanFaceMeshList_ & other) const
  {
    if (this->num_humans != other.num_humans) {
      return false;
    }
    if (this->human_face_mesh_list != other.human_face_mesh_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MediaPipeHumanFaceMeshList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MediaPipeHumanFaceMeshList_

// alias to use template instance with default allocator
using MediaPipeHumanFaceMeshList =
  mpros2_msg::msg::MediaPipeHumanFaceMeshList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mpros2_msg

#endif  // mpros2_MSG__MSG__DETAIL__MEDIA_PIPE_HUMAN_FACE_MESH_LIST__STRUCT_HPP_
