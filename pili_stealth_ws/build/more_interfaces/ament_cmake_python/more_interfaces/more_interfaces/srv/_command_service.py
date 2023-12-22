# generated from rosidl_generator_py/resource/_idl.py.em
# with input from more_interfaces:srv/CommandService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommandService_Request(type):
    """Metaclass of message 'CommandService_Request'."""

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
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.CommandService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CommandService_Request(metaclass=Metaclass_CommandService_Request):
    """Message class 'CommandService_Request'."""

    __slots__ = [
        '_mode',
        '_vm1',
        '_tm1',
        '_vm2',
        '_tm2',
        '_vm3',
        '_tm3',
        '_ts',
    ]

    _fields_and_field_types = {
        'mode': 'uint8',
        'vm1': 'uint8',
        'tm1': 'uint8',
        'vm2': 'uint8',
        'tm2': 'uint8',
        'vm3': 'uint8',
        'tm3': 'uint8',
        'ts': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())
        self.vm1 = kwargs.get('vm1', int())
        self.tm1 = kwargs.get('tm1', int())
        self.vm2 = kwargs.get('vm2', int())
        self.tm2 = kwargs.get('tm2', int())
        self.vm3 = kwargs.get('vm3', int())
        self.tm3 = kwargs.get('tm3', int())
        self.ts = kwargs.get('ts', int())

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
        if self.mode != other.mode:
            return False
        if self.vm1 != other.vm1:
            return False
        if self.tm1 != other.tm1:
            return False
        if self.vm2 != other.vm2:
            return False
        if self.tm2 != other.tm2:
            return False
        if self.vm3 != other.vm3:
            return False
        if self.tm3 != other.tm3:
            return False
        if self.ts != other.ts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def vm1(self):
        """Message field 'vm1'."""
        return self._vm1

    @vm1.setter
    def vm1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vm1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vm1' field must be an unsigned integer in [0, 255]"
        self._vm1 = value

    @builtins.property
    def tm1(self):
        """Message field 'tm1'."""
        return self._tm1

    @tm1.setter
    def tm1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tm1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tm1' field must be an unsigned integer in [0, 255]"
        self._tm1 = value

    @builtins.property
    def vm2(self):
        """Message field 'vm2'."""
        return self._vm2

    @vm2.setter
    def vm2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vm2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vm2' field must be an unsigned integer in [0, 255]"
        self._vm2 = value

    @builtins.property
    def tm2(self):
        """Message field 'tm2'."""
        return self._tm2

    @tm2.setter
    def tm2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tm2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tm2' field must be an unsigned integer in [0, 255]"
        self._tm2 = value

    @builtins.property
    def vm3(self):
        """Message field 'vm3'."""
        return self._vm3

    @vm3.setter
    def vm3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vm3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vm3' field must be an unsigned integer in [0, 255]"
        self._vm3 = value

    @builtins.property
    def tm3(self):
        """Message field 'tm3'."""
        return self._tm3

    @tm3.setter
    def tm3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tm3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tm3' field must be an unsigned integer in [0, 255]"
        self._tm3 = value

    @builtins.property
    def ts(self):
        """Message field 'ts'."""
        return self._ts

    @ts.setter
    def ts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ts' field must be an unsigned integer in [0, 255]"
        self._ts = value


# Import statements for member types

# already imported above
# import builtins

# Member 'allcmd'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_CommandService_Response(type):
    """Metaclass of message 'CommandService_Response'."""

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
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.CommandService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CommandService_Response(metaclass=Metaclass_CommandService_Response):
    """Message class 'CommandService_Response'."""

    __slots__ = [
        '_allcmd',
    ]

    _fields_and_field_types = {
        'allcmd': 'uint8[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'allcmd' not in kwargs:
            self.allcmd = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.allcmd = numpy.array(kwargs.get('allcmd'), dtype=numpy.uint8)
            assert self.allcmd.shape == (8, )

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
        if all(self.allcmd != other.allcmd):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def allcmd(self):
        """Message field 'allcmd'."""
        return self._allcmd

    @allcmd.setter
    def allcmd(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'allcmd' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'allcmd' numpy.ndarray() must have a size of 8"
            self._allcmd = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'allcmd' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._allcmd = numpy.array(value, dtype=numpy.uint8)


class Metaclass_CommandService(type):
    """Metaclass of service 'CommandService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('more_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'more_interfaces.srv.CommandService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__command_service

            from more_interfaces.srv import _command_service
            if _command_service.Metaclass_CommandService_Request._TYPE_SUPPORT is None:
                _command_service.Metaclass_CommandService_Request.__import_type_support__()
            if _command_service.Metaclass_CommandService_Response._TYPE_SUPPORT is None:
                _command_service.Metaclass_CommandService_Response.__import_type_support__()


class CommandService(metaclass=Metaclass_CommandService):
    from more_interfaces.srv._command_service import CommandService_Request as Request
    from more_interfaces.srv._command_service import CommandService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
