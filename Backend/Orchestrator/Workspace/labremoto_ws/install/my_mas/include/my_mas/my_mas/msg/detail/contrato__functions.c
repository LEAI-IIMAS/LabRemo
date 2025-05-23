// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_mas:msg/Contrato.idl
// generated code does not contain a copyright notice
#include "my_mas/msg/detail/contrato__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nombrecontrato`
// Member `tipocontrato`
// Member `desccontrato`
// Member `especificacioncontrato`
#include "rosidl_runtime_c/string_functions.h"

bool
my_mas__msg__Contrato__init(my_mas__msg__Contrato * msg)
{
  if (!msg) {
    return false;
  }
  // idcontrato
  // nombrecontrato
  if (!rosidl_runtime_c__String__init(&msg->nombrecontrato)) {
    my_mas__msg__Contrato__fini(msg);
    return false;
  }
  // tipocontrato
  if (!rosidl_runtime_c__String__init(&msg->tipocontrato)) {
    my_mas__msg__Contrato__fini(msg);
    return false;
  }
  // desccontrato
  if (!rosidl_runtime_c__String__init(&msg->desccontrato)) {
    my_mas__msg__Contrato__fini(msg);
    return false;
  }
  // especificacioncontrato
  if (!rosidl_runtime_c__String__init(&msg->especificacioncontrato)) {
    my_mas__msg__Contrato__fini(msg);
    return false;
  }
  return true;
}

void
my_mas__msg__Contrato__fini(my_mas__msg__Contrato * msg)
{
  if (!msg) {
    return;
  }
  // idcontrato
  // nombrecontrato
  rosidl_runtime_c__String__fini(&msg->nombrecontrato);
  // tipocontrato
  rosidl_runtime_c__String__fini(&msg->tipocontrato);
  // desccontrato
  rosidl_runtime_c__String__fini(&msg->desccontrato);
  // especificacioncontrato
  rosidl_runtime_c__String__fini(&msg->especificacioncontrato);
}

bool
my_mas__msg__Contrato__are_equal(const my_mas__msg__Contrato * lhs, const my_mas__msg__Contrato * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idcontrato
  if (lhs->idcontrato != rhs->idcontrato) {
    return false;
  }
  // nombrecontrato
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nombrecontrato), &(rhs->nombrecontrato)))
  {
    return false;
  }
  // tipocontrato
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tipocontrato), &(rhs->tipocontrato)))
  {
    return false;
  }
  // desccontrato
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desccontrato), &(rhs->desccontrato)))
  {
    return false;
  }
  // especificacioncontrato
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->especificacioncontrato), &(rhs->especificacioncontrato)))
  {
    return false;
  }
  return true;
}

bool
my_mas__msg__Contrato__copy(
  const my_mas__msg__Contrato * input,
  my_mas__msg__Contrato * output)
{
  if (!input || !output) {
    return false;
  }
  // idcontrato
  output->idcontrato = input->idcontrato;
  // nombrecontrato
  if (!rosidl_runtime_c__String__copy(
      &(input->nombrecontrato), &(output->nombrecontrato)))
  {
    return false;
  }
  // tipocontrato
  if (!rosidl_runtime_c__String__copy(
      &(input->tipocontrato), &(output->tipocontrato)))
  {
    return false;
  }
  // desccontrato
  if (!rosidl_runtime_c__String__copy(
      &(input->desccontrato), &(output->desccontrato)))
  {
    return false;
  }
  // especificacioncontrato
  if (!rosidl_runtime_c__String__copy(
      &(input->especificacioncontrato), &(output->especificacioncontrato)))
  {
    return false;
  }
  return true;
}

my_mas__msg__Contrato *
my_mas__msg__Contrato__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__msg__Contrato * msg = (my_mas__msg__Contrato *)allocator.allocate(sizeof(my_mas__msg__Contrato), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_mas__msg__Contrato));
  bool success = my_mas__msg__Contrato__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_mas__msg__Contrato__destroy(my_mas__msg__Contrato * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_mas__msg__Contrato__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_mas__msg__Contrato__Sequence__init(my_mas__msg__Contrato__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__msg__Contrato * data = NULL;

  if (size) {
    data = (my_mas__msg__Contrato *)allocator.zero_allocate(size, sizeof(my_mas__msg__Contrato), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_mas__msg__Contrato__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_mas__msg__Contrato__fini(&data[i - 1]);
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
my_mas__msg__Contrato__Sequence__fini(my_mas__msg__Contrato__Sequence * array)
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
      my_mas__msg__Contrato__fini(&array->data[i]);
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

my_mas__msg__Contrato__Sequence *
my_mas__msg__Contrato__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_mas__msg__Contrato__Sequence * array = (my_mas__msg__Contrato__Sequence *)allocator.allocate(sizeof(my_mas__msg__Contrato__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_mas__msg__Contrato__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_mas__msg__Contrato__Sequence__destroy(my_mas__msg__Contrato__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_mas__msg__Contrato__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_mas__msg__Contrato__Sequence__are_equal(const my_mas__msg__Contrato__Sequence * lhs, const my_mas__msg__Contrato__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_mas__msg__Contrato__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_mas__msg__Contrato__Sequence__copy(
  const my_mas__msg__Contrato__Sequence * input,
  my_mas__msg__Contrato__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_mas__msg__Contrato);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_mas__msg__Contrato * data =
      (my_mas__msg__Contrato *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_mas__msg__Contrato__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_mas__msg__Contrato__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_mas__msg__Contrato__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
