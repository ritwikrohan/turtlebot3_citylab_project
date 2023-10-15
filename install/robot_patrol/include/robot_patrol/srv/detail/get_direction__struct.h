// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_H_
#define ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'laser_data'
#include "sensor_msgs/msg/detail/laser_scan__struct.h"

// Struct defined in srv/GetDirection in the package robot_patrol.
typedef struct robot_patrol__srv__GetDirection_Request
{
  sensor_msgs__msg__LaserScan laser_data;
} robot_patrol__srv__GetDirection_Request;

// Struct for a sequence of robot_patrol__srv__GetDirection_Request.
typedef struct robot_patrol__srv__GetDirection_Request__Sequence
{
  robot_patrol__srv__GetDirection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_patrol__srv__GetDirection_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetDirection in the package robot_patrol.
typedef struct robot_patrol__srv__GetDirection_Response
{
  rosidl_runtime_c__String direction;
} robot_patrol__srv__GetDirection_Response;

// Struct for a sequence of robot_patrol__srv__GetDirection_Response.
typedef struct robot_patrol__srv__GetDirection_Response__Sequence
{
  robot_patrol__srv__GetDirection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_patrol__srv__GetDirection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_H_
