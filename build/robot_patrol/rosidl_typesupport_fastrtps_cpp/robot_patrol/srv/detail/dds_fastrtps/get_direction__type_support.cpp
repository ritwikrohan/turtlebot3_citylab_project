// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice
#include "robot_patrol/srv/detail/get_direction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_patrol/srv/detail/get_direction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::LaserScan &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::LaserScan &);
size_t get_serialized_size(
  const sensor_msgs::msg::LaserScan &,
  size_t current_alignment);
size_t
max_serialized_size_LaserScan(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace robot_patrol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
cdr_serialize(
  const robot_patrol::srv::GetDirection_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: laser_data
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.laser_data,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_patrol::srv::GetDirection_Request & ros_message)
{
  // Member: laser_data
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.laser_data);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
get_serialized_size(
  const robot_patrol::srv::GetDirection_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: laser_data

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.laser_data, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
max_serialized_size_GetDirection_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: laser_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaserScan(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetDirection_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_patrol::srv::GetDirection_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDirection_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_patrol::srv::GetDirection_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDirection_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_patrol::srv::GetDirection_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDirection_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDirection_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDirection_Request__callbacks = {
  "robot_patrol::srv",
  "GetDirection_Request",
  _GetDirection_Request__cdr_serialize,
  _GetDirection_Request__cdr_deserialize,
  _GetDirection_Request__get_serialized_size,
  _GetDirection_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetDirection_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDirection_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_patrol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_patrol
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_patrol::srv::GetDirection_Request>()
{
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_patrol, srv, GetDirection_Request)() {
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_patrol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
cdr_serialize(
  const robot_patrol::srv::GetDirection_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: direction
  cdr << ros_message.direction;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_patrol::srv::GetDirection_Response & ros_message)
{
  // Member: direction
  cdr >> ros_message.direction;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
get_serialized_size(
  const robot_patrol::srv::GetDirection_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.direction.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_patrol
max_serialized_size_GetDirection_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: direction
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

static bool _GetDirection_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_patrol::srv::GetDirection_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetDirection_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_patrol::srv::GetDirection_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetDirection_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_patrol::srv::GetDirection_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetDirection_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetDirection_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetDirection_Response__callbacks = {
  "robot_patrol::srv",
  "GetDirection_Response",
  _GetDirection_Response__cdr_serialize,
  _GetDirection_Response__cdr_deserialize,
  _GetDirection_Response__get_serialized_size,
  _GetDirection_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetDirection_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDirection_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_patrol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_patrol
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_patrol::srv::GetDirection_Response>()
{
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_patrol, srv, GetDirection_Response)() {
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robot_patrol
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetDirection__callbacks = {
  "robot_patrol::srv",
  "GetDirection",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_patrol, srv, GetDirection_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_patrol, srv, GetDirection_Response)(),
};

static rosidl_service_type_support_t _GetDirection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetDirection__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_patrol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_patrol
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_patrol::srv::GetDirection>()
{
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_patrol, srv, GetDirection)() {
  return &robot_patrol::srv::typesupport_fastrtps_cpp::_GetDirection__handle;
}

#ifdef __cplusplus
}
#endif
