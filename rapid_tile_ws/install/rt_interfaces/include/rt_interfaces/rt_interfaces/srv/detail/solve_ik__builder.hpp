// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rt_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef RT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
#define RT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rt_interfaces/srv/detail/solve_ik__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rt_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Request_z
{
public:
  explicit Init_SolveIK_Request_z(::rt_interfaces::srv::SolveIK_Request & msg)
  : msg_(msg)
  {}
  ::rt_interfaces::srv::SolveIK_Request z(::rt_interfaces::srv::SolveIK_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Request msg_;
};

class Init_SolveIK_Request_y
{
public:
  explicit Init_SolveIK_Request_y(::rt_interfaces::srv::SolveIK_Request & msg)
  : msg_(msg)
  {}
  Init_SolveIK_Request_z y(::rt_interfaces::srv::SolveIK_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SolveIK_Request_z(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Request msg_;
};

class Init_SolveIK_Request_x
{
public:
  Init_SolveIK_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Request_y x(::rt_interfaces::srv::SolveIK_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SolveIK_Request_y(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt_interfaces::srv::SolveIK_Request>()
{
  return rt_interfaces::srv::builder::Init_SolveIK_Request_x();
}

}  // namespace rt_interfaces


namespace rt_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Response_mis
{
public:
  explicit Init_SolveIK_Response_mis(::rt_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  ::rt_interfaces::srv::SolveIK_Response mis(::rt_interfaces::srv::SolveIK_Response::_mis_type arg)
  {
    msg_.mis = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_success
{
public:
  explicit Init_SolveIK_Response_success(::rt_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  Init_SolveIK_Response_mis success(::rt_interfaces::srv::SolveIK_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SolveIK_Response_mis(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_t3
{
public:
  explicit Init_SolveIK_Response_t3(::rt_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  Init_SolveIK_Response_success t3(::rt_interfaces::srv::SolveIK_Response::_t3_type arg)
  {
    msg_.t3 = std::move(arg);
    return Init_SolveIK_Response_success(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_t2
{
public:
  explicit Init_SolveIK_Response_t2(::rt_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  Init_SolveIK_Response_t3 t2(::rt_interfaces::srv::SolveIK_Response::_t2_type arg)
  {
    msg_.t2 = std::move(arg);
    return Init_SolveIK_Response_t3(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_t1
{
public:
  Init_SolveIK_Response_t1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Response_t2 t1(::rt_interfaces::srv::SolveIK_Response::_t1_type arg)
  {
    msg_.t1 = std::move(arg);
    return Init_SolveIK_Response_t2(msg_);
  }

private:
  ::rt_interfaces::srv::SolveIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rt_interfaces::srv::SolveIK_Response>()
{
  return rt_interfaces::srv::builder::Init_SolveIK_Response_t1();
}

}  // namespace rt_interfaces

#endif  // RT_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
