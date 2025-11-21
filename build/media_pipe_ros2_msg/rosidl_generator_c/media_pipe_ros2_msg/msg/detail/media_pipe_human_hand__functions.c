// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mpros2_msg:msg/MediaPipeHumanHand.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `right_hand_key_points`
// Member `left_hand_key_points`
#include "mpros2_msg/msg/detail/hand_point__functions.h"

bool
mpros2_msg__msg__MediaPipeHumanHand__init(mpros2_msg__msg__MediaPipeHumanHand * msg)
{
  if (!msg) {
    return false;
  }
  // right_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__init(&msg->right_hand_key_points[i])) {
      mpros2_msg__msg__MediaPipeHumanHand__fini(msg);
      return false;
    }
  }
  // left_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__init(&msg->left_hand_key_points[i])) {
      mpros2_msg__msg__MediaPipeHumanHand__fini(msg);
      return false;
    }
  }
  return true;
}

void
mpros2_msg__msg__MediaPipeHumanHand__fini(mpros2_msg__msg__MediaPipeHumanHand * msg)
{
  if (!msg) {
    return;
  }
  // right_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    mpros2_msg__msg__HandPoint__fini(&msg->right_hand_key_points[i]);
  }
  // left_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    mpros2_msg__msg__HandPoint__fini(&msg->left_hand_key_points[i]);
  }
}

bool
mpros2_msg__msg__MediaPipeHumanHand__are_equal(const mpros2_msg__msg__MediaPipeHumanHand * lhs, const mpros2_msg__msg__MediaPipeHumanHand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__are_equal(
        &(lhs->right_hand_key_points[i]), &(rhs->right_hand_key_points[i])))
    {
      return false;
    }
  }
  // left_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__are_equal(
        &(lhs->left_hand_key_points[i]), &(rhs->left_hand_key_points[i])))
    {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanHand__copy(
  const mpros2_msg__msg__MediaPipeHumanHand * input,
  mpros2_msg__msg__MediaPipeHumanHand * output)
{
  if (!input || !output) {
    return false;
  }
  // right_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__copy(
        &(input->right_hand_key_points[i]), &(output->right_hand_key_points[i])))
    {
      return false;
    }
  }
  // left_hand_key_points
  for (size_t i = 0; i < 21; ++i) {
    if (!mpros2_msg__msg__HandPoint__copy(
        &(input->left_hand_key_points[i]), &(output->left_hand_key_points[i])))
    {
      return false;
    }
  }
  return true;
}

mpros2_msg__msg__MediaPipeHumanHand *
mpros2_msg__msg__MediaPipeHumanHand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHand * msg = (mpros2_msg__msg__MediaPipeHumanHand *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanHand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mpros2_msg__msg__MediaPipeHumanHand));
  bool success = mpros2_msg__msg__MediaPipeHumanHand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mpros2_msg__msg__MediaPipeHumanHand__destroy(mpros2_msg__msg__MediaPipeHumanHand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mpros2_msg__msg__MediaPipeHumanHand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mpros2_msg__msg__MediaPipeHumanHand__Sequence__init(mpros2_msg__msg__MediaPipeHumanHand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHand * data = NULL;

  if (size) {
    data = (mpros2_msg__msg__MediaPipeHumanHand *)allocator.zero_allocate(size, sizeof(mpros2_msg__msg__MediaPipeHumanHand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mpros2_msg__msg__MediaPipeHumanHand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mpros2_msg__msg__MediaPipeHumanHand__fini(&data[i - 1]);
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
mpros2_msg__msg__MediaPipeHumanHand__Sequence__fini(mpros2_msg__msg__MediaPipeHumanHand__Sequence * array)
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
      mpros2_msg__msg__MediaPipeHumanHand__fini(&array->data[i]);
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

mpros2_msg__msg__MediaPipeHumanHand__Sequence *
mpros2_msg__msg__MediaPipeHumanHand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanHand__Sequence * array = (mpros2_msg__msg__MediaPipeHumanHand__Sequence *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanHand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mpros2_msg__msg__MediaPipeHumanHand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mpros2_msg__msg__MediaPipeHumanHand__Sequence__destroy(mpros2_msg__msg__MediaPipeHumanHand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mpros2_msg__msg__MediaPipeHumanHand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mpros2_msg__msg__MediaPipeHumanHand__Sequence__are_equal(const mpros2_msg__msg__MediaPipeHumanHand__Sequence * lhs, const mpros2_msg__msg__MediaPipeHumanHand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanHand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanHand__Sequence__copy(
  const mpros2_msg__msg__MediaPipeHumanHand__Sequence * input,
  mpros2_msg__msg__MediaPipeHumanHand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mpros2_msg__msg__MediaPipeHumanHand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mpros2_msg__msg__MediaPipeHumanHand * data =
      (mpros2_msg__msg__MediaPipeHumanHand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mpros2_msg__msg__MediaPipeHumanHand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mpros2_msg__msg__MediaPipeHumanHand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanHand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
