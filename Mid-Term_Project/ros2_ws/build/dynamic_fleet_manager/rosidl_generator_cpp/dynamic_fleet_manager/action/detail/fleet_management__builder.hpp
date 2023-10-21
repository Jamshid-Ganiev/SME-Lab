// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamic_fleet_manager:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
#define DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Goal_fleet_data
{
public:
  Init_FleetManagement_Goal_fleet_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_Goal fleet_data(::dynamic_fleet_manager::action::FleetManagement_Goal::_fleet_data_type arg)
  {
    msg_.fleet_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_Goal>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_Goal_fleet_data();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Result_vehicle_routes
{
public:
  Init_FleetManagement_Result_vehicle_routes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_Result vehicle_routes(::dynamic_fleet_manager::action::FleetManagement_Result::_vehicle_routes_type arg)
  {
    msg_.vehicle_routes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_Result>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_Result_vehicle_routes();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_Feedback_completion_percentage
{
public:
  Init_FleetManagement_Feedback_completion_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_Feedback completion_percentage(::dynamic_fleet_manager::action::FleetManagement_Feedback::_completion_percentage_type arg)
  {
    msg_.completion_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_Feedback>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_Feedback_completion_percentage();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Request_goal
{
public:
  explicit Init_FleetManagement_SendGoal_Request_goal(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request goal(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request msg_;
};

class Init_FleetManagement_SendGoal_Request_goal_id
{
public:
  Init_FleetManagement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Request_goal goal_id(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_SendGoal_Request_goal(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_SendGoal_Request_goal_id();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_SendGoal_Response_stamp
{
public:
  explicit Init_FleetManagement_SendGoal_Response_stamp(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response stamp(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response msg_;
};

class Init_FleetManagement_SendGoal_Response_accepted
{
public:
  Init_FleetManagement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_SendGoal_Response_stamp accepted(::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FleetManagement_SendGoal_Response_stamp(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_SendGoal_Response_accepted();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Request_goal_id
{
public:
  Init_FleetManagement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_GetResult_Request goal_id(::dynamic_fleet_manager::action::FleetManagement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_GetResult_Request>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_GetResult_Request_goal_id();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_GetResult_Response_result
{
public:
  explicit Init_FleetManagement_GetResult_Response_result(::dynamic_fleet_manager::action::FleetManagement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_GetResult_Response result(::dynamic_fleet_manager::action::FleetManagement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_GetResult_Response msg_;
};

class Init_FleetManagement_GetResult_Response_status
{
public:
  Init_FleetManagement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_GetResult_Response_result status(::dynamic_fleet_manager::action::FleetManagement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FleetManagement_GetResult_Response_result(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_GetResult_Response>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_GetResult_Response_status();
}

}  // namespace dynamic_fleet_manager


namespace dynamic_fleet_manager
{

namespace action
{

namespace builder
{

class Init_FleetManagement_FeedbackMessage_feedback
{
public:
  explicit Init_FleetManagement_FeedbackMessage_feedback(::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage feedback(::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage msg_;
};

class Init_FleetManagement_FeedbackMessage_goal_id
{
public:
  Init_FleetManagement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetManagement_FeedbackMessage_feedback goal_id(::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FleetManagement_FeedbackMessage_feedback(msg_);
  }

private:
  ::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>()
{
  return dynamic_fleet_manager::action::builder::Init_FleetManagement_FeedbackMessage_goal_id();
}

}  // namespace dynamic_fleet_manager

#endif  // DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__BUILDER_HPP_
