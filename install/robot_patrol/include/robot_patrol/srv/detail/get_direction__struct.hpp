// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_patrol:srv/GetDirection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_HPP_
#define ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'laser_data'
#include "sensor_msgs/msg/detail/laser_scan__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_patrol__srv__GetDirection_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_patrol__srv__GetDirection_Request __declspec(deprecated)
#endif

namespace robot_patrol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDirection_Request_
{
  using Type = GetDirection_Request_<ContainerAllocator>;

  explicit GetDirection_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laser_data(_init)
  {
    (void)_init;
  }

  explicit GetDirection_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laser_data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _laser_data_type =
    sensor_msgs::msg::LaserScan_<ContainerAllocator>;
  _laser_data_type laser_data;

  // setters for named parameter idiom
  Type & set__laser_data(
    const sensor_msgs::msg::LaserScan_<ContainerAllocator> & _arg)
  {
    this->laser_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_patrol::srv::GetDirection_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_patrol::srv::GetDirection_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_patrol::srv::GetDirection_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_patrol::srv::GetDirection_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_patrol__srv__GetDirection_Request
    std::shared_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_patrol__srv__GetDirection_Request
    std::shared_ptr<robot_patrol::srv::GetDirection_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDirection_Request_ & other) const
  {
    if (this->laser_data != other.laser_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDirection_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDirection_Request_

// alias to use template instance with default allocator
using GetDirection_Request =
  robot_patrol::srv::GetDirection_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_patrol


#ifndef _WIN32
# define DEPRECATED__robot_patrol__srv__GetDirection_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_patrol__srv__GetDirection_Response __declspec(deprecated)
#endif

namespace robot_patrol
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetDirection_Response_
{
  using Type = GetDirection_Response_<ContainerAllocator>;

  explicit GetDirection_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  explicit GetDirection_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_patrol::srv::GetDirection_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_patrol::srv::GetDirection_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_patrol::srv::GetDirection_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_patrol::srv::GetDirection_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_patrol__srv__GetDirection_Response
    std::shared_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_patrol__srv__GetDirection_Response
    std::shared_ptr<robot_patrol::srv::GetDirection_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetDirection_Response_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetDirection_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetDirection_Response_

// alias to use template instance with default allocator
using GetDirection_Response =
  robot_patrol::srv::GetDirection_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_patrol

namespace robot_patrol
{

namespace srv
{

struct GetDirection
{
  using Request = robot_patrol::srv::GetDirection_Request;
  using Response = robot_patrol::srv::GetDirection_Response;
};

}  // namespace srv

}  // namespace robot_patrol

#endif  // ROBOT_PATROL__SRV__DETAIL__GET_DIRECTION__STRUCT_HPP_
