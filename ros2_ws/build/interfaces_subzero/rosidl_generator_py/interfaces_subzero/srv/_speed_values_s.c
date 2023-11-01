// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_subzero:srv/SpeedValues.idl
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
#include "interfaces_subzero/srv/detail/speed_values__struct.h"
#include "interfaces_subzero/srv/detail/speed_values__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_subzero__srv__speed_values__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("interfaces_subzero.srv._speed_values.SpeedValues_Request", full_classname_dest, 56) == 0);
  }
  interfaces_subzero__srv__SpeedValues_Request * ros_message = _ros_message;
  {  // v_linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_linear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_linear = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // w_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "w_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->w_angular = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_subzero__srv__speed_values__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedValues_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_subzero.srv._speed_values");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedValues_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_subzero__srv__SpeedValues_Request * ros_message = (interfaces_subzero__srv__SpeedValues_Request *)raw_ros_message;
  {  // v_linear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // w_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->w_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "w_angular", field);
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
// #include "interfaces_subzero/srv/detail/speed_values__struct.h"
// already included above
// #include "interfaces_subzero/srv/detail/speed_values__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_subzero__srv__speed_values__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("interfaces_subzero.srv._speed_values.SpeedValues_Response", full_classname_dest, 57) == 0);
  }
  interfaces_subzero__srv__SpeedValues_Response * ros_message = _ros_message;
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
PyObject * interfaces_subzero__srv__speed_values__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedValues_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_subzero.srv._speed_values");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedValues_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_subzero__srv__SpeedValues_Response * ros_message = (interfaces_subzero__srv__SpeedValues_Response *)raw_ros_message;
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
