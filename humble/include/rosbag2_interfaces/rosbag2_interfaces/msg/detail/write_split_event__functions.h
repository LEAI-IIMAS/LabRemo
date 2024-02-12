// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbag2_interfaces:msg/WriteSplitEvent.idl
// generated code does not contain a copyright notice

#ifndef ROSBAG2_INTERFACES__MSG__DETAIL__WRITE_SPLIT_EVENT__FUNCTIONS_H_
#define ROSBAG2_INTERFACES__MSG__DETAIL__WRITE_SPLIT_EVENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbag2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rosbag2_interfaces/msg/detail/write_split_event__struct.h"

/// Initialize msg/WriteSplitEvent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbag2_interfaces__msg__WriteSplitEvent
 * )) before or use
 * rosbag2_interfaces__msg__WriteSplitEvent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__init(rosbag2_interfaces__msg__WriteSplitEvent * msg);

/// Finalize msg/WriteSplitEvent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
void
rosbag2_interfaces__msg__WriteSplitEvent__fini(rosbag2_interfaces__msg__WriteSplitEvent * msg);

/// Create msg/WriteSplitEvent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbag2_interfaces__msg__WriteSplitEvent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
rosbag2_interfaces__msg__WriteSplitEvent *
rosbag2_interfaces__msg__WriteSplitEvent__create();

/// Destroy msg/WriteSplitEvent message.
/**
 * It calls
 * rosbag2_interfaces__msg__WriteSplitEvent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
void
rosbag2_interfaces__msg__WriteSplitEvent__destroy(rosbag2_interfaces__msg__WriteSplitEvent * msg);

/// Check for msg/WriteSplitEvent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__are_equal(const rosbag2_interfaces__msg__WriteSplitEvent * lhs, const rosbag2_interfaces__msg__WriteSplitEvent * rhs);

/// Copy a msg/WriteSplitEvent message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__copy(
  const rosbag2_interfaces__msg__WriteSplitEvent * input,
  rosbag2_interfaces__msg__WriteSplitEvent * output);

/// Initialize array of msg/WriteSplitEvent messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbag2_interfaces__msg__WriteSplitEvent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__init(rosbag2_interfaces__msg__WriteSplitEvent__Sequence * array, size_t size);

/// Finalize array of msg/WriteSplitEvent messages.
/**
 * It calls
 * rosbag2_interfaces__msg__WriteSplitEvent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
void
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__fini(rosbag2_interfaces__msg__WriteSplitEvent__Sequence * array);

/// Create array of msg/WriteSplitEvent messages.
/**
 * It allocates the memory for the array and calls
 * rosbag2_interfaces__msg__WriteSplitEvent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
rosbag2_interfaces__msg__WriteSplitEvent__Sequence *
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__create(size_t size);

/// Destroy array of msg/WriteSplitEvent messages.
/**
 * It calls
 * rosbag2_interfaces__msg__WriteSplitEvent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
void
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__destroy(rosbag2_interfaces__msg__WriteSplitEvent__Sequence * array);

/// Check for msg/WriteSplitEvent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__are_equal(const rosbag2_interfaces__msg__WriteSplitEvent__Sequence * lhs, const rosbag2_interfaces__msg__WriteSplitEvent__Sequence * rhs);

/// Copy an array of msg/WriteSplitEvent messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbag2_interfaces
bool
rosbag2_interfaces__msg__WriteSplitEvent__Sequence__copy(
  const rosbag2_interfaces__msg__WriteSplitEvent__Sequence * input,
  rosbag2_interfaces__msg__WriteSplitEvent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBAG2_INTERFACES__MSG__DETAIL__WRITE_SPLIT_EVENT__FUNCTIONS_H_
