# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_mas:msg/TransGlobal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransGlobal(type):
    """Metaclass of message 'TransGlobal'."""

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
            module = import_type_support('my_mas')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_mas.msg.TransGlobal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trans_global
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trans_global
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trans_global
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trans_global
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trans_global

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransGlobal(metaclass=Metaclass_TransGlobal):
    """Message class 'TransGlobal'."""

    __slots__ = [
        '_resultado',
        '_status',
        '_name_node',
        '_fecha',
        '_folio',
    ]

    _fields_and_field_types = {
        'resultado': 'string',
        'status': 'string',
        'name_node': 'string',
        'fecha': 'string',
        'folio': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.resultado = kwargs.get('resultado', str())
        self.status = kwargs.get('status', str())
        self.name_node = kwargs.get('name_node', str())
        self.fecha = kwargs.get('fecha', str())
        self.folio = kwargs.get('folio', str())

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
        if self.resultado != other.resultado:
            return False
        if self.status != other.status:
            return False
        if self.name_node != other.name_node:
            return False
        if self.fecha != other.fecha:
            return False
        if self.folio != other.folio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def resultado(self):
        """Message field 'resultado'."""
        return self._resultado

    @resultado.setter
    def resultado(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'resultado' field must be of type 'str'"
        self._resultado = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @builtins.property
    def name_node(self):
        """Message field 'name_node'."""
        return self._name_node

    @name_node.setter
    def name_node(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name_node' field must be of type 'str'"
        self._name_node = value

    @builtins.property
    def fecha(self):
        """Message field 'fecha'."""
        return self._fecha

    @fecha.setter
    def fecha(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fecha' field must be of type 'str'"
        self._fecha = value

    @builtins.property
    def folio(self):
        """Message field 'folio'."""
        return self._folio

    @folio.setter
    def folio(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'folio' field must be of type 'str'"
        self._folio = value
