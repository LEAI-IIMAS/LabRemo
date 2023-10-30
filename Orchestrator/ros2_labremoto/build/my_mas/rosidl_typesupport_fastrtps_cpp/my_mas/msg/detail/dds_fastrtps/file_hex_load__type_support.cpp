// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_mas:msg/FileHexLoad.idl
// generated code does not contain a copyright notice
#include "my_mas/msg/detail/file_hex_load__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_mas/msg/detail/file_hex_load__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace my_mas
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_mas
cdr_serialize(
  const my_mas::msg::FileHexLoad & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: path_hex
  cdr << ros_message.path_hex;
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_mas
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_mas::msg::FileHexLoad & ros_message)
{
  // Member: path_hex
  cdr >> ros_message.path_hex;

  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_mas
get_serialized_size(
  const my_mas::msg::FileHexLoad & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: path_hex
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.path_hex.size() + 1);
  // Member: status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.status.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_mas
max_serialized_size_FileHexLoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: path_hex
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FileHexLoad__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_mas::msg::FileHexLoad *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FileHexLoad__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_mas::msg::FileHexLoad *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FileHexLoad__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_mas::msg::FileHexLoad *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FileHexLoad__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_FileHexLoad(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _FileHexLoad__callbacks = {
  "my_mas::msg",
  "FileHexLoad",
  _FileHexLoad__cdr_serialize,
  _FileHexLoad__cdr_deserialize,
  _FileHexLoad__get_serialized_size,
  _FileHexLoad__max_serialized_size
};

static rosidl_message_type_support_t _FileHexLoad__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FileHexLoad__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_mas

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_mas
const rosidl_message_type_support_t *
get_message_type_support_handle<my_mas::msg::FileHexLoad>()
{
  return &my_mas::msg::typesupport_fastrtps_cpp::_FileHexLoad__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_mas, msg, FileHexLoad)() {
  return &my_mas::msg::typesupport_fastrtps_cpp::_FileHexLoad__handle;
}

#ifdef __cplusplus
}
#endif