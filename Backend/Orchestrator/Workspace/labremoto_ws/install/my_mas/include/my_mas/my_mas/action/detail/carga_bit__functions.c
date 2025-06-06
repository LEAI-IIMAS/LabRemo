// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_mas:action/CargaBit.idl
// generated code does not contain a copyright notice
#include "my_mas/action/detail/carga_bit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path_bit`
#include "rosidl_runtime_c/string_functions.h"

bool
my_mas__action__CargaBit_Goal__init(my_mas__action__CargaBit_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // path_bit
  if (!rosidl_runtime_c__String__init(&msg->path_bit)) {
    my_mas__action__CargaBit_Goal__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_Goal__fini(my_mas__action__CargaBit_Goal * msg)
{
  if (!msg) {
    return;
  }
  // path_bit
  rosidl_runtime_c__String__fini(&msg->path_bit);
}

bool
my_mas__action__CargaBit_Goal__are_equal(const my_mas__action__CargaBit_Goal * lhs, const my_mas__action__CargaBit_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_bit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path_bit), &(rhs->path_bit)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_Goal__copy(
  const my_mas__action__CargaBit_Goal * input,
  my_mas__action__CargaBit_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // path_bit
  if (!rosidl_runtime_c__String__copy(
      &(input->path_bit), &(output->path_bit)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_Goal *
my_mas__action__CargaBit_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Goal * msg = (my_mas__action__CargaBit_Goal *)allocator.allocate(sizeof(my_mas__action__CargaBit_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_Goal));
  bool success = my_mas__action__CargaBit_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_Goal__destroy(my_mas__action__CargaBit_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_Goal__Sequence__init(my_mas__action__CargaBit_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Goal * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_Goal *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_Goal__Sequence__fini(my_mas__action__CargaBit_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_Goal__Sequence *
my_mas__action__CargaBit_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Goal__Sequence * array = (my_mas__action__CargaBit_Goal__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_Goal__Sequence__destroy(my_mas__action__CargaBit_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_Goal__Sequence__are_equal(const my_mas__action__CargaBit_Goal__Sequence * lhs, const my_mas__action__CargaBit_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_Goal__Sequence__copy(
  const my_mas__action__CargaBit_Goal__Sequence * input,
  my_mas__action__CargaBit_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_Goal * data =
      (my_mas__action__CargaBit_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_final`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
my_mas__action__CargaBit_Result__init(my_mas__action__CargaBit_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status_final
  if (!rosidl_runtime_c__String__init(&msg->status_final)) {
    my_mas__action__CargaBit_Result__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_Result__fini(my_mas__action__CargaBit_Result * msg)
{
  if (!msg) {
    return;
  }
  // status_final
  rosidl_runtime_c__String__fini(&msg->status_final);
}

bool
my_mas__action__CargaBit_Result__are_equal(const my_mas__action__CargaBit_Result * lhs, const my_mas__action__CargaBit_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status_final
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_final), &(rhs->status_final)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_Result__copy(
  const my_mas__action__CargaBit_Result * input,
  my_mas__action__CargaBit_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status_final
  if (!rosidl_runtime_c__String__copy(
      &(input->status_final), &(output->status_final)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_Result *
my_mas__action__CargaBit_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Result * msg = (my_mas__action__CargaBit_Result *)allocator.allocate(sizeof(my_mas__action__CargaBit_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_Result));
  bool success = my_mas__action__CargaBit_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_Result__destroy(my_mas__action__CargaBit_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_Result__Sequence__init(my_mas__action__CargaBit_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Result * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_Result *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_Result__Sequence__fini(my_mas__action__CargaBit_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_Result__Sequence *
my_mas__action__CargaBit_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Result__Sequence * array = (my_mas__action__CargaBit_Result__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_Result__Sequence__destroy(my_mas__action__CargaBit_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_Result__Sequence__are_equal(const my_mas__action__CargaBit_Result__Sequence * lhs, const my_mas__action__CargaBit_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_Result__Sequence__copy(
  const my_mas__action__CargaBit_Result__Sequence * input,
  my_mas__action__CargaBit_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_Result * data =
      (my_mas__action__CargaBit_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
my_mas__action__CargaBit_Feedback__init(my_mas__action__CargaBit_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    my_mas__action__CargaBit_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_Feedback__fini(my_mas__action__CargaBit_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
my_mas__action__CargaBit_Feedback__are_equal(const my_mas__action__CargaBit_Feedback * lhs, const my_mas__action__CargaBit_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_Feedback__copy(
  const my_mas__action__CargaBit_Feedback * input,
  my_mas__action__CargaBit_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_Feedback *
my_mas__action__CargaBit_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Feedback * msg = (my_mas__action__CargaBit_Feedback *)allocator.allocate(sizeof(my_mas__action__CargaBit_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_Feedback));
  bool success = my_mas__action__CargaBit_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_Feedback__destroy(my_mas__action__CargaBit_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_Feedback__Sequence__init(my_mas__action__CargaBit_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Feedback * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_Feedback *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_Feedback__Sequence__fini(my_mas__action__CargaBit_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_Feedback__Sequence *
my_mas__action__CargaBit_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_Feedback__Sequence * array = (my_mas__action__CargaBit_Feedback__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_Feedback__Sequence__destroy(my_mas__action__CargaBit_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_Feedback__Sequence__are_equal(const my_mas__action__CargaBit_Feedback__Sequence * lhs, const my_mas__action__CargaBit_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_Feedback__Sequence__copy(
  const my_mas__action__CargaBit_Feedback__Sequence * input,
  my_mas__action__CargaBit_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_Feedback * data =
      (my_mas__action__CargaBit_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "my_mas/action/detail/carga_bit__functions.h"

bool
my_mas__action__CargaBit_SendGoal_Request__init(my_mas__action__CargaBit_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_mas__action__CargaBit_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!my_mas__action__CargaBit_Goal__init(&msg->goal)) {
    my_mas__action__CargaBit_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_SendGoal_Request__fini(my_mas__action__CargaBit_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  my_mas__action__CargaBit_Goal__fini(&msg->goal);
}

bool
my_mas__action__CargaBit_SendGoal_Request__are_equal(const my_mas__action__CargaBit_SendGoal_Request * lhs, const my_mas__action__CargaBit_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!my_mas__action__CargaBit_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_SendGoal_Request__copy(
  const my_mas__action__CargaBit_SendGoal_Request * input,
  my_mas__action__CargaBit_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!my_mas__action__CargaBit_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_SendGoal_Request *
my_mas__action__CargaBit_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Request * msg = (my_mas__action__CargaBit_SendGoal_Request *)allocator.allocate(sizeof(my_mas__action__CargaBit_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_SendGoal_Request));
  bool success = my_mas__action__CargaBit_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_SendGoal_Request__destroy(my_mas__action__CargaBit_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_SendGoal_Request__Sequence__init(my_mas__action__CargaBit_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Request * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_SendGoal_Request *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_SendGoal_Request__Sequence__fini(my_mas__action__CargaBit_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_SendGoal_Request__Sequence *
my_mas__action__CargaBit_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Request__Sequence * array = (my_mas__action__CargaBit_SendGoal_Request__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_SendGoal_Request__Sequence__destroy(my_mas__action__CargaBit_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_SendGoal_Request__Sequence__are_equal(const my_mas__action__CargaBit_SendGoal_Request__Sequence * lhs, const my_mas__action__CargaBit_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_SendGoal_Request__Sequence__copy(
  const my_mas__action__CargaBit_SendGoal_Request__Sequence * input,
  my_mas__action__CargaBit_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_SendGoal_Request * data =
      (my_mas__action__CargaBit_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
my_mas__action__CargaBit_SendGoal_Response__init(my_mas__action__CargaBit_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    my_mas__action__CargaBit_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_SendGoal_Response__fini(my_mas__action__CargaBit_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
my_mas__action__CargaBit_SendGoal_Response__are_equal(const my_mas__action__CargaBit_SendGoal_Response * lhs, const my_mas__action__CargaBit_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_SendGoal_Response__copy(
  const my_mas__action__CargaBit_SendGoal_Response * input,
  my_mas__action__CargaBit_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_SendGoal_Response *
my_mas__action__CargaBit_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Response * msg = (my_mas__action__CargaBit_SendGoal_Response *)allocator.allocate(sizeof(my_mas__action__CargaBit_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_SendGoal_Response));
  bool success = my_mas__action__CargaBit_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_SendGoal_Response__destroy(my_mas__action__CargaBit_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_SendGoal_Response__Sequence__init(my_mas__action__CargaBit_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Response * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_SendGoal_Response *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_SendGoal_Response__Sequence__fini(my_mas__action__CargaBit_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_SendGoal_Response__Sequence *
my_mas__action__CargaBit_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_SendGoal_Response__Sequence * array = (my_mas__action__CargaBit_SendGoal_Response__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_SendGoal_Response__Sequence__destroy(my_mas__action__CargaBit_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_SendGoal_Response__Sequence__are_equal(const my_mas__action__CargaBit_SendGoal_Response__Sequence * lhs, const my_mas__action__CargaBit_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_SendGoal_Response__Sequence__copy(
  const my_mas__action__CargaBit_SendGoal_Response__Sequence * input,
  my_mas__action__CargaBit_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_SendGoal_Response * data =
      (my_mas__action__CargaBit_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
my_mas__action__CargaBit_GetResult_Request__init(my_mas__action__CargaBit_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_mas__action__CargaBit_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_GetResult_Request__fini(my_mas__action__CargaBit_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
my_mas__action__CargaBit_GetResult_Request__are_equal(const my_mas__action__CargaBit_GetResult_Request * lhs, const my_mas__action__CargaBit_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_GetResult_Request__copy(
  const my_mas__action__CargaBit_GetResult_Request * input,
  my_mas__action__CargaBit_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_GetResult_Request *
my_mas__action__CargaBit_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Request * msg = (my_mas__action__CargaBit_GetResult_Request *)allocator.allocate(sizeof(my_mas__action__CargaBit_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_GetResult_Request));
  bool success = my_mas__action__CargaBit_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_GetResult_Request__destroy(my_mas__action__CargaBit_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_GetResult_Request__Sequence__init(my_mas__action__CargaBit_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Request * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_GetResult_Request *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_GetResult_Request__Sequence__fini(my_mas__action__CargaBit_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_GetResult_Request__Sequence *
my_mas__action__CargaBit_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Request__Sequence * array = (my_mas__action__CargaBit_GetResult_Request__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_GetResult_Request__Sequence__destroy(my_mas__action__CargaBit_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_GetResult_Request__Sequence__are_equal(const my_mas__action__CargaBit_GetResult_Request__Sequence * lhs, const my_mas__action__CargaBit_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_GetResult_Request__Sequence__copy(
  const my_mas__action__CargaBit_GetResult_Request__Sequence * input,
  my_mas__action__CargaBit_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_GetResult_Request * data =
      (my_mas__action__CargaBit_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "my_mas/action/detail/carga_bit__functions.h"

bool
my_mas__action__CargaBit_GetResult_Response__init(my_mas__action__CargaBit_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!my_mas__action__CargaBit_Result__init(&msg->result)) {
    my_mas__action__CargaBit_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_GetResult_Response__fini(my_mas__action__CargaBit_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  my_mas__action__CargaBit_Result__fini(&msg->result);
}

bool
my_mas__action__CargaBit_GetResult_Response__are_equal(const my_mas__action__CargaBit_GetResult_Response * lhs, const my_mas__action__CargaBit_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!my_mas__action__CargaBit_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_GetResult_Response__copy(
  const my_mas__action__CargaBit_GetResult_Response * input,
  my_mas__action__CargaBit_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!my_mas__action__CargaBit_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_GetResult_Response *
my_mas__action__CargaBit_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Response * msg = (my_mas__action__CargaBit_GetResult_Response *)allocator.allocate(sizeof(my_mas__action__CargaBit_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_GetResult_Response));
  bool success = my_mas__action__CargaBit_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_GetResult_Response__destroy(my_mas__action__CargaBit_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_GetResult_Response__Sequence__init(my_mas__action__CargaBit_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Response * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_GetResult_Response *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_GetResult_Response__Sequence__fini(my_mas__action__CargaBit_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_GetResult_Response__Sequence *
my_mas__action__CargaBit_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_GetResult_Response__Sequence * array = (my_mas__action__CargaBit_GetResult_Response__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_GetResult_Response__Sequence__destroy(my_mas__action__CargaBit_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_GetResult_Response__Sequence__are_equal(const my_mas__action__CargaBit_GetResult_Response__Sequence * lhs, const my_mas__action__CargaBit_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_GetResult_Response__Sequence__copy(
  const my_mas__action__CargaBit_GetResult_Response__Sequence * input,
  my_mas__action__CargaBit_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_GetResult_Response * data =
      (my_mas__action__CargaBit_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "my_mas/action/detail/carga_bit__functions.h"

bool
my_mas__action__CargaBit_FeedbackMessage__init(my_mas__action__CargaBit_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    my_mas__action__CargaBit_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!my_mas__action__CargaBit_Feedback__init(&msg->feedback)) {
    my_mas__action__CargaBit_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__action__CargaBit_FeedbackMessage__fini(my_mas__action__CargaBit_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  my_mas__action__CargaBit_Feedback__fini(&msg->feedback);
}

bool
my_mas__action__CargaBit_FeedbackMessage__are_equal(const my_mas__action__CargaBit_FeedbackMessage * lhs, const my_mas__action__CargaBit_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!my_mas__action__CargaBit_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
my_mas__action__CargaBit_FeedbackMessage__copy(
  const my_mas__action__CargaBit_FeedbackMessage * input,
  my_mas__action__CargaBit_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!my_mas__action__CargaBit_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

my_mas__action__CargaBit_FeedbackMessage *
my_mas__action__CargaBit_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_FeedbackMessage * msg = (my_mas__action__CargaBit_FeedbackMessage *)allocator.allocate(sizeof(my_mas__action__CargaBit_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__action__CargaBit_FeedbackMessage));
  bool success = my_mas__action__CargaBit_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__action__CargaBit_FeedbackMessage__destroy(my_mas__action__CargaBit_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__action__CargaBit_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__action__CargaBit_FeedbackMessage__Sequence__init(my_mas__action__CargaBit_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_FeedbackMessage * data = NULL;

  if (size) {
    data = (my_mas__action__CargaBit_FeedbackMessage *)allocator.zero_allocate(size, sizeof(my_mas__action__CargaBit_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__action__CargaBit_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__action__CargaBit_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_mas__action__CargaBit_FeedbackMessage__Sequence__fini(my_mas__action__CargaBit_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_mas__action__CargaBit_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_mas__action__CargaBit_FeedbackMessage__Sequence *
my_mas__action__CargaBit_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__action__CargaBit_FeedbackMessage__Sequence * array = (my_mas__action__CargaBit_FeedbackMessage__Sequence *)allocator.allocate(sizeof(my_mas__action__CargaBit_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__action__CargaBit_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__action__CargaBit_FeedbackMessage__Sequence__destroy(my_mas__action__CargaBit_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__action__CargaBit_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__action__CargaBit_FeedbackMessage__Sequence__are_equal(const my_mas__action__CargaBit_FeedbackMessage__Sequence * lhs, const my_mas__action__CargaBit_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__action__CargaBit_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__action__CargaBit_FeedbackMessage__Sequence__copy(
  const my_mas__action__CargaBit_FeedbackMessage__Sequence * input,
  my_mas__action__CargaBit_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__action__CargaBit_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__action__CargaBit_FeedbackMessage * data =
      (my_mas__action__CargaBit_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__action__CargaBit_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__action__CargaBit_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__action__CargaBit_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
