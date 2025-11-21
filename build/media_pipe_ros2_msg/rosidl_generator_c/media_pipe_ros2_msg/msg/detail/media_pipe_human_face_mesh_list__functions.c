// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mpros2_msg:msg/MediaPipeHumanFaceMeshList.idl
// generated code does not contain a copyright notice
#include "mpros2_msg/msg/detail/media_pipe_human_face_mesh_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `human_face_mesh_list`
#include "mpros2_msg/msg/detail/face_mesh_point__functions.h"

bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__init(mpros2_msg__msg__MediaPipeHumanFaceMeshList * msg)
{
  if (!msg) {
    return false;
  }
  // num_humans
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    if (!mpros2_msg__msg__FaceMeshPoint__init(&msg->human_face_mesh_list[i])) {
      mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(msg);
      return false;
    }
  }
  return true;
}

void
mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(mpros2_msg__msg__MediaPipeHumanFaceMeshList * msg)
{
  if (!msg) {
    return;
  }
  // num_humans
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    mpros2_msg__msg__FaceMeshPoint__fini(&msg->human_face_mesh_list[i]);
  }
}

bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__are_equal(const mpros2_msg__msg__MediaPipeHumanFaceMeshList * lhs, const mpros2_msg__msg__MediaPipeHumanFaceMeshList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_humans
  if (lhs->num_humans != rhs->num_humans) {
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
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__copy(
  const mpros2_msg__msg__MediaPipeHumanFaceMeshList * input,
  mpros2_msg__msg__MediaPipeHumanFaceMeshList * output)
{
  if (!input || !output) {
    return false;
  }
  // num_humans
  output->num_humans = input->num_humans;
  // human_face_mesh_list
  for (size_t i = 0; i < 468; ++i) {
    if (!mpros2_msg__msg__FaceMeshPoint__copy(
        &(input->human_face_mesh_list[i]), &(output->human_face_mesh_list[i])))
    {
      return false;
    }
  }
  return true;
}

mpros2_msg__msg__MediaPipeHumanFaceMeshList *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanFaceMeshList * msg = (mpros2_msg__msg__MediaPipeHumanFaceMeshList *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanFaceMeshList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mpros2_msg__msg__MediaPipeHumanFaceMeshList));
  bool success = mpros2_msg__msg__MediaPipeHumanFaceMeshList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mpros2_msg__msg__MediaPipeHumanFaceMeshList__destroy(mpros2_msg__msg__MediaPipeHumanFaceMeshList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__init(mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanFaceMeshList * data = NULL;

  if (size) {
    data = (mpros2_msg__msg__MediaPipeHumanFaceMeshList *)allocator.zero_allocate(size, sizeof(mpros2_msg__msg__MediaPipeHumanFaceMeshList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mpros2_msg__msg__MediaPipeHumanFaceMeshList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(&data[i - 1]);
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
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__fini(mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * array)
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
      mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(&array->data[i]);
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

mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence *
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * array = (mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence *)allocator.allocate(sizeof(mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__destroy(mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__are_equal(const mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * lhs, const mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanFaceMeshList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence__copy(
  const mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * input,
  mpros2_msg__msg__MediaPipeHumanFaceMeshList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mpros2_msg__msg__MediaPipeHumanFaceMeshList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mpros2_msg__msg__MediaPipeHumanFaceMeshList * data =
      (mpros2_msg__msg__MediaPipeHumanFaceMeshList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mpros2_msg__msg__MediaPipeHumanFaceMeshList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mpros2_msg__msg__MediaPipeHumanFaceMeshList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mpros2_msg__msg__MediaPipeHumanFaceMeshList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
