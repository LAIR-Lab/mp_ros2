// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from media_pipe_ros2_msg:msg/MediaPipeHumanHolisticList.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_holistic_list__struct.h"
#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_holistic_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "media_pipe_ros2_msg/msg/detail/face_mesh_point__functions.h"
#include "media_pipe_ros2_msg/msg/detail/pose_point__functions.h"
// end nested array functions include
bool media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_to_py(void * raw_ros_message);
bool media_pipe_ros2_msg__msg__face_mesh_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * media_pipe_ros2_msg__msg__face_mesh_point__convert_to_py(void * raw_ros_message);
bool media_pipe_ros2_msg__msg__pose_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * media_pipe_ros2_msg__msg__pose_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool media_pipe_ros2_msg__msg__media_pipe_human_holistic_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("media_pipe_ros2_msg.msg._media_pipe_human_holistic_list.MediaPipeHumanHolisticList", full_classname_dest, 82) == 0);
  }
  media_pipe_ros2_msg__msg__MediaPipeHumanHolisticList * ros_message = _ros_message;
  {  // num_humans
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_humans");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_humans = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // human_hand_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_hand_list");
    if (!field) {
      return false;
    }
    if (!media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_from_py(field, &ros_message->human_hand_list)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // human_face_mesh_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_face_mesh_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'human_face_mesh_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 468;
    media_pipe_ros2_msg__msg__FaceMeshPoint * dest = ros_message->human_face_mesh_list;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!media_pipe_ros2_msg__msg__face_mesh_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // human_pose_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "human_pose_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'human_pose_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 33;
    media_pipe_ros2_msg__msg__PosePoint * dest = ros_message->human_pose_list;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!media_pipe_ros2_msg__msg__pose_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * media_pipe_ros2_msg__msg__media_pipe_human_holistic_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MediaPipeHumanHolisticList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("media_pipe_ros2_msg.msg._media_pipe_human_holistic_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MediaPipeHumanHolisticList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  media_pipe_ros2_msg__msg__MediaPipeHumanHolisticList * ros_message = (media_pipe_ros2_msg__msg__MediaPipeHumanHolisticList *)raw_ros_message;
  {  // num_humans
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->num_humans);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_humans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_hand_list
    PyObject * field = NULL;
    field = media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_to_py(&ros_message->human_hand_list);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_hand_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_face_mesh_list
    PyObject * field = NULL;
    size_t size = 468;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    media_pipe_ros2_msg__msg__FaceMeshPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->human_face_mesh_list[i]);
      PyObject * pyitem = media_pipe_ros2_msg__msg__face_mesh_point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_face_mesh_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // human_pose_list
    PyObject * field = NULL;
    size_t size = 33;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    media_pipe_ros2_msg__msg__PosePoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->human_pose_list[i]);
      PyObject * pyitem = media_pipe_ros2_msg__msg__pose_point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "human_pose_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
