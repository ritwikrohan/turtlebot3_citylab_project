// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__TRAITS_HPP_
#define ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__TRAITS_HPP_

#include "robot_patrol/srv/detail/get_direction__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'laser_data'
#include "sensor_msgs/msg/detail/laser_scan__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_patrol::srv::GetDirection_Request>()
{
  return "robot_patrol::srv::GetDirection_Request";
}

template<>
inline const char * name<robot_patrol::srv::GetDirection_Request>()
{
  return "robot_patrol/srv/GetDirection_Request";
}

template<>
struct has_fixed_size<robot_patrol::srv::GetDirection_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::LaserScan>::value> {};

template<>
struct has_bounded_size<robot_patrol::srv::GetDirection_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::LaserScan>::value> {};

template<>
struct is_message<robot_patrol::srv::GetDirection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_patrol::srv::GetDirection_Response>()
{
  return "robot_patrol::srv::GetDirection_Response";
}

template<>
inline const char * name<robot_patrol::srv::GetDirection_Response>()
{
  return "robot_patrol/srv/GetDirection_Response";
}

template<>
struct has_fixed_size<robot_patrol::srv::GetDirection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_patrol::srv::GetDirection_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_patrol::srv::GetDirection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_patrol::srv::GetDirection>()
{
  return "robot_patrol::srv::GetDirection";
}

template<>
inline const char * name<robot_patrol::srv::GetDirection>()
{
  return "robot_patrol/srv/GetDirection";
}

template<>
struct has_fixed_size<robot_patrol::srv::GetDirection>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_patrol::srv::GetDirection_Request>::value &&
    has_fixed_size<robot_patrol::srv::GetDirection_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_patrol::srv::GetDirection>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_patrol::srv::GetDirection_Request>::value &&
    has_bounded_size<robot_patrol::srv::GetDirection_Response>::value
  >
{
};

template<>
struct is_service<robot_patrol::srv::GetDirection>
  : std::true_type
{
};

template<>
struct is_service_request<robot_patrol::srv::GetDirection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_patrol::srv::GetDirection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__TRAITS_HPP_
