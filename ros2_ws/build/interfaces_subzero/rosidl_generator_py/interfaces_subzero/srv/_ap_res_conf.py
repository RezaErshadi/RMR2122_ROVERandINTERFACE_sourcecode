# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_subzero:srv/ApRESConf.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'attenuators'
# Member 'gains'
# Member 'tx'
# Member 'rx'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApRESConf_Request(type):
    """Metaclass of message 'ApRESConf_Request'."""

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
                'interfaces_subzero.srv.ApRESConf_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ap_res_conf__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ap_res_conf__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ap_res_conf__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ap_res_conf__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ap_res_conf__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApRESConf_Request(metaclass=Metaclass_ApRESConf_Request):
    """Message class 'ApRESConf_Request'."""

    __slots__ = [
        '_act',
        '_type',
        '_n_attenuator',
        '_attenuators',
        '_gains',
        '_tx',
        '_rx',
        '_polarization',
        '_n_subburst',
        '_download',
        '_prefix',
    ]

    _fields_and_field_types = {
        'act': 'string',
        'type': 'string',
        'n_attenuator': 'int64',
        'attenuators': 'sequence<int64>',
        'gains': 'sequence<int64>',
        'tx': 'sequence<int64>',
        'rx': 'sequence<int64>',
        'polarization': 'string',
        'n_subburst': 'int64',
        'download': 'boolean',
        'prefix': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.act = kwargs.get('act', str())
        self.type = kwargs.get('type', str())
        self.n_attenuator = kwargs.get('n_attenuator', int())
        self.attenuators = array.array('q', kwargs.get('attenuators', []))
        self.gains = array.array('q', kwargs.get('gains', []))
        self.tx = array.array('q', kwargs.get('tx', []))
        self.rx = array.array('q', kwargs.get('rx', []))
        self.polarization = kwargs.get('polarization', str())
        self.n_subburst = kwargs.get('n_subburst', int())
        self.download = kwargs.get('download', bool())
        self.prefix = kwargs.get('prefix', str())

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
        if self.act != other.act:
            return False
        if self.type != other.type:
            return False
        if self.n_attenuator != other.n_attenuator:
            return False
        if self.attenuators != other.attenuators:
            return False
        if self.gains != other.gains:
            return False
        if self.tx != other.tx:
            return False
        if self.rx != other.rx:
            return False
        if self.polarization != other.polarization:
            return False
        if self.n_subburst != other.n_subburst:
            return False
        if self.download != other.download:
            return False
        if self.prefix != other.prefix:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def act(self):
        """Message field 'act'."""
        return self._act

    @act.setter
    def act(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'act' field must be of type 'str'"
        self._act = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property
    def n_attenuator(self):
        """Message field 'n_attenuator'."""
        return self._n_attenuator

    @n_attenuator.setter
    def n_attenuator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_attenuator' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'n_attenuator' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._n_attenuator = value

    @property
    def attenuators(self):
        """Message field 'attenuators'."""
        return self._attenuators

    @attenuators.setter
    def attenuators(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'attenuators' array.array() must have the type code of 'q'"
            self._attenuators = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'attenuators' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._attenuators = array.array('q', value)

    @property
    def gains(self):
        """Message field 'gains'."""
        return self._gains

    @gains.setter
    def gains(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'gains' array.array() must have the type code of 'q'"
            self._gains = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'gains' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._gains = array.array('q', value)

    @property
    def tx(self):
        """Message field 'tx'."""
        return self._tx

    @tx.setter
    def tx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'tx' array.array() must have the type code of 'q'"
            self._tx = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'tx' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._tx = array.array('q', value)

    @property
    def rx(self):
        """Message field 'rx'."""
        return self._rx

    @rx.setter
    def rx(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'rx' array.array() must have the type code of 'q'"
            self._rx = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'rx' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._rx = array.array('q', value)

    @property
    def polarization(self):
        """Message field 'polarization'."""
        return self._polarization

    @polarization.setter
    def polarization(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'polarization' field must be of type 'str'"
        self._polarization = value

    @property
    def n_subburst(self):
        """Message field 'n_subburst'."""
        return self._n_subburst

    @n_subburst.setter
    def n_subburst(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_subburst' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'n_subburst' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._n_subburst = value

    @property
    def download(self):
        """Message field 'download'."""
        return self._download

    @download.setter
    def download(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'download' field must be of type 'bool'"
        self._download = value

    @property
    def prefix(self):
        """Message field 'prefix'."""
        return self._prefix

    @prefix.setter
    def prefix(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prefix' field must be of type 'str'"
        self._prefix = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ApRESConf_Response(type):
    """Metaclass of message 'ApRESConf_Response'."""

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
                'interfaces_subzero.srv.ApRESConf_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ap_res_conf__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ap_res_conf__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ap_res_conf__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ap_res_conf__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ap_res_conf__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApRESConf_Response(metaclass=Metaclass_ApRESConf_Response):
    """Message class 'ApRESConf_Response'."""

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


class Metaclass_ApRESConf(type):
    """Metaclass of service 'ApRESConf'."""

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
                'interfaces_subzero.srv.ApRESConf')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ap_res_conf

            from interfaces_subzero.srv import _ap_res_conf
            if _ap_res_conf.Metaclass_ApRESConf_Request._TYPE_SUPPORT is None:
                _ap_res_conf.Metaclass_ApRESConf_Request.__import_type_support__()
            if _ap_res_conf.Metaclass_ApRESConf_Response._TYPE_SUPPORT is None:
                _ap_res_conf.Metaclass_ApRESConf_Response.__import_type_support__()


class ApRESConf(metaclass=Metaclass_ApRESConf):
    from interfaces_subzero.srv._ap_res_conf import ApRESConf_Request as Request
    from interfaces_subzero.srv._ap_res_conf import ApRESConf_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
