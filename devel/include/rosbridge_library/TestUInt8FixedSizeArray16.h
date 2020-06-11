// Generated by gencpp from file rosbridge_library/TestUInt8FixedSizeArray16.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTUINT8FIXEDSIZEARRAY16_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTUINT8FIXEDSIZEARRAY16_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestUInt8FixedSizeArray16_
{
  typedef TestUInt8FixedSizeArray16_<ContainerAllocator> Type;

  TestUInt8FixedSizeArray16_()
    : data()  {
      data.assign(0);
  }
  TestUInt8FixedSizeArray16_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef boost::array<uint8_t, 16>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> const> ConstPtr;

}; // struct TestUInt8FixedSizeArray16_

typedef ::rosbridge_library::TestUInt8FixedSizeArray16_<std::allocator<void> > TestUInt8FixedSizeArray16;

typedef boost::shared_ptr< ::rosbridge_library::TestUInt8FixedSizeArray16 > TestUInt8FixedSizeArray16Ptr;
typedef boost::shared_ptr< ::rosbridge_library::TestUInt8FixedSizeArray16 const> TestUInt8FixedSizeArray16ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'rosbridge_library': ['/home/lab/telelocomotion_ws/src/rosbridge_suite/rosbridge_library/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4e84d0a73514dfe9696b4796e8755e7";
  }

  static const char* value(const ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4e84d0a73514dfeULL;
  static const uint64_t static_value2 = 0x9696b4796e8755e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestUInt8FixedSizeArray16";
  }

  static const char* value(const ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[16] data\n\
";
  }

  static const char* value(const ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestUInt8FixedSizeArray16_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::TestUInt8FixedSizeArray16_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTUINT8FIXEDSIZEARRAY16_H
