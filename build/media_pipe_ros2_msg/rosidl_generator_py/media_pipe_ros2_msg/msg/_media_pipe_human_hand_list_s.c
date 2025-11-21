// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from media_pipe_ros2_msg:msg/MediaPipeHumanHandList.idl
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
#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_hand_list__struct.h"
#include "media_pipe_ros2_msg/msg/detail/media_pipe_human_hand_list__functions.h"

bool media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * media_pipe_ros2_msg__msg__media_pipe_human_hand__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool media_pipe_ros2_msg__msg__media_pipe_human_hand_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("media_pipe_ros2_msg.msg._media_pipe_human_hand_list.MediaPipeHumanHandList", full_classname_dest, 74) == 0);
  }
  media_pipe_ros2_msg__msg__MediaPipeHumanHandList * ros_message = _ros_message;
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * media_pipe_ros2_msg__msg__media_pipe_human_hand_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MediaPipeHumanHandList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("media_pipe_ros2_msg.msg._media_pipe_human_hand_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MediaPipeHumanHandList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  media_pipe_ros2_msg__msg__MediaPipeHumanHandList * ros_message = (media_pipe_ros2_msg__msg__MediaPipeHumanHandList *)raw_ros_message;
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
