# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mpros2_msg:msg/MediaPipeHumanPoseList.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MediaPipeHumanPoseList(type):
    """Metaclass of message 'MediaPipeHumanPoseList'."""

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
            module = import_type_support('mpros2_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mpros2_msg.msg.MediaPipeHumanPoseList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__media_pipe_human_pose_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__media_pipe_human_pose_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__media_pipe_human_pose_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__media_pipe_human_pose_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__media_pipe_human_pose_list

            from mpros2_msg.msg import PosePoint
            if PosePoint.__class__._TYPE_SUPPORT is None:
                PosePoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MediaPipeHumanPoseList(metaclass=Metaclass_MediaPipeHumanPoseList):
    """Message class 'MediaPipeHumanPoseList'."""

    __slots__ = [
        '_num_humans',
        '_human_pose_list',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num_humans': 'int32',
        'human_pose_list': 'mpros2_msg/PosePoint[33]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['mpros2_msg', 'msg'], 'PosePoint'), 33),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_humans = kwargs.get('num_humans', int())
        from mpros2_msg.msg import PosePoint
        self.human_pose_list = kwargs.get(
            'human_pose_list',
            [PosePoint() for x in range(33)]
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num_humans != other.num_humans:
            return False
        if self.human_pose_list != other.human_pose_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_humans(self):
        """Message field 'num_humans'."""
        return self._num_humans

    @num_humans.setter
    def num_humans(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_humans' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_humans' field must be an integer in [-2147483648, 2147483647]"
        self._num_humans = value

    @builtins.property
    def human_pose_list(self):
        """Message field 'human_pose_list'."""
        return self._human_pose_list

    @human_pose_list.setter
    def human_pose_list(self, value):
        if self._check_fields:
            from mpros2_msg.msg import PosePoint
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
                 len(value) == 33 and
                 all(isinstance(v, PosePoint) for v in value) and
                 True), \
                "The 'human_pose_list' field must be a set or sequence with length 33 and each value of type 'PosePoint'"
        self._human_pose_list = value
