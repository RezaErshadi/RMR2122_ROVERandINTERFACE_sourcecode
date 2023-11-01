# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_subzero:msg/MyGPSmsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyGPSmsg(type):
    """Metaclass of message 'MyGPSmsg'."""

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
                'interfaces_subzero.msg.MyGPSmsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__my_gp_smsg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__my_gp_smsg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__my_gp_smsg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__my_gp_smsg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__my_gp_smsg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyGPSmsg(metaclass=Metaclass_MyGPSmsg):
    """Message class 'MyGPSmsg'."""

    __slots__ = [
        '_gps',
        '_nmea',
        '_msg',
        '_iqual',
        '_qual',
        '_date',
        '_time',
        '_lat',
        '_lon',
        '_alt',
        '_geoid',
        '_speed',
        '_course',
    ]

    _fields_and_field_types = {
        'gps': 'string',
        'nmea': 'string',
        'msg': 'string',
        'iqual': 'int64',
        'qual': 'string',
        'date': 'string',
        'time': 'string',
        'lat': 'double',
        'lon': 'double',
        'alt': 'double',
        'geoid': 'double',
        'speed': 'double',
        'course': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.gps = kwargs.get('gps', str())
        self.nmea = kwargs.get('nmea', str())
        self.msg = kwargs.get('msg', str())
        self.iqual = kwargs.get('iqual', int())
        self.qual = kwargs.get('qual', str())
        self.date = kwargs.get('date', str())
        self.time = kwargs.get('time', str())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.geoid = kwargs.get('geoid', float())
        self.speed = kwargs.get('speed', float())
        self.course = kwargs.get('course', float())

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
        if self.gps != other.gps:
            return False
        if self.nmea != other.nmea:
            return False
        if self.msg != other.msg:
            return False
        if self.iqual != other.iqual:
            return False
        if self.qual != other.qual:
            return False
        if self.date != other.date:
            return False
        if self.time != other.time:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.geoid != other.geoid:
            return False
        if self.speed != other.speed:
            return False
        if self.course != other.course:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gps(self):
        """Message field 'gps'."""
        return self._gps

    @gps.setter
    def gps(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gps' field must be of type 'str'"
        self._gps = value

    @property
    def nmea(self):
        """Message field 'nmea'."""
        return self._nmea

    @nmea.setter
    def nmea(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'nmea' field must be of type 'str'"
        self._nmea = value

    @property
    def msg(self):
        """Message field 'msg'."""
        return self._msg

    @msg.setter
    def msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'msg' field must be of type 'str'"
        self._msg = value

    @property
    def iqual(self):
        """Message field 'iqual'."""
        return self._iqual

    @iqual.setter
    def iqual(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iqual' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'iqual' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._iqual = value

    @property
    def qual(self):
        """Message field 'qual'."""
        return self._qual

    @qual.setter
    def qual(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'qual' field must be of type 'str'"
        self._qual = value

    @property
    def date(self):
        """Message field 'date'."""
        return self._date

    @date.setter
    def date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'date' field must be of type 'str'"
        self._date = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'time' field must be of type 'str'"
        self._time = value

    @property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
        self._lat = value

    @property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
        self._lon = value

    @property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
        self._alt = value

    @property
    def geoid(self):
        """Message field 'geoid'."""
        return self._geoid

    @geoid.setter
    def geoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'geoid' field must be of type 'float'"
        self._geoid = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def course(self):
        """Message field 'course'."""
        return self._course

    @course.setter
    def course(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'course' field must be of type 'float'"
        self._course = value
