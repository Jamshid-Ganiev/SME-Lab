// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamic_fleet_manager:action/FleetManagement.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_Goal(_init);
}

void FleetManagement_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_Goal *>(message_memory);
  typed_message->~FleetManagement_Goal();
}

size_t size_function__FleetManagement_Goal__fleet_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FleetManagement_Goal__fleet_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FleetManagement_Goal__fleet_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FleetManagement_Goal__fleet_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FleetManagement_Goal__fleet_data(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FleetManagement_Goal__fleet_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FleetManagement_Goal__fleet_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FleetManagement_Goal__fleet_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_Goal_message_member_array[1] = {
  {
    "fleet_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_Goal, fleet_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__FleetManagement_Goal__fleet_data,  // size() function pointer
    get_const_function__FleetManagement_Goal__fleet_data,  // get_const(index) function pointer
    get_function__FleetManagement_Goal__fleet_data,  // get(index) function pointer
    fetch_function__FleetManagement_Goal__fleet_data,  // fetch(index, &value) function pointer
    assign_function__FleetManagement_Goal__fleet_data,  // assign(index, value) function pointer
    resize_function__FleetManagement_Goal__fleet_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_Goal_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_Goal",  // message name
  1,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_Goal),
  FleetManagement_Goal_message_member_array,  // message members
  FleetManagement_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Goal>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_Goal)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_Result(_init);
}

void FleetManagement_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_Result *>(message_memory);
  typed_message->~FleetManagement_Result();
}

size_t size_function__FleetManagement_Result__vehicle_routes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FleetManagement_Result__vehicle_routes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__FleetManagement_Result__vehicle_routes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__FleetManagement_Result__vehicle_routes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__FleetManagement_Result__vehicle_routes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__FleetManagement_Result__vehicle_routes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__FleetManagement_Result__vehicle_routes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__FleetManagement_Result__vehicle_routes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_Result_message_member_array[1] = {
  {
    "vehicle_routes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_Result, vehicle_routes),  // bytes offset in struct
    nullptr,  // default value
    size_function__FleetManagement_Result__vehicle_routes,  // size() function pointer
    get_const_function__FleetManagement_Result__vehicle_routes,  // get_const(index) function pointer
    get_function__FleetManagement_Result__vehicle_routes,  // get(index) function pointer
    fetch_function__FleetManagement_Result__vehicle_routes,  // fetch(index, &value) function pointer
    assign_function__FleetManagement_Result__vehicle_routes,  // assign(index, value) function pointer
    resize_function__FleetManagement_Result__vehicle_routes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_Result_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_Result",  // message name
  1,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_Result),
  FleetManagement_Result_message_member_array,  // message members
  FleetManagement_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Result>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_Result)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_Feedback(_init);
}

void FleetManagement_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_Feedback *>(message_memory);
  typed_message->~FleetManagement_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_Feedback_message_member_array[1] = {
  {
    "completion_percentage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_Feedback, completion_percentage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_Feedback_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_Feedback",  // message name
  1,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_Feedback),
  FleetManagement_Feedback_message_member_array,  // message members
  FleetManagement_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Feedback>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_Feedback)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_SendGoal_Request(_init);
}

void FleetManagement_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request *>(message_memory);
  typed_message->~FleetManagement_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_SendGoal_Request_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Request),
  FleetManagement_SendGoal_Request_message_member_array,  // message members
  FleetManagement_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_SendGoal_Request)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_SendGoal_Response(_init);
}

void FleetManagement_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response *>(message_memory);
  typed_message->~FleetManagement_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_SendGoal_Response_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_SendGoal_Response),
  FleetManagement_SendGoal_Response_message_member_array,  // message members
  FleetManagement_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_SendGoal_Response)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FleetManagement_SendGoal_service_members = {
  "dynamic_fleet_manager::action",  // service namespace
  "FleetManagement_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FleetManagement_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dynamic_fleet_manager::action::FleetManagement_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_GetResult_Request(_init);
}

void FleetManagement_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_GetResult_Request *>(message_memory);
  typed_message->~FleetManagement_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_GetResult_Request_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_GetResult_Request),
  FleetManagement_GetResult_Request_message_member_array,  // message members
  FleetManagement_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_GetResult_Request)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_GetResult_Response(_init);
}

void FleetManagement_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_GetResult_Response *>(message_memory);
  typed_message->~FleetManagement_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_GetResult_Response_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_GetResult_Response),
  FleetManagement_GetResult_Response_message_member_array,  // message members
  FleetManagement_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_GetResult_Response)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FleetManagement_GetResult_service_members = {
  "dynamic_fleet_manager::action",  // service namespace
  "FleetManagement_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FleetManagement_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dynamic_fleet_manager::action::FleetManagement_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dynamic_fleet_manager::action::FleetManagement_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dynamic_fleet_manager::action::FleetManagement_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamic_fleet_manager
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FleetManagement_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamic_fleet_manager::action::FleetManagement_FeedbackMessage(_init);
}

void FleetManagement_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage *>(message_memory);
  typed_message->~FleetManagement_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FleetManagement_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamic_fleet_manager::action::FleetManagement_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FleetManagement_FeedbackMessage_message_members = {
  "dynamic_fleet_manager::action",  // message namespace
  "FleetManagement_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(dynamic_fleet_manager::action::FleetManagement_FeedbackMessage),
  FleetManagement_FeedbackMessage_message_member_array,  // message members
  FleetManagement_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FleetManagement_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FleetManagement_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FleetManagement_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace dynamic_fleet_manager


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>()
{
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamic_fleet_manager, action, FleetManagement_FeedbackMessage)() {
  return &::dynamic_fleet_manager::action::rosidl_typesupport_introspection_cpp::FleetManagement_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
