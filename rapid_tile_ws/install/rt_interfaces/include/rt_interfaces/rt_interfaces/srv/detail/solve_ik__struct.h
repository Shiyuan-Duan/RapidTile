// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rt_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef RT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
#define RT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SolveIK in the package rt_interfaces.
typedef struct rt_interfaces__srv__SolveIK_Request
{
  double x;
  double y;
  double z;
} rt_interfaces__srv__SolveIK_Request;

// Struct for a sequence of rt_interfaces__srv__SolveIK_Request.
typedef struct rt_interfaces__srv__SolveIK_Request__Sequence
{
  rt_interfaces__srv__SolveIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt_interfaces__srv__SolveIK_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SolveIK in the package rt_interfaces.
typedef struct rt_interfaces__srv__SolveIK_Response
{
  double t1;
  double t2;
  double t3;
  bool success;
  double mis;
} rt_interfaces__srv__SolveIK_Response;

// Struct for a sequence of rt_interfaces__srv__SolveIK_Response.
typedef struct rt_interfaces__srv__SolveIK_Response__Sequence
{
  rt_interfaces__srv__SolveIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rt_interfaces__srv__SolveIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RT_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
