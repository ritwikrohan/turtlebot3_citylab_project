// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__BUILDER_HPP_
#define ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__BUILDER_HPP_

#include "robot_patrol/srv/detail/get_direction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_patrol
{

namespace srv
{

namespace builder
{

class Init_GetDirection_Request_laser_data
{
public:
  Init_GetDirection_Request_laser_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_patrol::srv::GetDirection_Request laser_data(::robot_patrol::srv::GetDirection_Request::_laser_data_type arg)
  {
    msg_.laser_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_patrol::srv::GetDirection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_patrol::srv::GetDirection_Request>()
{
  return robot_patrol::srv::builder::Init_GetDirection_Request_laser_data();
}

}  // namespace robot_patrol


namespace robot_patrol
{

namespace srv
{

namespace builder
{

class Init_GetDirection_Response_direction
{
public:
  Init_GetDirection_Response_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_patrol::srv::GetDirection_Response direction(::robot_patrol::srv::GetDirection_Response::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_patrol::srv::GetDirection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_patrol::srv::GetDirection_Response>()
{
  return robot_patrol::srv::builder::Init_GetDirection_Response_direction();
}

}  // namespace robot_patrol

#endif  // ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__BUILDER_HPP_
