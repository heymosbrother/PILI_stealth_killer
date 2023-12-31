// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from more_interfaces:msg/Command.idl
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
#include "more_interfaces/msg/detail/command__struct.h"
#include "more_interfaces/msg/detail/command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool more_interfaces__msg__command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("more_interfaces.msg._command.Command", full_classname_dest, 36) == 0);
  }
  more_interfaces__msg__Command * ros_message = _ros_message;
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vm1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vm1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vm1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tm1
    PyObject * field = PyObject_GetAttrString(_pymsg, "tm1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tm1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vm2
    PyObject * field = PyObject_GetAttrString(_pymsg, "vm2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vm2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tm2
    PyObject * field = PyObject_GetAttrString(_pymsg, "tm2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tm2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vm3
    PyObject * field = PyObject_GetAttrString(_pymsg, "vm3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vm3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tm3
    PyObject * field = PyObject_GetAttrString(_pymsg, "tm3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tm3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * more_interfaces__msg__command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Command */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("more_interfaces.msg._command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Command");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  more_interfaces__msg__Command * ros_message = (more_interfaces__msg__Command *)raw_ros_message;
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vm1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vm1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vm1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tm1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tm1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tm1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vm2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vm2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vm2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tm2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tm2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tm2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vm3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vm3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vm3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tm3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tm3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tm3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
