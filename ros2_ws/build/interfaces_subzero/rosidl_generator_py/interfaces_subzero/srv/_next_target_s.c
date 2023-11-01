// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_subzero:srv/NextTarget.idl
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
#include "interfaces_subzero/srv/detail/next_target__struct.h"
#include "interfaces_subzero/srv/detail/next_target__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_subzero__srv__next_target__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("interfaces_subzero.srv._next_target.NextTarget_Request", full_classname_dest, 54) == 0);
  }
  interfaces_subzero__srv__NextTarget_Request * ros_message = _ros_message;
  {  // i_next_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_next_target");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_next_target = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // next_target_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_target_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_target_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // next_target_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_target_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->next_target_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing_to_next_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing_to_next_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing_to_next_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_to_next_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_to_next_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_to_next_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_from_last_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_from_last_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_from_last_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_subzero__srv__next_target__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NextTarget_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_subzero.srv._next_target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NextTarget_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_subzero__srv__NextTarget_Request * ros_message = (interfaces_subzero__srv__NextTarget_Request *)raw_ros_message;
  {  // i_next_target
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->i_next_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_next_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_target_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_target_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_target_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_target_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->next_target_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_target_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing_to_next_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing_to_next_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing_to_next_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_to_next_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_to_next_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_to_next_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_from_last_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_from_last_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_from_last_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interfaces_subzero/srv/detail/next_target__struct.h"
// already included above
// #include "interfaces_subzero/srv/detail/next_target__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_subzero__srv__next_target__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("interfaces_subzero.srv._next_target.NextTarget_Response", full_classname_dest, 55) == 0);
  }
  interfaces_subzero__srv__NextTarget_Response * ros_message = _ros_message;
  {  // msg_sent
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_sent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->msg_sent = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_subzero__srv__next_target__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NextTarget_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_subzero.srv._next_target");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NextTarget_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_subzero__srv__NextTarget_Response * ros_message = (interfaces_subzero__srv__NextTarget_Response *)raw_ros_message;
  {  // msg_sent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->msg_sent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_sent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
