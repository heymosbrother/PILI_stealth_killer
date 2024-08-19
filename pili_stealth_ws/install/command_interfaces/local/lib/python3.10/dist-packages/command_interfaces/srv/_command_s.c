// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from command_interfaces:srv/Command.idl
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
#include "command_interfaces/srv/detail/command__struct.h"
#include "command_interfaces/srv/detail/command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool command_interfaces__srv__command__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("command_interfaces.srv._command.Command_Request", full_classname_dest, 47) == 0);
  }
  command_interfaces__srv__Command_Request * ros_message = _ros_message;
  {  // input1
    PyObject * field = PyObject_GetAttrString(_pymsg, "input1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input2
    PyObject * field = PyObject_GetAttrString(_pymsg, "input2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input3
    PyObject * field = PyObject_GetAttrString(_pymsg, "input3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input4
    PyObject * field = PyObject_GetAttrString(_pymsg, "input4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input5
    PyObject * field = PyObject_GetAttrString(_pymsg, "input5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input5 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // input6
    PyObject * field = PyObject_GetAttrString(_pymsg, "input6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->input6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * command_interfaces__srv__command__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Command_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("command_interfaces.srv._command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Command_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  command_interfaces__srv__Command_Request * ros_message = (command_interfaces__srv__Command_Request *)raw_ros_message;
  {  // input1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->input6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input6", field);
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
// #include "command_interfaces/srv/detail/command__struct.h"
// already included above
// #include "command_interfaces/srv/detail/command__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool command_interfaces__srv__command__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("command_interfaces.srv._command.Command_Response", full_classname_dest, 48) == 0);
  }
  command_interfaces__srv__Command_Response * ros_message = _ros_message;
  {  // command_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_array");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 6;
      uint8_t * dest = ros_message->command_array;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * command_interfaces__srv__command__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Command_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("command_interfaces.srv._command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Command_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  command_interfaces__srv__Command_Response * ros_message = (command_interfaces__srv__Command_Response *)raw_ros_message;
  {  // command_array
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "command_array");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->command_array[0]);
    memcpy(dst, src, 6 * sizeof(uint8_t));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
