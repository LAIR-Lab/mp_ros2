// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mpros2_msg:msg/PosePoint.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/pose_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mpros2_msg__msg__PosePoint__init(mpros2_msg__msg__PosePoint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mpros2_msg__msg__PosePoint__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // visibility
  return true;
}

void
mpros2_msg__msg__PosePoint__fini(mpros2_msg__msg__PosePoint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // z
  // visibility
}

bool
mpros2_msg__msg__PosePoint__are_equal(const mpros2_msg__msg__PosePoint * lhs, const mpros2_msg__msg__PosePoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // visibility
  if (lhs->visibility != rhs->visibility) {
    return false;
  }
  return true;
}

bool
mpros2_msg__msg__PosePoint__copy(
  const mpros2_msg__msg__PosePoint * input,
  mpros2_msg__msg__PosePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // visibility
  output->visibility = input->visibility;
  return true;
}

mpros2_msg__msg__PosePoint *
mpros2_msg__msg__PosePoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__PosePoint * msg = (mpros2_msg__msg__PosePoint *)allocator.allocate(sizeof(mpros2_msg__msg__PosePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mpros2_msg__msg__PosePoint));
  bool success = mpros2_msg__msg__PosePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mpros2_msg__msg__PosePoint__destroy(mpros2_msg__msg__PosePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mpros2_msg__msg__PosePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mpros2_msg__msg__PosePoint__Sequence__init(mpros2_msg__msg__PosePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__PosePoint * data = NULL;

  if (size) {
    data = (mpros2_msg__msg__PosePoint *)allocator.zero_allocate(size, sizeof(mpros2_msg__msg__PosePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mpros2_msg__msg__PosePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mpros2_msg__msg__PosePoint__fini(&data[i - 1]);
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
mpros2_msg__msg__PosePoint__Sequence__fini(mpros2_msg__msg__PosePoint__Sequence * array)
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
      mpros2_msg__msg__PosePoint__fini(&array->data[i]);
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

mpros2_msg__msg__PosePoint__Sequence *
mpros2_msg__msg__PosePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__PosePoint__Sequence * array = (mpros2_msg__msg__PosePoint__Sequence *)allocator.allocate(sizeof(mpros2_msg__msg__PosePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mpros2_msg__msg__PosePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mpros2_msg__msg__PosePoint__Sequence__destroy(mpros2_msg__msg__PosePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mpros2_msg__msg__PosePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mpros2_msg__msg__PosePoint__Sequence__are_equal(const mpros2_msg__msg__PosePoint__Sequence * lhs, const mpros2_msg__msg__PosePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mpros2_msg__msg__PosePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__PosePoint__Sequence__copy(
  const mpros2_msg__msg__PosePoint__Sequence * input,
  mpros2_msg__msg__PosePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mpros2_msg__msg__PosePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mpros2_msg__msg__PosePoint * data =
      (mpros2_msg__msg__PosePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mpros2_msg__msg__PosePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mpros2_msg__msg__PosePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mpros2_msg__msg__PosePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
