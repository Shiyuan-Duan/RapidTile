// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rt_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef RT_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
#define RT_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rt_interfaces/srv/detail/solve_ik__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rt_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolveIK_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolveIK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolveIK_Request & msg, bool use_flow_style = false)
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

}  // namespace rt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rt_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt_interfaces::srv::SolveIK_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rt_interfaces::srv::SolveIK_Request & msg)
{
  return rt_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rt_interfaces::srv::SolveIK_Request>()
{
  return "rt_interfaces::srv::SolveIK_Request";
}

template<>
inline const char * name<rt_interfaces::srv::SolveIK_Request>()
{
  return "rt_interfaces/srv/SolveIK_Request";
}

template<>
struct has_fixed_size<rt_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rt_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rt_interfaces::srv::SolveIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rt_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolveIK_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: t1
  {
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << ", ";
  }

  // member: t2
  {
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << ", ";
  }

  // member: t3
  {
    out << "t3: ";
    rosidl_generator_traits::value_to_yaml(msg.t3, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: mis
  {
    out << "mis: ";
    rosidl_generator_traits::value_to_yaml(msg.mis, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolveIK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t1: ";
    rosidl_generator_traits::value_to_yaml(msg.t1, out);
    out << "\n";
  }

  // member: t2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t2: ";
    rosidl_generator_traits::value_to_yaml(msg.t2, out);
    out << "\n";
  }

  // member: t3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t3: ";
    rosidl_generator_traits::value_to_yaml(msg.t3, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: mis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mis: ";
    rosidl_generator_traits::value_to_yaml(msg.mis, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolveIK_Response & msg, bool use_flow_style = false)
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

}  // namespace rt_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rt_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rt_interfaces::srv::SolveIK_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rt_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rt_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rt_interfaces::srv::SolveIK_Response & msg)
{
  return rt_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rt_interfaces::srv::SolveIK_Response>()
{
  return "rt_interfaces::srv::SolveIK_Response";
}

template<>
inline const char * name<rt_interfaces::srv::SolveIK_Response>()
{
  return "rt_interfaces/srv/SolveIK_Response";
}

template<>
struct has_fixed_size<rt_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rt_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rt_interfaces::srv::SolveIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rt_interfaces::srv::SolveIK>()
{
  return "rt_interfaces::srv::SolveIK";
}

template<>
inline const char * name<rt_interfaces::srv::SolveIK>()
{
  return "rt_interfaces/srv/SolveIK";
}

template<>
struct has_fixed_size<rt_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_fixed_size<rt_interfaces::srv::SolveIK_Request>::value &&
    has_fixed_size<rt_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<rt_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_bounded_size<rt_interfaces::srv::SolveIK_Request>::value &&
    has_bounded_size<rt_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct is_service<rt_interfaces::srv::SolveIK>
  : std::true_type
{
};

template<>
struct is_service_request<rt_interfaces::srv::SolveIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rt_interfaces::srv::SolveIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RT_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
