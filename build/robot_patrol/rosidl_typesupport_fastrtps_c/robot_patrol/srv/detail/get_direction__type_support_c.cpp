// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice
#include "robot_patrol/srv/detail/get_direction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_patrol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_patrol/srv/detail/get_direction__struct.h"
#include "robot_patrol/srv/detail/get_direction__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/laser_scan__functions.h"  // laser_data

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_patrol
size_t get_serialized_size_sensor_msgs__msg__LaserScan(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_patrol
size_t max_serialized_size_sensor_msgs__msg__LaserScan(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robot_patrol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan)();


using _GetDirection_Request__ros_msg_type = robot_patrol__srv__GetDirection_Request;

static bool _GetDirection_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDirection_Request__ros_msg_type * ros_message = static_cast<const _GetDirection_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->laser_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetDirection_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDirection_Request__ros_msg_type * ros_message = static_cast<_GetDirection_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: laser_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, LaserScan
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->laser_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_patrol
size_t get_serialized_size_robot_patrol__srv__GetDirection_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDirection_Request__ros_msg_type * ros_message = static_cast<const _GetDirection_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name laser_data

  current_alignment += get_serialized_size_sensor_msgs__msg__LaserScan(
    &(ros_message->laser_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetDirection_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_patrol__srv__GetDirection_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_patrol
size_t max_serialized_size_robot_patrol__srv__GetDirection_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: laser_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__LaserScan(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetDirection_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robot_patrol__srv__GetDirection_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDirection_Request = {
  "robot_patrol::srv",
  "GetDirection_Request",
  _GetDirection_Request__cdr_serialize,
  _GetDirection_Request__cdr_deserialize,
  _GetDirection_Request__get_serialized_size,
  _GetDirection_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDirection_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDirection_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_patrol, srv, GetDirection_Request)() {
  return &_GetDirection_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "robot_patrol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "robot_patrol/srv/detail/get_direction__struct.h"
// already included above
// #include "robot_patrol/srv/detail/get_direction__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // direction
#include "rosidl_runtime_c/string_functions.h"  // direction

// forward declare type support functions


using _GetDirection_Response__ros_msg_type = robot_patrol__srv__GetDirection_Response;

static bool _GetDirection_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetDirection_Response__ros_msg_type * ros_message = static_cast<const _GetDirection_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    const rosidl_runtime_c__String * str = &ros_message->direction;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetDirection_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetDirection_Response__ros_msg_type * ros_message = static_cast<_GetDirection_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->direction.data) {
      rosidl_runtime_c__String__init(&ros_message->direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'direction'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_patrol
size_t get_serialized_size_robot_patrol__srv__GetDirection_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetDirection_Response__ros_msg_type * ros_message = static_cast<const _GetDirection_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->direction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetDirection_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_patrol__srv__GetDirection_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_patrol
size_t max_serialized_size_robot_patrol__srv__GetDirection_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetDirection_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robot_patrol__srv__GetDirection_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetDirection_Response = {
  "robot_patrol::srv",
  "GetDirection_Response",
  _GetDirection_Response__cdr_serialize,
  _GetDirection_Response__cdr_deserialize,
  _GetDirection_Response__get_serialized_size,
  _GetDirection_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDirection_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetDirection_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_patrol, srv, GetDirection_Response)() {
  return &_GetDirection_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "robot_patrol/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_patrol/srv/get_direction.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetDirection__callbacks = {
  "robot_patrol::srv",
  "GetDirection",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_patrol, srv, GetDirection_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_patrol, srv, GetDirection_Response)(),
};

static rosidl_service_type_support_t GetDirection__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetDirection__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_patrol, srv, GetDirection)() {
  return &GetDirection__handle;
}

#if defined(__cplusplus)
}
#endif
