// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_mas:msg/TransEntrada.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_mas/msg/detail/trans_entrada__rosidl_typesupport_introspection_c.h"
#include "my_mas/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_mas/msg/detail/trans_entrada__functions.h"
#include "my_mas/msg/detail/trans_entrada__struct.h"


// Include directives for member types
// Member `tipotransaccion`
// Member `status`
// Member `idestudiante`
// Member `idsesion`
// Member `descripcion`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_mas__msg__TransEntrada__init(message_memory);
}

void my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_fini_function(void * message_memory)
{
  my_mas__msg__TransEntrada__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_member_array[5] = {
  {
    "tipotransaccion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_mas__msg__TransEntrada, tipotransaccion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_mas__msg__TransEntrada, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idestudiante",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_mas__msg__TransEntrada, idestudiante),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "idsesion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_mas__msg__TransEntrada, idsesion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "descripcion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_mas__msg__TransEntrada, descripcion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_members = {
  "my_mas__msg",  // message namespace
  "TransEntrada",  // message name
  5,  // number of fields
  sizeof(my_mas__msg__TransEntrada),
  my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_member_array,  // message members
  my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_init_function,  // function to initialize message memory (memory has to be allocated)
  my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_type_support_handle = {
  0,
  &my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_mas
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, msg, TransEntrada)() {
  if (!my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_type_support_handle.typesupport_identifier) {
    my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_mas__msg__TransEntrada__rosidl_typesupport_introspection_c__TransEntrada_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
