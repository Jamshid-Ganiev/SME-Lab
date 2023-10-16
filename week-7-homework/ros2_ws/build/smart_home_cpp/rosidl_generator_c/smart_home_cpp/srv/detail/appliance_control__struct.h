// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smart_home_cpp:srv/ApplianceControl.idl
// generated code does not contain a copyright notice

#ifndef SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_H_
#define SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'appliance'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplianceControl in the package smart_home_cpp.
typedef struct smart_home_cpp__srv__ApplianceControl_Request
{
  /// The name of the appliance to control
  rosidl_runtime_c__String appliance;
  /// True to turn on, false to turn off
  bool on;
} smart_home_cpp__srv__ApplianceControl_Request;

// Struct for a sequence of smart_home_cpp__srv__ApplianceControl_Request.
typedef struct smart_home_cpp__srv__ApplianceControl_Request__Sequence
{
  smart_home_cpp__srv__ApplianceControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_home_cpp__srv__ApplianceControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplianceControl in the package smart_home_cpp.
typedef struct smart_home_cpp__srv__ApplianceControl_Response
{
  /// Indicates whether the control operation was successful
  bool success;
  /// Feedback message (optional)
  rosidl_runtime_c__String feedback;
} smart_home_cpp__srv__ApplianceControl_Response;

// Struct for a sequence of smart_home_cpp__srv__ApplianceControl_Response.
typedef struct smart_home_cpp__srv__ApplianceControl_Response__Sequence
{
  smart_home_cpp__srv__ApplianceControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smart_home_cpp__srv__ApplianceControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMART_HOME_CPP__SRV__DETAIL__APPLIANCE_CONTROL__STRUCT_H_
