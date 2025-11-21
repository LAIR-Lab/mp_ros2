// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mpros2_msg/msg/detail/pose_point__rosidl_typesupport_introspection_c.h"
#include "mpros2_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mpros2_msg/msg/detail/pose_point__functions.h"
#include "mpros2_msg/msg/detail/pose_point__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mpros2_msg__msg__PosePoint__init(message_memory);
}

void mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_fini_function(void * message_memory)
{
  mpros2_msg__msg__PosePoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__PosePoint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__PosePoint, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__PosePoint, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__PosePoint, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visibility",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mpros2_msg__msg__PosePoint, visibility),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_members = {
  "mpros2_msg__msg",  // message namespace
  "PosePoint",  // message name
  5,  // number of fields
  sizeof(mpros2_msg__msg__PosePoint),
  false,  // has_any_key_member_
  mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_member_array,  // message members
  mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_init_function,  // function to initialize message memory (memory has to be allocated)
  mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_type_support_handle = {
  0,
  &mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_members,
  get_message_typesupport_handle_function,
  &mpros2_msg__msg__PosePoint__get_type_hash,
  &mpros2_msg__msg__PosePoint__get_type_description,
  &mpros2_msg__msg__PosePoint__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mpros2_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mpros2_msg, msg, PosePoint)() {
  if (!mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_type_support_handle.typesupport_identifier) {
    mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mpros2_msg__msg__PosePoint__rosidl_typesupport_introspection_c__PosePoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
