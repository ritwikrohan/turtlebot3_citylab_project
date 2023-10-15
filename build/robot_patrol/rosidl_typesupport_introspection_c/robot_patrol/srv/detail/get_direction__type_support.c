// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_patrol/srv/detail/get_direction__rosidl_typesupport_introspection_c.h"
#include "robot_patrol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_patrol/srv/detail/get_direction__functions.h"
#include "robot_patrol/srv/detail/get_direction__struct.h"


// Include directives for member types
// Member `laser_data`
#include "sensor_msgs/msg/laser_scan.h"
// Member `laser_data`
#include "sensor_msgs/msg/detail/laser_scan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_patrol__srv__GetDirection_Request__init(message_memory);
}

void GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_fini_function(void * message_memory)
{
  robot_patrol__srv__GetDirection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_member_array[1] = {
  {
    "laser_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_patrol__srv__GetDirection_Request, laser_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_members = {
  "robot_patrol__srv",  // message namespace
  "GetDirection_Request",  // message name
  1,  // number of fields
  sizeof(robot_patrol__srv__GetDirection_Request),
  GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_member_array,  // message members
  GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_type_support_handle = {
  0,
  &GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_patrol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Request)() {
  GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, LaserScan)();
  if (!GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_type_support_handle.typesupport_identifier) {
    GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDirection_Request__rosidl_typesupport_introspection_c__GetDirection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_patrol/srv/detail/get_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_patrol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_patrol/srv/detail/get_direction__functions.h"
// already included above
// #include "robot_patrol/srv/detail/get_direction__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_patrol__srv__GetDirection_Response__init(message_memory);
}

void GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_fini_function(void * message_memory)
{
  robot_patrol__srv__GetDirection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_member_array[1] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_patrol__srv__GetDirection_Response, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_members = {
  "robot_patrol__srv",  // message namespace
  "GetDirection_Response",  // message name
  1,  // number of fields
  sizeof(robot_patrol__srv__GetDirection_Response),
  GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_member_array,  // message members
  GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_type_support_handle = {
  0,
  &GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_patrol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Response)() {
  if (!GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_type_support_handle.typesupport_identifier) {
    GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDirection_Response__rosidl_typesupport_introspection_c__GetDirection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_patrol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_patrol/srv/detail/get_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_members = {
  "robot_patrol__srv",  // service namespace
  "GetDirection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_Request_message_type_support_handle,
  NULL  // response message
  // robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_type_support_handle = {
  0,
  &robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_patrol
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection)() {
  if (!robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_type_support_handle.typesupport_identifier) {
    robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_patrol, srv, GetDirection_Response)()->data;
  }

  return &robot_patrol__srv__detail__get_direction__rosidl_typesupport_introspection_c__GetDirection_service_type_support_handle;
}
