# generated from rosidl_generator_py/resource/_idl.py.em
# with input from command_interfaces:srv/Command.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Command_Request(type):
    """Metaclass of message 'Command_Request'."""

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
            module = import_type_support('command_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'command_interfaces.srv.Command_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Command_Request(metaclass=Metaclass_Command_Request):
    """Message class 'Command_Request'."""

    __slots__ = [
        '_input1',
        '_input2',
        '_input3',
        '_input4',
        '_input5',
        '_input6',
    ]

    _fields_and_field_types = {
        'input1': 'uint8',
        'input2': 'uint8',
        'input3': 'uint8',
        'input4': 'uint8',
        'input5': 'uint8',
        'input6': 'uint8',
    }

    SLOT_TYPES = (
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
        self.input1 = kwargs.get('input1', int())
        self.input2 = kwargs.get('input2', int())
        self.input3 = kwargs.get('input3', int())
        self.input4 = kwargs.get('input4', int())
        self.input5 = kwargs.get('input5', int())
        self.input6 = kwargs.get('input6', int())

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
        if self.input1 != other.input1:
            return False
        if self.input2 != other.input2:
            return False
        if self.input3 != other.input3:
            return False
        if self.input4 != other.input4:
            return False
        if self.input5 != other.input5:
            return False
        if self.input6 != other.input6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def input1(self):
        """Message field 'input1'."""
        return self._input1

    @input1.setter
    def input1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input1' field must be an unsigned integer in [0, 255]"
        self._input1 = value

    @builtins.property
    def input2(self):
        """Message field 'input2'."""
        return self._input2

    @input2.setter
    def input2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input2' field must be an unsigned integer in [0, 255]"
        self._input2 = value

    @builtins.property
    def input3(self):
        """Message field 'input3'."""
        return self._input3

    @input3.setter
    def input3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input3' field must be an unsigned integer in [0, 255]"
        self._input3 = value

    @builtins.property
    def input4(self):
        """Message field 'input4'."""
        return self._input4

    @input4.setter
    def input4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input4' field must be an unsigned integer in [0, 255]"
        self._input4 = value

    @builtins.property
    def input5(self):
        """Message field 'input5'."""
        return self._input5

    @input5.setter
    def input5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input5' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input5' field must be an unsigned integer in [0, 255]"
        self._input5 = value

    @builtins.property
    def input6(self):
        """Message field 'input6'."""
        return self._input6

    @input6.setter
    def input6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input6' field must be an unsigned integer in [0, 255]"
        self._input6 = value


# Import statements for member types

# already imported above
# import builtins

# Member 'command_array'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Command_Response(type):
    """Metaclass of message 'Command_Response'."""

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
            module = import_type_support('command_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'command_interfaces.srv.Command_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Command_Response(metaclass=Metaclass_Command_Response):
    """Message class 'Command_Response'."""

    __slots__ = [
        '_command_array',
    ]

    _fields_and_field_types = {
        'command_array': 'uint8[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'command_array' not in kwargs:
            self.command_array = numpy.zeros(6, dtype=numpy.uint8)
        else:
            self.command_array = numpy.array(kwargs.get('command_array'), dtype=numpy.uint8)
            assert self.command_array.shape == (6, )

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
        if all(self.command_array != other.command_array):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_array(self):
        """Message field 'command_array'."""
        return self._command_array

    @command_array.setter
    def command_array(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'command_array' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 6, \
                "The 'command_array' numpy.ndarray() must have a size of 6"
            self._command_array = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'command_array' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._command_array = numpy.array(value, dtype=numpy.uint8)


class Metaclass_Command(type):
    """Metaclass of service 'Command'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('command_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'command_interfaces.srv.Command')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__command

            from command_interfaces.srv import _command
            if _command.Metaclass_Command_Request._TYPE_SUPPORT is None:
                _command.Metaclass_Command_Request.__import_type_support__()
            if _command.Metaclass_Command_Response._TYPE_SUPPORT is None:
                _command.Metaclass_Command_Response.__import_type_support__()


class Command(metaclass=Metaclass_Command):
    from command_interfaces.srv._command import Command_Request as Request
    from command_interfaces.srv._command import Command_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
