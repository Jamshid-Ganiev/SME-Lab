// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dynamic_fleet_manager:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_HPP_
#define DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Goal __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Goal __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_Goal_
{
  using Type = FleetManagement_Goal_<ContainerAllocator>;

  explicit FleetManagement_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FleetManagement_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fleet_data_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _fleet_data_type fleet_data;

  // setters for named parameter idiom
  Type & set__fleet_data(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->fleet_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Goal
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Goal
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_Goal_ & other) const
  {
    if (this->fleet_data != other.fleet_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_Goal_

// alias to use template instance with default allocator
using FleetManagement_Goal =
  dynamic_fleet_manager::action::FleetManagement_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager


#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Result __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Result __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_Result_
{
  using Type = FleetManagement_Result_<ContainerAllocator>;

  explicit FleetManagement_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FleetManagement_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vehicle_routes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _vehicle_routes_type vehicle_routes;

  // setters for named parameter idiom
  Type & set__vehicle_routes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->vehicle_routes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Result
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Result
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_Result_ & other) const
  {
    if (this->vehicle_routes != other.vehicle_routes) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_Result_

// alias to use template instance with default allocator
using FleetManagement_Result =
  dynamic_fleet_manager::action::FleetManagement_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager


#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Feedback __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_Feedback_
{
  using Type = FleetManagement_Feedback_<ContainerAllocator>;

  explicit FleetManagement_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completion_percentage = 0.0f;
    }
  }

  explicit FleetManagement_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completion_percentage = 0.0f;
    }
  }

  // field types and members
  using _completion_percentage_type =
    float;
  _completion_percentage_type completion_percentage;

  // setters for named parameter idiom
  Type & set__completion_percentage(
    const float & _arg)
  {
    this->completion_percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Feedback
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_Feedback
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_Feedback_ & other) const
  {
    if (this->completion_percentage != other.completion_percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_Feedback_

// alias to use template instance with default allocator
using FleetManagement_Feedback =
  dynamic_fleet_manager::action::FleetManagement_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Request __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_SendGoal_Request_
{
  using Type = FleetManagement_SendGoal_Request_<ContainerAllocator>;

  explicit FleetManagement_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FleetManagement_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const dynamic_fleet_manager::action::FleetManagement_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Request
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Request
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_SendGoal_Request_

// alias to use template instance with default allocator
using FleetManagement_SendGoal_Request =
  dynamic_fleet_manager::action::FleetManagement_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Response __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_SendGoal_Response_
{
  using Type = FleetManagement_SendGoal_Response_<ContainerAllocator>;

  explicit FleetManagement_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FleetManagement_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Response
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_SendGoal_Response
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_SendGoal_Response_

// alias to use template instance with default allocator
using FleetManagement_SendGoal_Response =
  dynamic_fleet_manager::action::FleetManagement_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace dynamic_fleet_manager
{

namespace action
{

struct FleetManagement_SendGoal
{
  using Request = dynamic_fleet_manager::action::FleetManagement_SendGoal_Request;
  using Response = dynamic_fleet_manager::action::FleetManagement_SendGoal_Response;
};

}  // namespace action

}  // namespace dynamic_fleet_manager


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Request __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_GetResult_Request_
{
  using Type = FleetManagement_GetResult_Request_<ContainerAllocator>;

  explicit FleetManagement_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FleetManagement_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Request
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Request
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_GetResult_Request_

// alias to use template instance with default allocator
using FleetManagement_GetResult_Request =
  dynamic_fleet_manager::action::FleetManagement_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager


// Include directives for member types
// Member 'result'
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Response __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_GetResult_Response_
{
  using Type = FleetManagement_GetResult_Response_<ContainerAllocator>;

  explicit FleetManagement_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FleetManagement_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const dynamic_fleet_manager::action::FleetManagement_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Response
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_GetResult_Response
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_GetResult_Response_

// alias to use template instance with default allocator
using FleetManagement_GetResult_Response =
  dynamic_fleet_manager::action::FleetManagement_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace dynamic_fleet_manager
{

namespace action
{

struct FleetManagement_GetResult
{
  using Request = dynamic_fleet_manager::action::FleetManagement_GetResult_Request;
  using Response = dynamic_fleet_manager::action::FleetManagement_GetResult_Response;
};

}  // namespace action

}  // namespace dynamic_fleet_manager


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__dynamic_fleet_manager__action__FleetManagement_FeedbackMessage __declspec(deprecated)
#endif

namespace dynamic_fleet_manager
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FleetManagement_FeedbackMessage_
{
  using Type = FleetManagement_FeedbackMessage_<ContainerAllocator>;

  explicit FleetManagement_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FleetManagement_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const dynamic_fleet_manager::action::FleetManagement_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_FeedbackMessage
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dynamic_fleet_manager__action__FleetManagement_FeedbackMessage
    std::shared_ptr<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetManagement_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetManagement_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetManagement_FeedbackMessage_

// alias to use template instance with default allocator
using FleetManagement_FeedbackMessage =
  dynamic_fleet_manager::action::FleetManagement_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace dynamic_fleet_manager

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

struct FleetManagement
{
  /// The goal message defined in the action definition.
  using Goal = dynamic_fleet_manager::action::FleetManagement_Goal;
  /// The result message defined in the action definition.
  using Result = dynamic_fleet_manager::action::FleetManagement_Result;
  /// The feedback message defined in the action definition.
  using Feedback = dynamic_fleet_manager::action::FleetManagement_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = dynamic_fleet_manager::action::FleetManagement_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = dynamic_fleet_manager::action::FleetManagement_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = dynamic_fleet_manager::action::FleetManagement_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FleetManagement FleetManagement;

}  // namespace action

}  // namespace dynamic_fleet_manager

#endif  // DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__STRUCT_HPP_
