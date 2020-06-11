// Generated by gencpp from file rosapi/SearchParamResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SEARCHPARAMRESPONSE_H
#define ROSAPI_MESSAGE_SEARCHPARAMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct SearchParamResponse_
{
  typedef SearchParamResponse_<ContainerAllocator> Type;

  SearchParamResponse_()
    : global_name()  {
    }
  SearchParamResponse_(const ContainerAllocator& _alloc)
    : global_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _global_name_type;
  _global_name_type global_name;





  typedef boost::shared_ptr< ::rosapi::SearchParamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::SearchParamResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SearchParamResponse_

typedef ::rosapi::SearchParamResponse_<std::allocator<void> > SearchParamResponse;

typedef boost::shared_ptr< ::rosapi::SearchParamResponse > SearchParamResponsePtr;
typedef boost::shared_ptr< ::rosapi::SearchParamResponse const> SearchParamResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::SearchParamResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::SearchParamResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosapi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosapi': ['/home/lab/telelocomotion_ws/src/rosbridge_suite/rosapi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SearchParamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::SearchParamResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::SearchParamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::SearchParamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SearchParamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::SearchParamResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::SearchParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87c264f142c2aeca13349d90aeec0386";
  }

  static const char* value(const ::rosapi::SearchParamResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87c264f142c2aecaULL;
  static const uint64_t static_value2 = 0x13349d90aeec0386ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::SearchParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/SearchParamResponse";
  }

  static const char* value(const ::rosapi::SearchParamResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::SearchParamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string global_name\n\
";
  }

  static const char* value(const ::rosapi::SearchParamResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::SearchParamResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.global_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SearchParamResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::SearchParamResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::SearchParamResponse_<ContainerAllocator>& v)
  {
    s << indent << "global_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.global_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SEARCHPARAMRESPONSE_H
