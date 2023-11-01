// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_subzero:msg/R9sGPS.idl
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
#include "interfaces_subzero/msg/detail/r9s_gps__struct.h"
#include "interfaces_subzero/msg/detail/r9s_gps__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces_subzero__msg__r9s_gps__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("interfaces_subzero.msg._r9s_gps.R9sGPS", full_classname_dest, 38) == 0);
  }
  interfaces_subzero__msg__R9sGPS * ros_message = _ros_message;
  {  // gps_connection
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_connection");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_connection = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->age = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bpq_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "bpq_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bpq_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bpq_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "bpq_time");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bpq_time, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // base_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // base_eht
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_eht");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_eht = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gga_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "gga_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gga_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // gga_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "gga_time");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gga_time, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rover_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rover_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rover_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_alt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rover_geoid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_geoid");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_geoid = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rmc_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "rmc_msg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rmc_msg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rmc_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "rmc_time");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rmc_time, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rover_date
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rover_date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rover_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rover_course
    PyObject * field = PyObject_GetAttrString(_pymsg, "rover_course");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rover_course = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gps_for_arduino
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_for_arduino");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gps_for_arduino, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // gps_for_radio
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_for_radio");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gps_for_radio, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_subzero__msg__r9s_gps__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of R9sGPS */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_subzero.msg._r9s_gps");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "R9sGPS");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_subzero__msg__R9sGPS * ros_message = (interfaces_subzero__msg__R9sGPS *)raw_ros_message;
  {  // gps_connection
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_connection ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_connection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bpq_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bpq_msg.data,
      strlen(ros_message->bpq_msg.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bpq_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bpq_time
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bpq_time.data,
      strlen(ros_message->bpq_time.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bpq_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // base_eht
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_eht);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_eht", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gga_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gga_msg.data,
      strlen(ros_message->gga_msg.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gga_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gga_time
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gga_time.data,
      strlen(ros_message->gga_time.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gga_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_geoid
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_geoid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_geoid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rmc_msg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rmc_msg.data,
      strlen(ros_message->rmc_msg.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rmc_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rmc_time
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rmc_time.data,
      strlen(ros_message->rmc_time.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rmc_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rover_date.data,
      strlen(ros_message->rover_date.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rover_course
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rover_course);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rover_course", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_for_arduino
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gps_for_arduino.data,
      strlen(ros_message->gps_for_arduino.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_for_arduino", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_for_radio
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gps_for_radio.data,
      strlen(ros_message->gps_for_radio.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_for_radio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
