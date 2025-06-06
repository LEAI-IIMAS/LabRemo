// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_mas:msg/LogSalida.idl
// generated code does not contain a copyright notice

#ifndef MY_MAS__MSG__DETAIL__LOG_SALIDA__TRAITS_HPP_
#define MY_MAS__MSG__DETAIL__LOG_SALIDA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_mas/msg/detail/log_salida__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_mas
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogSalida & msg,
  std::ostream & out)
{
  out << "{";
  // member: logsalida
  {
    out << "logsalida: ";
    rosidl_generator_traits::value_to_yaml(msg.logsalida, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogSalida & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: logsalida
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logsalida: ";
    rosidl_generator_traits::value_to_yaml(msg.logsalida, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogSalida & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_mas

namespace rosidl_generator_traits
{

[[deprecated("use my_mas::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_mas::msg::LogSalida & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_mas::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_mas::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_mas::msg::LogSalida & msg)
{
  return my_mas::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_mas::msg::LogSalida>()
{
  return "my_mas::msg::LogSalida";
}

template<>
inline const char * name<my_mas::msg::LogSalida>()
{
  return "my_mas/msg/LogSalida";
}

template<>
struct has_fixed_size<my_mas::msg::LogSalida>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_mas::msg::LogSalida>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_mas::msg::LogSalida>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_MAS__MSG__DETAIL__LOG_SALIDA__TRAITS_HPP_
