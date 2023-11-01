# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_subzero:msg/MyGarminMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MyGarminMsg(type):
    """Metaclass of message 'MyGarminMsg'."""

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
                'interfaces_subzero.msg.MyGarminMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__my_garmin_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__my_garmin_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__my_garmin_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__my_garmin_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__my_garmin_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MyGarminMsg(metaclass=Metaclass_MyGarminMsg):
    """Message class 'MyGarminMsg'."""

    __slots__ = [
        '_gps_connection',
        '_gps_data',
        '_age',
        '_bpq_msg',
        '_bpq_time',
        '_base_lat',
        '_base_lon',
        '_base_eht',
        '_gga_msg',
        '_gga_time',
        '_rover_lat',
        '_rover_lon',
        '_rover_alt',
        '_rover_geoid',
        '_rmc_msg',
        '_rmc_time',
        '_rover_date',
        '_rover_speed',
        '_rover_course',
        '_gps_for_arduino',
        '_gps_for_radio',
    ]

    _fields_and_field_types = {
        'gps_connection': 'boolean',
        'gps_data': 'boolean',
        'age': 'double',
        'bpq_msg': 'string',
        'bpq_time': 'string',
        'base_lat': 'double',
        'base_lon': 'double',
        'base_eht': 'double',
        'gga_msg': 'string',
        'gga_time': 'string',
        'rover_lat': 'double',
        'rover_lon': 'double',
        'rover_alt': 'double',
        'rover_geoid': 'double',
        'rmc_msg': 'string',
        'rmc_time': 'string',
        'rover_date': 'string',
        'rover_speed': 'double',
        'rover_course': 'double',
        'gps_for_arduino': 'string',
        'gps_for_radio': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gps_connection = kwargs.get('gps_connection', bool())
        self.gps_data = kwargs.get('gps_data', bool())
        self.age = kwargs.get('age', float())
        self.bpq_msg = kwargs.get('bpq_msg', str())
        self.bpq_time = kwargs.get('bpq_time', str())
        self.base_lat = kwargs.get('base_lat', float())
        self.base_lon = kwargs.get('base_lon', float())
        self.base_eht = kwargs.get('base_eht', float())
        self.gga_msg = kwargs.get('gga_msg', str())
        self.gga_time = kwargs.get('gga_time', str())
        self.rover_lat = kwargs.get('rover_lat', float())
        self.rover_lon = kwargs.get('rover_lon', float())
        self.rover_alt = kwargs.get('rover_alt', float())
        self.rover_geoid = kwargs.get('rover_geoid', float())
        self.rmc_msg = kwargs.get('rmc_msg', str())
        self.rmc_time = kwargs.get('rmc_time', str())
        self.rover_date = kwargs.get('rover_date', str())
        self.rover_speed = kwargs.get('rover_speed', float())
        self.rover_course = kwargs.get('rover_course', float())
        self.gps_for_arduino = kwargs.get('gps_for_arduino', str())
        self.gps_for_radio = kwargs.get('gps_for_radio', str())

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
        if self.gps_connection != other.gps_connection:
            return False
        if self.gps_data != other.gps_data:
            return False
        if self.age != other.age:
            return False
        if self.bpq_msg != other.bpq_msg:
            return False
        if self.bpq_time != other.bpq_time:
            return False
        if self.base_lat != other.base_lat:
            return False
        if self.base_lon != other.base_lon:
            return False
        if self.base_eht != other.base_eht:
            return False
        if self.gga_msg != other.gga_msg:
            return False
        if self.gga_time != other.gga_time:
            return False
        if self.rover_lat != other.rover_lat:
            return False
        if self.rover_lon != other.rover_lon:
            return False
        if self.rover_alt != other.rover_alt:
            return False
        if self.rover_geoid != other.rover_geoid:
            return False
        if self.rmc_msg != other.rmc_msg:
            return False
        if self.rmc_time != other.rmc_time:
            return False
        if self.rover_date != other.rover_date:
            return False
        if self.rover_speed != other.rover_speed:
            return False
        if self.rover_course != other.rover_course:
            return False
        if self.gps_for_arduino != other.gps_for_arduino:
            return False
        if self.gps_for_radio != other.gps_for_radio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gps_connection(self):
        """Message field 'gps_connection'."""
        return self._gps_connection

    @gps_connection.setter
    def gps_connection(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_connection' field must be of type 'bool'"
        self._gps_connection = value

    @property
    def gps_data(self):
        """Message field 'gps_data'."""
        return self._gps_data

    @gps_data.setter
    def gps_data(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_data' field must be of type 'bool'"
        self._gps_data = value

    @property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
        self._age = value

    @property
    def bpq_msg(self):
        """Message field 'bpq_msg'."""
        return self._bpq_msg

    @bpq_msg.setter
    def bpq_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bpq_msg' field must be of type 'str'"
        self._bpq_msg = value

    @property
    def bpq_time(self):
        """Message field 'bpq_time'."""
        return self._bpq_time

    @bpq_time.setter
    def bpq_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bpq_time' field must be of type 'str'"
        self._bpq_time = value

    @property
    def base_lat(self):
        """Message field 'base_lat'."""
        return self._base_lat

    @base_lat.setter
    def base_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_lat' field must be of type 'float'"
        self._base_lat = value

    @property
    def base_lon(self):
        """Message field 'base_lon'."""
        return self._base_lon

    @base_lon.setter
    def base_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_lon' field must be of type 'float'"
        self._base_lon = value

    @property
    def base_eht(self):
        """Message field 'base_eht'."""
        return self._base_eht

    @base_eht.setter
    def base_eht(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_eht' field must be of type 'float'"
        self._base_eht = value

    @property
    def gga_msg(self):
        """Message field 'gga_msg'."""
        return self._gga_msg

    @gga_msg.setter
    def gga_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gga_msg' field must be of type 'str'"
        self._gga_msg = value

    @property
    def gga_time(self):
        """Message field 'gga_time'."""
        return self._gga_time

    @gga_time.setter
    def gga_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gga_time' field must be of type 'str'"
        self._gga_time = value

    @property
    def rover_lat(self):
        """Message field 'rover_lat'."""
        return self._rover_lat

    @rover_lat.setter
    def rover_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_lat' field must be of type 'float'"
        self._rover_lat = value

    @property
    def rover_lon(self):
        """Message field 'rover_lon'."""
        return self._rover_lon

    @rover_lon.setter
    def rover_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_lon' field must be of type 'float'"
        self._rover_lon = value

    @property
    def rover_alt(self):
        """Message field 'rover_alt'."""
        return self._rover_alt

    @rover_alt.setter
    def rover_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_alt' field must be of type 'float'"
        self._rover_alt = value

    @property
    def rover_geoid(self):
        """Message field 'rover_geoid'."""
        return self._rover_geoid

    @rover_geoid.setter
    def rover_geoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_geoid' field must be of type 'float'"
        self._rover_geoid = value

    @property
    def rmc_msg(self):
        """Message field 'rmc_msg'."""
        return self._rmc_msg

    @rmc_msg.setter
    def rmc_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rmc_msg' field must be of type 'str'"
        self._rmc_msg = value

    @property
    def rmc_time(self):
        """Message field 'rmc_time'."""
        return self._rmc_time

    @rmc_time.setter
    def rmc_time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rmc_time' field must be of type 'str'"
        self._rmc_time = value

    @property
    def rover_date(self):
        """Message field 'rover_date'."""
        return self._rover_date

    @rover_date.setter
    def rover_date(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rover_date' field must be of type 'str'"
        self._rover_date = value

    @property
    def rover_speed(self):
        """Message field 'rover_speed'."""
        return self._rover_speed

    @rover_speed.setter
    def rover_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_speed' field must be of type 'float'"
        self._rover_speed = value

    @property
    def rover_course(self):
        """Message field 'rover_course'."""
        return self._rover_course

    @rover_course.setter
    def rover_course(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rover_course' field must be of type 'float'"
        self._rover_course = value

    @property
    def gps_for_arduino(self):
        """Message field 'gps_for_arduino'."""
        return self._gps_for_arduino

    @gps_for_arduino.setter
    def gps_for_arduino(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gps_for_arduino' field must be of type 'str'"
        self._gps_for_arduino = value

    @property
    def gps_for_radio(self):
        """Message field 'gps_for_radio'."""
        return self._gps_for_radio

    @gps_for_radio.setter
    def gps_for_radio(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gps_for_radio' field must be of type 'str'"
        self._gps_for_radio = value
