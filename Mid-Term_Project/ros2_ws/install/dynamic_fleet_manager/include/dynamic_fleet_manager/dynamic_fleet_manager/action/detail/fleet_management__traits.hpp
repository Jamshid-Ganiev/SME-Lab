// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dynamic_fleet_manager:action/FleetManagement.idl
// generated code does not contain a copyright notice

#ifndef DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
#define DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dynamic_fleet_manager/action/detail/fleet_management__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_data
  {
    if (msg.fleet_data.size() == 0) {
      out << "fleet_data: []";
    } else {
      out << "fleet_data: [";
      size_t pending_items = msg.fleet_data.size();
      for (auto item : msg.fleet_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fleet_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fleet_data.size() == 0) {
      out << "fleet_data: []\n";
    } else {
      out << "fleet_data:\n";
      for (auto item : msg.fleet_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_Goal & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_Goal>()
{
  return "dynamic_fleet_manager::action::FleetManagement_Goal";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_Goal>()
{
  return "dynamic_fleet_manager/action/FleetManagement_Goal";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_routes
  {
    if (msg.vehicle_routes.size() == 0) {
      out << "vehicle_routes: []";
    } else {
      out << "vehicle_routes: [";
      size_t pending_items = msg.vehicle_routes.size();
      for (auto item : msg.vehicle_routes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_routes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_routes.size() == 0) {
      out << "vehicle_routes: []\n";
    } else {
      out << "vehicle_routes:\n";
      for (auto item : msg.vehicle_routes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_Result & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_Result>()
{
  return "dynamic_fleet_manager::action::FleetManagement_Result";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_Result>()
{
  return "dynamic_fleet_manager/action/FleetManagement_Result";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: completion_percentage
  {
    out << "completion_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percentage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: completion_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_percentage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_Feedback & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_Feedback>()
{
  return "dynamic_fleet_manager::action::FleetManagement_Feedback";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_Feedback>()
{
  return "dynamic_fleet_manager/action/FleetManagement_Feedback";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "dynamic_fleet_manager/action/detail/fleet_management__traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_SendGoal_Request & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>()
{
  return "dynamic_fleet_manager::action::FleetManagement_SendGoal_Request";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>()
{
  return "dynamic_fleet_manager/action/FleetManagement_SendGoal_Request";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_SendGoal_Response & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>()
{
  return "dynamic_fleet_manager::action::FleetManagement_SendGoal_Response";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>()
{
  return "dynamic_fleet_manager/action/FleetManagement_SendGoal_Response";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_SendGoal>()
{
  return "dynamic_fleet_manager::action::FleetManagement_SendGoal";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_SendGoal>()
{
  return "dynamic_fleet_manager/action/FleetManagement_SendGoal";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>::value &&
    has_fixed_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>::value &&
    has_bounded_size<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<dynamic_fleet_manager::action::FleetManagement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<dynamic_fleet_manager::action::FleetManagement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamic_fleet_manager::action::FleetManagement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_GetResult_Request & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>()
{
  return "dynamic_fleet_manager::action::FleetManagement_GetResult_Request";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>()
{
  return "dynamic_fleet_manager/action/FleetManagement_GetResult_Request";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_GetResult_Response & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>()
{
  return "dynamic_fleet_manager::action::FleetManagement_GetResult_Response";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>()
{
  return "dynamic_fleet_manager/action/FleetManagement_GetResult_Response";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Result>::value> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Result>::value> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_GetResult>()
{
  return "dynamic_fleet_manager::action::FleetManagement_GetResult";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_GetResult>()
{
  return "dynamic_fleet_manager/action/FleetManagement_GetResult";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>::value &&
    has_fixed_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>::value &&
    has_bounded_size<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<dynamic_fleet_manager::action::FleetManagement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<dynamic_fleet_manager::action::FleetManagement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dynamic_fleet_manager::action::FleetManagement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "dynamic_fleet_manager/action/detail/fleet_management__traits.hpp"

namespace dynamic_fleet_manager
{

namespace action
{

inline void to_flow_style_yaml(
  const FleetManagement_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetManagement_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetManagement_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace dynamic_fleet_manager

namespace rosidl_generator_traits
{

[[deprecated("use dynamic_fleet_manager::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dynamic_fleet_manager::action::FleetManagement_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  dynamic_fleet_manager::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dynamic_fleet_manager::action::to_yaml() instead")]]
inline std::string to_yaml(const dynamic_fleet_manager::action::FleetManagement_FeedbackMessage & msg)
{
  return dynamic_fleet_manager::action::to_yaml(msg);
}

template<>
inline const char * data_type<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>()
{
  return "dynamic_fleet_manager::action::FleetManagement_FeedbackMessage";
}

template<>
inline const char * name<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>()
{
  return "dynamic_fleet_manager/action/FleetManagement_FeedbackMessage";
}

template<>
struct has_fixed_size<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<dynamic_fleet_manager::action::FleetManagement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<dynamic_fleet_manager::action::FleetManagement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<dynamic_fleet_manager::action::FleetManagement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<dynamic_fleet_manager::action::FleetManagement>
  : std::true_type
{
};

template<>
struct is_action_goal<dynamic_fleet_manager::action::FleetManagement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<dynamic_fleet_manager::action::FleetManagement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<dynamic_fleet_manager::action::FleetManagement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DYNAMIC_FLEET_MANAGER__ACTION__DETAIL__FLEET_MANAGEMENT__TRAITS_HPP_
