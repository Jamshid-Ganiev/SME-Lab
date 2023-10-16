// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smart_home_cpp:srv/ApplianceControl.idl
// generated code does not contain a copyright notice

#ifndef SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__TRAITS_HPP_
#define SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smart_home_cpp/srv/detail/appliance_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace smart_home_cpp
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplianceControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: appliance
  {
    out << "appliance: ";
    rosidl_generator_traits::value_to_yaml(msg.appliance, out);
    out << ", ";
  }

  // member: on
  {
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplianceControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: appliance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "appliance: ";
    rosidl_generator_traits::value_to_yaml(msg.appliance, out);
    out << "\n";
  }

  // member: on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on: ";
    rosidl_generator_traits::value_to_yaml(msg.on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplianceControl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace smart_home_cpp

namespace rosidl_generator_traits
{

[[deprecated("use smart_home_cpp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_home_cpp::srv::ApplianceControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_home_cpp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_home_cpp::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_home_cpp::srv::ApplianceControl_Request & msg)
{
  return smart_home_cpp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_home_cpp::srv::ApplianceControl_Request>()
{
  return "smart_home_cpp::srv::ApplianceControl_Request";
}

template<>
inline const char * name<smart_home_cpp::srv::ApplianceControl_Request>()
{
  return "smart_home_cpp/srv/ApplianceControl_Request";
}

template<>
struct has_fixed_size<smart_home_cpp::srv::ApplianceControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_home_cpp::srv::ApplianceControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_home_cpp::srv::ApplianceControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace smart_home_cpp
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplianceControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplianceControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplianceControl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace smart_home_cpp

namespace rosidl_generator_traits
{

[[deprecated("use smart_home_cpp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smart_home_cpp::srv::ApplianceControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  smart_home_cpp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smart_home_cpp::srv::to_yaml() instead")]]
inline std::string to_yaml(const smart_home_cpp::srv::ApplianceControl_Response & msg)
{
  return smart_home_cpp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<smart_home_cpp::srv::ApplianceControl_Response>()
{
  return "smart_home_cpp::srv::ApplianceControl_Response";
}

template<>
inline const char * name<smart_home_cpp::srv::ApplianceControl_Response>()
{
  return "smart_home_cpp/srv/ApplianceControl_Response";
}

template<>
struct has_fixed_size<smart_home_cpp::srv::ApplianceControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smart_home_cpp::srv::ApplianceControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smart_home_cpp::srv::ApplianceControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smart_home_cpp::srv::ApplianceControl>()
{
  return "smart_home_cpp::srv::ApplianceControl";
}

template<>
inline const char * name<smart_home_cpp::srv::ApplianceControl>()
{
  return "smart_home_cpp/srv/ApplianceControl";
}

template<>
struct has_fixed_size<smart_home_cpp::srv::ApplianceControl>
  : std::integral_constant<
    bool,
    has_fixed_size<smart_home_cpp::srv::ApplianceControl_Request>::value &&
    has_fixed_size<smart_home_cpp::srv::ApplianceControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<smart_home_cpp::srv::ApplianceControl>
  : std::integral_constant<
    bool,
    has_bounded_size<smart_home_cpp::srv::ApplianceControl_Request>::value &&
    has_bounded_size<smart_home_cpp::srv::ApplianceControl_Response>::value
  >
{
};

template<>
struct is_service<smart_home_cpp::srv::ApplianceControl>
  : std::true_type
{
};

template<>
struct is_service_request<smart_home_cpp::srv::ApplianceControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<smart_home_cpp::srv::ApplianceControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__TRAITS_HPP_
