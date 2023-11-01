# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_subzero:srv/SpeedValues.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedValues_Request(type):
    """Metaclass of message 'SpeedValues_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_subzero')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_subzero.srv.SpeedValues_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speed_values__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speed_values__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speed_values__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speed_values__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speed_values__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedValues_Request(metaclass=Metaclass_SpeedValues_Request):
    """Message class 'SpeedValues_Request'."""

    __slots__ = [
        '_v_linear',
        '_w_angular',
    ]

    _fields_and_field_types = {
        'v_linear': 'double',
        'w_angular': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.v_linear = kwargs.get('v_linear', float())
        self.w_angular = kwargs.get('w_angular', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.v_linear != other.v_linear:
            return False
        if self.w_angular != other.w_angular:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def v_linear(self):
        """Message field 'v_linear'."""
        return self._v_linear

    @v_linear.setter
    def v_linear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_linear' field must be of type 'float'"
        self._v_linear = value

    @property
    def w_angular(self):
        """Message field 'w_angular'."""
        return self._w_angular

    @w_angular.setter
    def w_angular(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'w_angular' field must be of type 'float'"
        self._w_angular = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SpeedValues_Response(type):
    """Metaclass of message 'SpeedValues_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_subzero')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_subzero.srv.SpeedValues_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__speed_values__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__speed_values__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__speed_values__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__speed_values__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__speed_values__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedValues_Response(metaclass=Metaclass_SpeedValues_Response):
    """Message class 'SpeedValues_Response'."""

    __slots__ = [
        '_msg_sent',
    ]

    _fields_and_field_types = {
        'msg_sent': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msg_sent = kwargs.get('msg_sent', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.msg_sent != other.msg_sent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def msg_sent(self):
        """Message field 'msg_sent'."""
        return self._msg_sent

    @msg_sent.setter
    def msg_sent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'msg_sent' field must be of type 'bool'"
        self._msg_sent = value


class Metaclass_SpeedValues(type):
    """Metaclass of service 'SpeedValues'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_subzero')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_subzero.srv.SpeedValues')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__speed_values

            from interfaces_subzero.srv import _speed_values
            if _speed_values.Metaclass_SpeedValues_Request._TYPE_SUPPORT is None:
                _speed_values.Metaclass_SpeedValues_Request.__import_type_support__()
            if _speed_values.Metaclass_SpeedValues_Response._TYPE_SUPPORT is None:
                _speed_values.Metaclass_SpeedValues_Response.__import_type_support__()


class SpeedValues(metaclass=Metaclass_SpeedValues):
    from interfaces_subzero.srv._speed_values import SpeedValues_Request as Request
    from interfaces_subzero.srv._speed_values import SpeedValues_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
