// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from command_interfaces:srv/MyCommand.idl
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
#include "command_interfaces/srv/detail/my_command__struct.h"
#include "command_interfaces/srv/detail/my_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool command_interfaces__srv__my_command__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("command_interfaces.srv._my_command.MyCommand_Request", full_classname_dest, 52) == 0);
  }
  command_interfaces__srv__MyCommand_Request * ros_message = _ros_message;
  {  // current_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_motor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * command_interfaces__srv__my_command__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MyCommand_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("command_interfaces.srv._my_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MyCommand_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  command_interfaces__srv__MyCommand_Request * ros_message = (command_interfaces__srv__MyCommand_Request *)raw_ros_message;
  {  // current_motor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_motor", field);
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
// #include "command_interfaces/srv/detail/my_command__struct.h"
// already included above
// #include "command_interfaces/srv/detail/my_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool command_interfaces__srv__my_command__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("command_interfaces.srv._my_command.MyCommand_Response", full_classname_dest, 53) == 0);
  }
  command_interfaces__srv__MyCommand_Response * ros_message = _ros_message;
  {  // commands
    PyObject * field = PyObject_GetAttrString(_pymsg, "commands");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->commands = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * command_interfaces__srv__my_command__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MyCommand_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("command_interfaces.srv._my_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MyCommand_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  command_interfaces__srv__MyCommand_Response * ros_message = (command_interfaces__srv__MyCommand_Response *)raw_ros_message;
  {  // commands
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->commands);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commands", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
