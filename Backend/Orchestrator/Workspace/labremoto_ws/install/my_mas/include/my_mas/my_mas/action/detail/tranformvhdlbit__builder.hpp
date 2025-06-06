// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_mas:action/Tranformvhdlbit.idl
// generated code does not contain a copyright notice

#ifndef MY_MAS__ACTION__DETAIL__TRANFORMVHDLBIT__BUILDER_HPP_
#define MY_MAS__ACTION__DETAIL__TRANFORMVHDLBIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_mas/action/detail/tranformvhdlbit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_Goal_path_constrains
{
public:
  explicit Init_Tranformvhdlbit_Goal_path_constrains(::my_mas::action::Tranformvhdlbit_Goal & msg)
  : msg_(msg)
  {}
  ::my_mas::action::Tranformvhdlbit_Goal path_constrains(::my_mas::action::Tranformvhdlbit_Goal::_path_constrains_type arg)
  {
    msg_.path_constrains = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_Goal msg_;
};

class Init_Tranformvhdlbit_Goal_path_vhdl
{
public:
  Init_Tranformvhdlbit_Goal_path_vhdl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tranformvhdlbit_Goal_path_constrains path_vhdl(::my_mas::action::Tranformvhdlbit_Goal::_path_vhdl_type arg)
  {
    msg_.path_vhdl = std::move(arg);
    return Init_Tranformvhdlbit_Goal_path_constrains(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_Goal>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_Goal_path_vhdl();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_Result_status_final
{
public:
  Init_Tranformvhdlbit_Result_status_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_mas::action::Tranformvhdlbit_Result status_final(::my_mas::action::Tranformvhdlbit_Result::_status_final_type arg)
  {
    msg_.status_final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_Result>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_Result_status_final();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_Feedback_status
{
public:
  Init_Tranformvhdlbit_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_mas::action::Tranformvhdlbit_Feedback status(::my_mas::action::Tranformvhdlbit_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_Feedback>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_Feedback_status();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_SendGoal_Request_goal
{
public:
  explicit Init_Tranformvhdlbit_SendGoal_Request_goal(::my_mas::action::Tranformvhdlbit_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_mas::action::Tranformvhdlbit_SendGoal_Request goal(::my_mas::action::Tranformvhdlbit_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_SendGoal_Request msg_;
};

class Init_Tranformvhdlbit_SendGoal_Request_goal_id
{
public:
  Init_Tranformvhdlbit_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tranformvhdlbit_SendGoal_Request_goal goal_id(::my_mas::action::Tranformvhdlbit_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tranformvhdlbit_SendGoal_Request_goal(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_SendGoal_Request>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_SendGoal_Request_goal_id();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_SendGoal_Response_stamp
{
public:
  explicit Init_Tranformvhdlbit_SendGoal_Response_stamp(::my_mas::action::Tranformvhdlbit_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_mas::action::Tranformvhdlbit_SendGoal_Response stamp(::my_mas::action::Tranformvhdlbit_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_SendGoal_Response msg_;
};

class Init_Tranformvhdlbit_SendGoal_Response_accepted
{
public:
  Init_Tranformvhdlbit_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tranformvhdlbit_SendGoal_Response_stamp accepted(::my_mas::action::Tranformvhdlbit_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Tranformvhdlbit_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_SendGoal_Response>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_SendGoal_Response_accepted();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_GetResult_Request_goal_id
{
public:
  Init_Tranformvhdlbit_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_mas::action::Tranformvhdlbit_GetResult_Request goal_id(::my_mas::action::Tranformvhdlbit_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_GetResult_Request>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_GetResult_Request_goal_id();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_GetResult_Response_result
{
public:
  explicit Init_Tranformvhdlbit_GetResult_Response_result(::my_mas::action::Tranformvhdlbit_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_mas::action::Tranformvhdlbit_GetResult_Response result(::my_mas::action::Tranformvhdlbit_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_GetResult_Response msg_;
};

class Init_Tranformvhdlbit_GetResult_Response_status
{
public:
  Init_Tranformvhdlbit_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tranformvhdlbit_GetResult_Response_result status(::my_mas::action::Tranformvhdlbit_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Tranformvhdlbit_GetResult_Response_result(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_GetResult_Response>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_GetResult_Response_status();
}

}  // namespace my_mas


namespace my_mas
{

namespace action
{

namespace builder
{

class Init_Tranformvhdlbit_FeedbackMessage_feedback
{
public:
  explicit Init_Tranformvhdlbit_FeedbackMessage_feedback(::my_mas::action::Tranformvhdlbit_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_mas::action::Tranformvhdlbit_FeedbackMessage feedback(::my_mas::action::Tranformvhdlbit_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_FeedbackMessage msg_;
};

class Init_Tranformvhdlbit_FeedbackMessage_goal_id
{
public:
  Init_Tranformvhdlbit_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tranformvhdlbit_FeedbackMessage_feedback goal_id(::my_mas::action::Tranformvhdlbit_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tranformvhdlbit_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_mas::action::Tranformvhdlbit_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_mas::action::Tranformvhdlbit_FeedbackMessage>()
{
  return my_mas::action::builder::Init_Tranformvhdlbit_FeedbackMessage_goal_id();
}

}  // namespace my_mas

#endif  // MY_MAS__ACTION__DETAIL__TRANFORMVHDLBIT__BUILDER_HPP_
