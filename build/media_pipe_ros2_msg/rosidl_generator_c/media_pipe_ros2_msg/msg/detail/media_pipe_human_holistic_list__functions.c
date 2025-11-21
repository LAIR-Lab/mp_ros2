// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_holistic_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `human_hand_list`
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"
// Member `human_face_mesh_list`
#include "mpros2_msg/msg/detail/face_mesh_point__functions.h"
// Member `human_pose_list`
#include "mpros2_msg/msg/detail/pose_point__functions.h"

bool
mpros2_msg__msg__MediaPipeHumanHolisticList__init(mpros2_msg__msg__MediaPipeHumanHolisticList * msg)
{
  if (!msg) {
    return false;
  }
  // num_humans
  // human_hand_list
  if (!mpros2_msg__msg__MediaPipeHumanHand__init(&msg->human_hand_list)) {
    mpros2_msg__msg__MediaPipeHumanHolisticList__fini(msg);
    return false;
  }
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    if (!mpros2_msg__msg__FaceMeshPoint__init(&msg->human_face_mesh_list[i])) {
      mpros2_msg__msg__MediaPipeHumanHolisticList__fini(msg);
      return false;
    }
  }
  // human_pose_list
  for (size_t i = 0; i < 33; ++i) {
    if (!mpros2_msg__msg__PosePoint__init(&msg->human_pose_list[i])) {
      mpros2_msg__msg__MediaPipeHumanHolisticList__fini(msg);
      return false;
    }
  }
  return true;
}

void
mpros2_msg__msg__MediaPipeHumanHolisticList__fini(mpros2_msg__msg__MediaPipeHumanHolisticList * msg)
{
  if (!msg) {
    return;
  }
  // num_humans
  // human_hand_list
  mpros2_msg__msg__MediaPipeHumanHand__fini(&msg->human_hand_list);
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    mpros2_msg__msg__FaceMeshPoint__fini(&msg->human_face_mesh_list[i]);
  }
  // human_pose_list
  for (size_t i = 0; i < 33; ++i) {
    mpros2_msg__msg__PosePoint__fini(&msg->human_pose_list[i]);
  }
}

bool
mpros2_msg__msg__MediaPipeHumanHolisticList__are_equal(const mpros2_msg__msg__MediaPipeHumanHolisticList * lhs, const mpros2_msg__msg__MediaPipeHumanHolisticList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_humans
  if (lhs->num_humans != rhs->num_humans) {
    return false;
  }
  // human_hand_list
  if (!mpros2_msg__msg__MediaPipeHumanHand__are_equal(
      &(lhs->human_hand_list), &(rhs->human_hand_list)))
  {
    return false;
  }
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    if (!mpros2_msg__msg__FaceMeshPoint__are_equal(
        &(lhs->human_face_mesh_list[i]), &(rhs->human_face_mesh_list[i])))
    {
      return false;
    }
  }
  // human_pose_list
  for (size_t i = 0; i < 33; ++i) {
    if (!mpros2_msg__msg__PosePoint__are_equal(
        &(lhs->human_pose_list[i]), &(rhs->human_pose_list[i])))
    {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanHolisticList__copy(
  const mpros2_msg__msg__MediaPipeHumanHolisticList * input,
  mpros2_msg__msg__MediaPipeHumanHolisticList * output)
{
  if (!input || !output) {
    return false;
  }
  // num_humans
  output->num_humans = input->num_humans;
  // human_hand_list
  if (!mpros2_msg__msg__MediaPipeHumanHand__copy(
      &(input->human_hand_list), &(output->human_hand_list)))
  {
    return false;
  }
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    if (!mpros2_msg__msg__FaceMeshPoint__copy(
        &(input->human_face_mesh_list[i]), &(output->human_face_mesh_list[i])))
    {
      return false;
    }
  }
  // human_pose_list
  for (size_t i = 0; i < 33; ++i) {
    if (!mpros2_msg__msg__PosePoint__copy(
        &(input->human_pose_list[i]), &(output->human_pose_list[i])))
    {
      return false;
    }
  }
  return true;
}

mpros2_msg__msg__MediaPipeHumanHolisticList *
mpros2_msg__msg__MediaPipeHumanHolisticList__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHolisticList * msg = (mpros2_msg__msg__MediaPipeHumanHolisticList *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList));
  bool success = mpros2_msg__msg__MediaPipeHumanHolisticList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mpros2_msg__msg__MediaPipeHumanHolisticList__destroy(mpros2_msg__msg__MediaPipeHumanHolisticList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mpros2_msg__msg__MediaPipeHumanHolisticList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__init(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHolisticList * data = NULL;

  if (size) {
    data = (mpros2_msg__msg__MediaPipeHumanHolisticList *)allocator.zero_allocate(size, sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mpros2_msg__msg__MediaPipeHumanHolisticList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mpros2_msg__msg__MediaPipeHumanHolisticList__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__fini(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mpros2_msg__msg__MediaPipeHumanHolisticList__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence *
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array = (mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__destroy(mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__are_equal(const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * lhs, const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanHolisticList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence__copy(
  const mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * input,
  mpros2_msg__msg__MediaPipeHumanHolisticList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mpros2_msg__msg__MediaPipeHumanHolisticList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mpros2_msg__msg__MediaPipeHumanHolisticList * data =
      (mpros2_msg__msg__MediaPipeHumanHolisticList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mpros2_msg__msg__MediaPipeHumanHolisticList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mpros2_msg__msg__MediaPipeHumanHolisticList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanHolisticList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
