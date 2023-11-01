// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:srv/SendString.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/srv/detail/send_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
interfaces_subzero__srv__SendString_Request__init(interfaces_subzero__srv__SendString_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    interfaces_subzero__srv__SendString_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_subzero__srv__SendString_Request__fini(interfaces_subzero__srv__SendString_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
}

interfaces_subzero__srv__SendString_Request *
interfaces_subzero__srv__SendString_Request__create()
{
  interfaces_subzero__srv__SendString_Request * msg = (interfaces_subzero__srv__SendString_Request *)malloc(sizeof(interfaces_subzero__srv__SendString_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__srv__SendString_Request));
  bool success = interfaces_subzero__srv__SendString_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__srv__SendString_Request__destroy(interfaces_subzero__srv__SendString_Request * msg)
{
  if (msg) {
    interfaces_subzero__srv__SendString_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__srv__SendString_Request__Sequence__init(interfaces_subzero__srv__SendString_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__srv__SendString_Request * data = NULL;
  if (size) {
    data = (interfaces_subzero__srv__SendString_Request *)calloc(size, sizeof(interfaces_subzero__srv__SendString_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__srv__SendString_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__srv__SendString_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_subzero__srv__SendString_Request__Sequence__fini(interfaces_subzero__srv__SendString_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__srv__SendString_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_subzero__srv__SendString_Request__Sequence *
interfaces_subzero__srv__SendString_Request__Sequence__create(size_t size)
{
  interfaces_subzero__srv__SendString_Request__Sequence * array = (interfaces_subzero__srv__SendString_Request__Sequence *)malloc(sizeof(interfaces_subzero__srv__SendString_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__srv__SendString_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__srv__SendString_Request__Sequence__destroy(interfaces_subzero__srv__SendString_Request__Sequence * array)
{
  if (array) {
    interfaces_subzero__srv__SendString_Request__Sequence__fini(array);
  }
  free(array);
}


bool
interfaces_subzero__srv__SendString_Response__init(interfaces_subzero__srv__SendString_Response * msg)
{
  if (!msg) {
    return false;
  }
  // msg_sent
  return true;
}

void
interfaces_subzero__srv__SendString_Response__fini(interfaces_subzero__srv__SendString_Response * msg)
{
  if (!msg) {
    return;
  }
  // msg_sent
}

interfaces_subzero__srv__SendString_Response *
interfaces_subzero__srv__SendString_Response__create()
{
  interfaces_subzero__srv__SendString_Response * msg = (interfaces_subzero__srv__SendString_Response *)malloc(sizeof(interfaces_subzero__srv__SendString_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__srv__SendString_Response));
  bool success = interfaces_subzero__srv__SendString_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__srv__SendString_Response__destroy(interfaces_subzero__srv__SendString_Response * msg)
{
  if (msg) {
    interfaces_subzero__srv__SendString_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__srv__SendString_Response__Sequence__init(interfaces_subzero__srv__SendString_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__srv__SendString_Response * data = NULL;
  if (size) {
    data = (interfaces_subzero__srv__SendString_Response *)calloc(size, sizeof(interfaces_subzero__srv__SendString_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__srv__SendString_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__srv__SendString_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_subzero__srv__SendString_Response__Sequence__fini(interfaces_subzero__srv__SendString_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__srv__SendString_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_subzero__srv__SendString_Response__Sequence *
interfaces_subzero__srv__SendString_Response__Sequence__create(size_t size)
{
  interfaces_subzero__srv__SendString_Response__Sequence * array = (interfaces_subzero__srv__SendString_Response__Sequence *)malloc(sizeof(interfaces_subzero__srv__SendString_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__srv__SendString_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__srv__SendString_Response__Sequence__destroy(interfaces_subzero__srv__SendString_Response__Sequence * array)
{
  if (array) {
    interfaces_subzero__srv__SendString_Response__Sequence__fini(array);
  }
  free(array);
}
