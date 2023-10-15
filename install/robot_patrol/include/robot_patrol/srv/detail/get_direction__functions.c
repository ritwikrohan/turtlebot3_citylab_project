// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice
#include "robot_patrol/srv/detail/get_direction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `laser_data`
#include "sensor_msgs/msg/detail/laser_scan__functions.h"

bool
robot_patrol__srv__GetDirection_Request__init(robot_patrol__srv__GetDirection_Request * msg)
{
  if (!msg) {
    return false;
  }
  // laser_data
  if (!sensor_msgs__msg__LaserScan__init(&msg->laser_data)) {
    robot_patrol__srv__GetDirection_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_patrol__srv__GetDirection_Request__fini(robot_patrol__srv__GetDirection_Request * msg)
{
  if (!msg) {
    return;
  }
  // laser_data
  sensor_msgs__msg__LaserScan__fini(&msg->laser_data);
}

robot_patrol__srv__GetDirection_Request *
robot_patrol__srv__GetDirection_Request__create()
{
  robot_patrol__srv__GetDirection_Request * msg = (robot_patrol__srv__GetDirection_Request *)malloc(sizeof(robot_patrol__srv__GetDirection_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_patrol__srv__GetDirection_Request));
  bool success = robot_patrol__srv__GetDirection_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_patrol__srv__GetDirection_Request__destroy(robot_patrol__srv__GetDirection_Request * msg)
{
  if (msg) {
    robot_patrol__srv__GetDirection_Request__fini(msg);
  }
  free(msg);
}


bool
robot_patrol__srv__GetDirection_Request__Sequence__init(robot_patrol__srv__GetDirection_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_patrol__srv__GetDirection_Request * data = NULL;
  if (size) {
    data = (robot_patrol__srv__GetDirection_Request *)calloc(size, sizeof(robot_patrol__srv__GetDirection_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_patrol__srv__GetDirection_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_patrol__srv__GetDirection_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_patrol__srv__GetDirection_Request__Sequence__fini(robot_patrol__srv__GetDirection_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_patrol__srv__GetDirection_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_patrol__srv__GetDirection_Request__Sequence *
robot_patrol__srv__GetDirection_Request__Sequence__create(size_t size)
{
  robot_patrol__srv__GetDirection_Request__Sequence * array = (robot_patrol__srv__GetDirection_Request__Sequence *)malloc(sizeof(robot_patrol__srv__GetDirection_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_patrol__srv__GetDirection_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_patrol__srv__GetDirection_Request__Sequence__destroy(robot_patrol__srv__GetDirection_Request__Sequence * array)
{
  if (array) {
    robot_patrol__srv__GetDirection_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_patrol__srv__GetDirection_Response__init(robot_patrol__srv__GetDirection_Response * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    robot_patrol__srv__GetDirection_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_patrol__srv__GetDirection_Response__fini(robot_patrol__srv__GetDirection_Response * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
}

robot_patrol__srv__GetDirection_Response *
robot_patrol__srv__GetDirection_Response__create()
{
  robot_patrol__srv__GetDirection_Response * msg = (robot_patrol__srv__GetDirection_Response *)malloc(sizeof(robot_patrol__srv__GetDirection_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_patrol__srv__GetDirection_Response));
  bool success = robot_patrol__srv__GetDirection_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_patrol__srv__GetDirection_Response__destroy(robot_patrol__srv__GetDirection_Response * msg)
{
  if (msg) {
    robot_patrol__srv__GetDirection_Response__fini(msg);
  }
  free(msg);
}


bool
robot_patrol__srv__GetDirection_Response__Sequence__init(robot_patrol__srv__GetDirection_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_patrol__srv__GetDirection_Response * data = NULL;
  if (size) {
    data = (robot_patrol__srv__GetDirection_Response *)calloc(size, sizeof(robot_patrol__srv__GetDirection_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_patrol__srv__GetDirection_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_patrol__srv__GetDirection_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_patrol__srv__GetDirection_Response__Sequence__fini(robot_patrol__srv__GetDirection_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_patrol__srv__GetDirection_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_patrol__srv__GetDirection_Response__Sequence *
robot_patrol__srv__GetDirection_Response__Sequence__create(size_t size)
{
  robot_patrol__srv__GetDirection_Response__Sequence * array = (robot_patrol__srv__GetDirection_Response__Sequence *)malloc(sizeof(robot_patrol__srv__GetDirection_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_patrol__srv__GetDirection_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_patrol__srv__GetDirection_Response__Sequence__destroy(robot_patrol__srv__GetDirection_Response__Sequence * array)
{
  if (array) {
    robot_patrol__srv__GetDirection_Response__Sequence__fini(array);
  }
  free(array);
}
