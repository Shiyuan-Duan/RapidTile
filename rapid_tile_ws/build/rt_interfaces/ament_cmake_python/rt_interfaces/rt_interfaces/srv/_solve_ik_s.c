// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rt_interfaces:srv/SolveIK.idl
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
#include "rt_interfaces/srv/detail/solve_ik__struct.h"
#include "rt_interfaces/srv/detail/solve_ik__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rt_interfaces__srv__solve_ik__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("rt_interfaces.srv._solve_ik.SolveIK_Request", full_classname_dest, 43) == 0);
  }
  rt_interfaces__srv__SolveIK_Request * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rt_interfaces__srv__solve_ik__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SolveIK_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rt_interfaces.srv._solve_ik");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SolveIK_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rt_interfaces__srv__SolveIK_Request * ros_message = (rt_interfaces__srv__SolveIK_Request *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
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
// #include "rt_interfaces/srv/detail/solve_ik__struct.h"
// already included above
// #include "rt_interfaces/srv/detail/solve_ik__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rt_interfaces__srv__solve_ik__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("rt_interfaces.srv._solve_ik.SolveIK_Response", full_classname_dest, 44) == 0);
  }
  rt_interfaces__srv__SolveIK_Response * ros_message = _ros_message;
  {  // t1
    PyObject * field = PyObject_GetAttrString(_pymsg, "t1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t2
    PyObject * field = PyObject_GetAttrString(_pymsg, "t2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // t3
    PyObject * field = PyObject_GetAttrString(_pymsg, "t3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->t3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mis
    PyObject * field = PyObject_GetAttrString(_pymsg, "mis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rt_interfaces__srv__solve_ik__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SolveIK_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rt_interfaces.srv._solve_ik");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SolveIK_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rt_interfaces__srv__SolveIK_Response * ros_message = (rt_interfaces__srv__SolveIK_Response *)raw_ros_message;
  {  // t1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // t3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->t3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "t3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
