// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_mas:action/Fibonacci.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_mas/action/detail/fibonacci__struct.h"
#include "my_mas/action/detail/fibonacci__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Goal_type_support_ids_t;

static const _Fibonacci_Goal_type_support_ids_t _Fibonacci_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Goal_type_support_symbol_names_t _Fibonacci_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_Goal)),
  }
};

typedef struct _Fibonacci_Goal_type_support_data_t
{
  void * data[2];
} _Fibonacci_Goal_type_support_data_t;

static _Fibonacci_Goal_type_support_data_t _Fibonacci_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Goal_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_Goal)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Result_type_support_ids_t;

static const _Fibonacci_Result_type_support_ids_t _Fibonacci_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Result_type_support_symbol_names_t _Fibonacci_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_Result)),
  }
};

typedef struct _Fibonacci_Result_type_support_data_t
{
  void * data[2];
} _Fibonacci_Result_type_support_data_t;

static _Fibonacci_Result_type_support_data_t _Fibonacci_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Result_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_Result)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Feedback_type_support_ids_t;

static const _Fibonacci_Feedback_type_support_ids_t _Fibonacci_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Feedback_type_support_symbol_names_t _Fibonacci_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_Feedback)),
  }
};

typedef struct _Fibonacci_Feedback_type_support_data_t
{
  void * data[2];
} _Fibonacci_Feedback_type_support_data_t;

static _Fibonacci_Feedback_type_support_data_t _Fibonacci_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_Feedback_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_Feedback)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Request_type_support_ids_t;

static const _Fibonacci_SendGoal_Request_type_support_ids_t _Fibonacci_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Request_type_support_symbol_names_t _Fibonacci_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_SendGoal_Request)),
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Request_type_support_data_t;

static _Fibonacci_SendGoal_Request_type_support_data_t _Fibonacci_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Request_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_SendGoal_Request)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Response_type_support_ids_t;

static const _Fibonacci_SendGoal_Response_type_support_ids_t _Fibonacci_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Response_type_support_symbol_names_t _Fibonacci_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_SendGoal_Response)),
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Response_type_support_data_t;

static _Fibonacci_SendGoal_Response_type_support_data_t _Fibonacci_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_Response_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_SendGoal_Response)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_type_support_ids_t;

static const _Fibonacci_SendGoal_type_support_ids_t _Fibonacci_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_type_support_symbol_names_t _Fibonacci_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_SendGoal)),
  }
};

typedef struct _Fibonacci_SendGoal_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_type_support_data_t;

static _Fibonacci_SendGoal_type_support_data_t _Fibonacci_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_SendGoal_service_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_SendGoal)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Request_type_support_ids_t;

static const _Fibonacci_GetResult_Request_type_support_ids_t _Fibonacci_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Request_type_support_symbol_names_t _Fibonacci_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_GetResult_Request)),
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Request_type_support_data_t;

static _Fibonacci_GetResult_Request_type_support_data_t _Fibonacci_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Request_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_GetResult_Request)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Response_type_support_ids_t;

static const _Fibonacci_GetResult_Response_type_support_ids_t _Fibonacci_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Response_type_support_symbol_names_t _Fibonacci_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_GetResult_Response)),
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Response_type_support_data_t;

static _Fibonacci_GetResult_Response_type_support_data_t _Fibonacci_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_Response_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_GetResult_Response)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_type_support_ids_t;

static const _Fibonacci_GetResult_type_support_ids_t _Fibonacci_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_type_support_symbol_names_t _Fibonacci_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_GetResult)),
  }
};

typedef struct _Fibonacci_GetResult_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_type_support_data_t;

static _Fibonacci_GetResult_type_support_data_t _Fibonacci_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_GetResult_service_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Fibonacci_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_GetResult)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__struct.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_mas
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_FeedbackMessage_type_support_ids_t;

static const _Fibonacci_FeedbackMessage_type_support_ids_t _Fibonacci_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_FeedbackMessage_type_support_symbol_names_t _Fibonacci_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_mas, action, Fibonacci_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_mas, action, Fibonacci_FeedbackMessage)),
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Fibonacci_FeedbackMessage_type_support_data_t;

static _Fibonacci_FeedbackMessage_type_support_data_t _Fibonacci_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Fibonacci_FeedbackMessage_message_typesupport_map = {
  2,
  "my_mas",
  &_Fibonacci_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Fibonacci_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace my_mas

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_mas, action, Fibonacci_FeedbackMessage)() {
  return &::my_mas::action::rosidl_typesupport_c::Fibonacci_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "my_mas/action/fibonacci.h"
// already included above
// #include "my_mas/action/detail/fibonacci__type_support.h"

static rosidl_action_type_support_t _my_mas__action__Fibonacci__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, my_mas, action, Fibonacci)()
{
  // Thread-safe by always writing the same values to the static struct
  _my_mas__action__Fibonacci__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_mas, action, Fibonacci_SendGoal)();
  _my_mas__action__Fibonacci__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, my_mas, action, Fibonacci_GetResult)();
  _my_mas__action__Fibonacci__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _my_mas__action__Fibonacci__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, my_mas, action, Fibonacci_FeedbackMessage)();
  _my_mas__action__Fibonacci__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_my_mas__action__Fibonacci__typesupport_c;
}

#ifdef __cplusplus
}
#endif
