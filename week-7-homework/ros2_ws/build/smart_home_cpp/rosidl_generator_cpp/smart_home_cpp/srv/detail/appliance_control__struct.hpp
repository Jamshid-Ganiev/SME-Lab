// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smart_home_cpp:srv/ApplianceControl.idl
// generated code does not contain a copyright notice

#ifndef SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_HPP_
#define SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__smart_home_cpp__srv__ApplianceControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__smart_home_cpp__srv__ApplianceControl_Request __declspec(deprecated)
#endif

namespace smart_home_cpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplianceControl_Request_
{
  using Type = ApplianceControl_Request_<ContainerAllocator>;

  explicit ApplianceControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->appliance = "";
      this->on = false;
    }
  }

  explicit ApplianceControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : appliance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->appliance = "";
      this->on = false;
    }
  }

  // field types and members
  using _appliance_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _appliance_type appliance;
  using _on_type =
    bool;
  _on_type on;

  // setters for named parameter idiom
  Type & set__appliance(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->appliance = _arg;
    return *this;
  }
  Type & set__on(
    const bool & _arg)
  {
    this->on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_home_cpp__srv__ApplianceControl_Request
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_home_cpp__srv__ApplianceControl_Request
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplianceControl_Request_ & other) const
  {
    if (this->appliance != other.appliance) {
      return false;
    }
    if (this->on != other.on) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplianceControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplianceControl_Request_

// alias to use template instance with default allocator
using ApplianceControl_Request =
  smart_home_cpp::srv::ApplianceControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_home_cpp


#ifndef _WIN32
# define DEPRECATED__smart_home_cpp__srv__ApplianceControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__smart_home_cpp__srv__ApplianceControl_Response __declspec(deprecated)
#endif

namespace smart_home_cpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplianceControl_Response_
{
  using Type = ApplianceControl_Response_<ContainerAllocator>;

  explicit ApplianceControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->feedback = "";
    }
  }

  explicit ApplianceControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->feedback = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _feedback_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__feedback(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smart_home_cpp__srv__ApplianceControl_Response
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smart_home_cpp__srv__ApplianceControl_Response
    std::shared_ptr<smart_home_cpp::srv::ApplianceControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplianceControl_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplianceControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplianceControl_Response_

// alias to use template instance with default allocator
using ApplianceControl_Response =
  smart_home_cpp::srv::ApplianceControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace smart_home_cpp

namespace smart_home_cpp
{

namespace srv
{

struct ApplianceControl
{
  using Request = smart_home_cpp::srv::ApplianceControl_Request;
  using Response = smart_home_cpp::srv::ApplianceControl_Response;
};

}  // namespace srv

}  // namespace smart_home_cpp

#endif  // SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_HPP_
