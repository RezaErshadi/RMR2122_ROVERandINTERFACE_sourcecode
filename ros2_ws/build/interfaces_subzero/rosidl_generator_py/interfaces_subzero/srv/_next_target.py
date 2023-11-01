# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_subzero:srv/NextTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NextTarget_Request(type):
    """Metaclass of message 'NextTarget_Request'."""

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
                'interfaces_subzero.srv.NextTarget_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__next_target__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__next_target__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__next_target__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__next_target__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__next_target__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NextTarget_Request(metaclass=Metaclass_NextTarget_Request):
    """Message class 'NextTarget_Request'."""

    __slots__ = [
        '_i_next_target',
        '_next_target_lat',
        '_next_target_lon',
        '_bearing_to_next_target',
        '_dist_to_next_target',
        '_dist_from_last_ref',
    ]

    _fields_and_field_types = {
        'i_next_target': 'int64',
        'next_target_lat': 'double',
        'next_target_lon': 'double',
        'bearing_to_next_target': 'double',
        'dist_to_next_target': 'double',
        'dist_from_last_ref': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.i_next_target = kwargs.get('i_next_target', int())
        self.next_target_lat = kwargs.get('next_target_lat', float())
        self.next_target_lon = kwargs.get('next_target_lon', float())
        self.bearing_to_next_target = kwargs.get('bearing_to_next_target', float())
        self.dist_to_next_target = kwargs.get('dist_to_next_target', float())
        self.dist_from_last_ref = kwargs.get('dist_from_last_ref', float())

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
        if self.i_next_target != other.i_next_target:
            return False
        if self.next_target_lat != other.next_target_lat:
            return False
        if self.next_target_lon != other.next_target_lon:
            return False
        if self.bearing_to_next_target != other.bearing_to_next_target:
            return False
        if self.dist_to_next_target != other.dist_to_next_target:
            return False
        if self.dist_from_last_ref != other.dist_from_last_ref:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def i_next_target(self):
        """Message field 'i_next_target'."""
        return self._i_next_target

    @i_next_target.setter
    def i_next_target(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i_next_target' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'i_next_target' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._i_next_target = value

    @property
    def next_target_lat(self):
        """Message field 'next_target_lat'."""
        return self._next_target_lat

    @next_target_lat.setter
    def next_target_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_target_lat' field must be of type 'float'"
        self._next_target_lat = value

    @property
    def next_target_lon(self):
        """Message field 'next_target_lon'."""
        return self._next_target_lon

    @next_target_lon.setter
    def next_target_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'next_target_lon' field must be of type 'float'"
        self._next_target_lon = value

    @property
    def bearing_to_next_target(self):
        """Message field 'bearing_to_next_target'."""
        return self._bearing_to_next_target

    @bearing_to_next_target.setter
    def bearing_to_next_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bearing_to_next_target' field must be of type 'float'"
        self._bearing_to_next_target = value

    @property
    def dist_to_next_target(self):
        """Message field 'dist_to_next_target'."""
        return self._dist_to_next_target

    @dist_to_next_target.setter
    def dist_to_next_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_to_next_target' field must be of type 'float'"
        self._dist_to_next_target = value

    @property
    def dist_from_last_ref(self):
        """Message field 'dist_from_last_ref'."""
        return self._dist_from_last_ref

    @dist_from_last_ref.setter
    def dist_from_last_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_from_last_ref' field must be of type 'float'"
        self._dist_from_last_ref = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_NextTarget_Response(type):
    """Metaclass of message 'NextTarget_Response'."""

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
                'interfaces_subzero.srv.NextTarget_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__next_target__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__next_target__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__next_target__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__next_target__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__next_target__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NextTarget_Response(metaclass=Metaclass_NextTarget_Response):
    """Message class 'NextTarget_Response'."""

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


class Metaclass_NextTarget(type):
    """Metaclass of service 'NextTarget'."""

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
                'interfaces_subzero.srv.NextTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__next_target

            from interfaces_subzero.srv import _next_target
            if _next_target.Metaclass_NextTarget_Request._TYPE_SUPPORT is None:
                _next_target.Metaclass_NextTarget_Request.__import_type_support__()
            if _next_target.Metaclass_NextTarget_Response._TYPE_SUPPORT is None:
                _next_target.Metaclass_NextTarget_Response.__import_type_support__()


class NextTarget(metaclass=Metaclass_NextTarget):
    from interfaces_subzero.srv._next_target import NextTarget_Request as Request
    from interfaces_subzero.srv._next_target import NextTarget_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
