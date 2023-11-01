// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_subzero:srv/ApRESConf.idl
// generated code does not contain a copyright notice
#include "interfaces_subzero/srv/detail/ap_res_conf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `act`
// Member `type`
// Member `polarization`
// Member `prefix`
#include "rosidl_runtime_c/string_functions.h"
// Member `attenuators`
// Member `gains`
// Member `tx`
// Member `rx`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
interfaces_subzero__srv__ApRESConf_Request__init(interfaces_subzero__srv__ApRESConf_Request * msg)
{
  if (!msg) {
    return false;
  }
  // act
  if (!rosidl_runtime_c__String__init(&msg->act)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // n_attenuator
  // attenuators
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->attenuators, 0)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // gains
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->gains, 0)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // tx
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->tx, 0)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // rx
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->rx, 0)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // polarization
  if (!rosidl_runtime_c__String__init(&msg->polarization)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  // n_subburst
  // download
  // prefix
  if (!rosidl_runtime_c__String__init(&msg->prefix)) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_subzero__srv__ApRESConf_Request__fini(interfaces_subzero__srv__ApRESConf_Request * msg)
{
  if (!msg) {
    return;
  }
  // act
  rosidl_runtime_c__String__fini(&msg->act);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // n_attenuator
  // attenuators
  rosidl_runtime_c__int64__Sequence__fini(&msg->attenuators);
  // gains
  rosidl_runtime_c__int64__Sequence__fini(&msg->gains);
  // tx
  rosidl_runtime_c__int64__Sequence__fini(&msg->tx);
  // rx
  rosidl_runtime_c__int64__Sequence__fini(&msg->rx);
  // polarization
  rosidl_runtime_c__String__fini(&msg->polarization);
  // n_subburst
  // download
  // prefix
  rosidl_runtime_c__String__fini(&msg->prefix);
}

interfaces_subzero__srv__ApRESConf_Request *
interfaces_subzero__srv__ApRESConf_Request__create()
{
  interfaces_subzero__srv__ApRESConf_Request * msg = (interfaces_subzero__srv__ApRESConf_Request *)malloc(sizeof(interfaces_subzero__srv__ApRESConf_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__srv__ApRESConf_Request));
  bool success = interfaces_subzero__srv__ApRESConf_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__srv__ApRESConf_Request__destroy(interfaces_subzero__srv__ApRESConf_Request * msg)
{
  if (msg) {
    interfaces_subzero__srv__ApRESConf_Request__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__srv__ApRESConf_Request__Sequence__init(interfaces_subzero__srv__ApRESConf_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__srv__ApRESConf_Request * data = NULL;
  if (size) {
    data = (interfaces_subzero__srv__ApRESConf_Request *)calloc(size, sizeof(interfaces_subzero__srv__ApRESConf_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__srv__ApRESConf_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__srv__ApRESConf_Request__fini(&data[i - 1]);
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
interfaces_subzero__srv__ApRESConf_Request__Sequence__fini(interfaces_subzero__srv__ApRESConf_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__srv__ApRESConf_Request__fini(&array->data[i]);
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

interfaces_subzero__srv__ApRESConf_Request__Sequence *
interfaces_subzero__srv__ApRESConf_Request__Sequence__create(size_t size)
{
  interfaces_subzero__srv__ApRESConf_Request__Sequence * array = (interfaces_subzero__srv__ApRESConf_Request__Sequence *)malloc(sizeof(interfaces_subzero__srv__ApRESConf_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__srv__ApRESConf_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__srv__ApRESConf_Request__Sequence__destroy(interfaces_subzero__srv__ApRESConf_Request__Sequence * array)
{
  if (array) {
    interfaces_subzero__srv__ApRESConf_Request__Sequence__fini(array);
  }
  free(array);
}


bool
interfaces_subzero__srv__ApRESConf_Response__init(interfaces_subzero__srv__ApRESConf_Response * msg)
{
  if (!msg) {
    return false;
  }
  // msg_sent
  return true;
}

void
interfaces_subzero__srv__ApRESConf_Response__fini(interfaces_subzero__srv__ApRESConf_Response * msg)
{
  if (!msg) {
    return;
  }
  // msg_sent
}

interfaces_subzero__srv__ApRESConf_Response *
interfaces_subzero__srv__ApRESConf_Response__create()
{
  interfaces_subzero__srv__ApRESConf_Response * msg = (interfaces_subzero__srv__ApRESConf_Response *)malloc(sizeof(interfaces_subzero__srv__ApRESConf_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_subzero__srv__ApRESConf_Response));
  bool success = interfaces_subzero__srv__ApRESConf_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
interfaces_subzero__srv__ApRESConf_Response__destroy(interfaces_subzero__srv__ApRESConf_Response * msg)
{
  if (msg) {
    interfaces_subzero__srv__ApRESConf_Response__fini(msg);
  }
  free(msg);
}


bool
interfaces_subzero__srv__ApRESConf_Response__Sequence__init(interfaces_subzero__srv__ApRESConf_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  interfaces_subzero__srv__ApRESConf_Response * data = NULL;
  if (size) {
    data = (interfaces_subzero__srv__ApRESConf_Response *)calloc(size, sizeof(interfaces_subzero__srv__ApRESConf_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_subzero__srv__ApRESConf_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_subzero__srv__ApRESConf_Response__fini(&data[i - 1]);
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
interfaces_subzero__srv__ApRESConf_Response__Sequence__fini(interfaces_subzero__srv__ApRESConf_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_subzero__srv__ApRESConf_Response__fini(&array->data[i]);
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

interfaces_subzero__srv__ApRESConf_Response__Sequence *
interfaces_subzero__srv__ApRESConf_Response__Sequence__create(size_t size)
{
  interfaces_subzero__srv__ApRESConf_Response__Sequence * array = (interfaces_subzero__srv__ApRESConf_Response__Sequence *)malloc(sizeof(interfaces_subzero__srv__ApRESConf_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = interfaces_subzero__srv__ApRESConf_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
interfaces_subzero__srv__ApRESConf_Response__Sequence__destroy(interfaces_subzero__srv__ApRESConf_Response__Sequence * array)
{
  if (array) {
    interfaces_subzero__srv__ApRESConf_Response__Sequence__fini(array);
  }
  free(array);
}
