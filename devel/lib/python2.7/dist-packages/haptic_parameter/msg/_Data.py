# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from haptic_parameter/Data.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import haptic_parameter.msg

class Data(genpy.Message):
  _md5sum = "0b2afd3d9a0612aab16dcedb918a16fb"
  _type = "haptic_parameter/Data"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Point point1
haptic_parameter/Rotation rotation1
haptic_parameter/Button button1
geometry_msgs/Point point2
haptic_parameter/Rotation rotation2
haptic_parameter/Button button2

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: haptic_parameter/Rotation
float64 m00
float64 m01
float64 m02
float64 m10
float64 m11
float64 m12
float64 m20
float64 m21
float64 m22

================================================================================
MSG: haptic_parameter/Button
float64 A
float64 B
"""
  __slots__ = ['point1','rotation1','button1','point2','rotation2','button2']
  _slot_types = ['geometry_msgs/Point','haptic_parameter/Rotation','haptic_parameter/Button','geometry_msgs/Point','haptic_parameter/Rotation','haptic_parameter/Button']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       point1,rotation1,button1,point2,rotation2,button2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Data, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.point1 is None:
        self.point1 = geometry_msgs.msg.Point()
      if self.rotation1 is None:
        self.rotation1 = haptic_parameter.msg.Rotation()
      if self.button1 is None:
        self.button1 = haptic_parameter.msg.Button()
      if self.point2 is None:
        self.point2 = geometry_msgs.msg.Point()
      if self.rotation2 is None:
        self.rotation2 = haptic_parameter.msg.Rotation()
      if self.button2 is None:
        self.button2 = haptic_parameter.msg.Button()
    else:
      self.point1 = geometry_msgs.msg.Point()
      self.rotation1 = haptic_parameter.msg.Rotation()
      self.button1 = haptic_parameter.msg.Button()
      self.point2 = geometry_msgs.msg.Point()
      self.rotation2 = haptic_parameter.msg.Rotation()
      self.button2 = haptic_parameter.msg.Button()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_28d().pack(_x.point1.x, _x.point1.y, _x.point1.z, _x.rotation1.m00, _x.rotation1.m01, _x.rotation1.m02, _x.rotation1.m10, _x.rotation1.m11, _x.rotation1.m12, _x.rotation1.m20, _x.rotation1.m21, _x.rotation1.m22, _x.button1.A, _x.button1.B, _x.point2.x, _x.point2.y, _x.point2.z, _x.rotation2.m00, _x.rotation2.m01, _x.rotation2.m02, _x.rotation2.m10, _x.rotation2.m11, _x.rotation2.m12, _x.rotation2.m20, _x.rotation2.m21, _x.rotation2.m22, _x.button2.A, _x.button2.B))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.point1 is None:
        self.point1 = geometry_msgs.msg.Point()
      if self.rotation1 is None:
        self.rotation1 = haptic_parameter.msg.Rotation()
      if self.button1 is None:
        self.button1 = haptic_parameter.msg.Button()
      if self.point2 is None:
        self.point2 = geometry_msgs.msg.Point()
      if self.rotation2 is None:
        self.rotation2 = haptic_parameter.msg.Rotation()
      if self.button2 is None:
        self.button2 = haptic_parameter.msg.Button()
      end = 0
      _x = self
      start = end
      end += 224
      (_x.point1.x, _x.point1.y, _x.point1.z, _x.rotation1.m00, _x.rotation1.m01, _x.rotation1.m02, _x.rotation1.m10, _x.rotation1.m11, _x.rotation1.m12, _x.rotation1.m20, _x.rotation1.m21, _x.rotation1.m22, _x.button1.A, _x.button1.B, _x.point2.x, _x.point2.y, _x.point2.z, _x.rotation2.m00, _x.rotation2.m01, _x.rotation2.m02, _x.rotation2.m10, _x.rotation2.m11, _x.rotation2.m12, _x.rotation2.m20, _x.rotation2.m21, _x.rotation2.m22, _x.button2.A, _x.button2.B,) = _get_struct_28d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_28d().pack(_x.point1.x, _x.point1.y, _x.point1.z, _x.rotation1.m00, _x.rotation1.m01, _x.rotation1.m02, _x.rotation1.m10, _x.rotation1.m11, _x.rotation1.m12, _x.rotation1.m20, _x.rotation1.m21, _x.rotation1.m22, _x.button1.A, _x.button1.B, _x.point2.x, _x.point2.y, _x.point2.z, _x.rotation2.m00, _x.rotation2.m01, _x.rotation2.m02, _x.rotation2.m10, _x.rotation2.m11, _x.rotation2.m12, _x.rotation2.m20, _x.rotation2.m21, _x.rotation2.m22, _x.button2.A, _x.button2.B))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.point1 is None:
        self.point1 = geometry_msgs.msg.Point()
      if self.rotation1 is None:
        self.rotation1 = haptic_parameter.msg.Rotation()
      if self.button1 is None:
        self.button1 = haptic_parameter.msg.Button()
      if self.point2 is None:
        self.point2 = geometry_msgs.msg.Point()
      if self.rotation2 is None:
        self.rotation2 = haptic_parameter.msg.Rotation()
      if self.button2 is None:
        self.button2 = haptic_parameter.msg.Button()
      end = 0
      _x = self
      start = end
      end += 224
      (_x.point1.x, _x.point1.y, _x.point1.z, _x.rotation1.m00, _x.rotation1.m01, _x.rotation1.m02, _x.rotation1.m10, _x.rotation1.m11, _x.rotation1.m12, _x.rotation1.m20, _x.rotation1.m21, _x.rotation1.m22, _x.button1.A, _x.button1.B, _x.point2.x, _x.point2.y, _x.point2.z, _x.rotation2.m00, _x.rotation2.m01, _x.rotation2.m02, _x.rotation2.m10, _x.rotation2.m11, _x.rotation2.m12, _x.rotation2.m20, _x.rotation2.m21, _x.rotation2.m22, _x.button2.A, _x.button2.B,) = _get_struct_28d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_28d = None
def _get_struct_28d():
    global _struct_28d
    if _struct_28d is None:
        _struct_28d = struct.Struct("<28d")
    return _struct_28d