// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smart_home_cpp:srv/ApplianceControl.idl
// generated code does not contain a copyright notice

#ifndef SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__BUILDER_HPP_
#define SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smart_home_cpp/srv/detail/appliance_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smart_home_cpp
{

namespace srv
{

namespace builder
{

class Init_ApplianceControl_Request_on
{
public:
  explicit Init_ApplianceControl_Request_on(::smart_home_cpp::srv::ApplianceControl_Request & msg)
  : msg_(msg)
  {}
  ::smart_home_cpp::srv::ApplianceControl_Request on(::smart_home_cpp::srv::ApplianceControl_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_home_cpp::srv::ApplianceControl_Request msg_;
};

class Init_ApplianceControl_Request_appliance
{
public:
  Init_ApplianceControl_Request_appliance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplianceControl_Request_on appliance(::smart_home_cpp::srv::ApplianceControl_Request::_appliance_type arg)
  {
    msg_.appliance = std::move(arg);
    return Init_ApplianceControl_Request_on(msg_);
  }

private:
  ::smart_home_cpp::srv::ApplianceControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_home_cpp::srv::ApplianceControl_Request>()
{
  return smart_home_cpp::srv::builder::Init_ApplianceControl_Request_appliance();
}

}  // namespace smart_home_cpp


namespace smart_home_cpp
{

namespace srv
{

namespace builder
{

class Init_ApplianceControl_Response_feedback
{
public:
  explicit Init_ApplianceControl_Response_feedback(::smart_home_cpp::srv::ApplianceControl_Response & msg)
  : msg_(msg)
  {}
  ::smart_home_cpp::srv::ApplianceControl_Response feedback(::smart_home_cpp::srv::ApplianceControl_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smart_home_cpp::srv::ApplianceControl_Response msg_;
};

class Init_ApplianceControl_Response_success
{
public:
  Init_ApplianceControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplianceControl_Response_feedback success(::smart_home_cpp::srv::ApplianceControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplianceControl_Response_feedback(msg_);
  }

private:
  ::smart_home_cpp::srv::ApplianceControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::smart_home_cpp::srv::ApplianceControl_Response>()
{
  return smart_home_cpp::srv::builder::Init_ApplianceControl_Response_success();
}

}  // namespace smart_home_cpp

#endif  // SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__BUILDER_HPP_
