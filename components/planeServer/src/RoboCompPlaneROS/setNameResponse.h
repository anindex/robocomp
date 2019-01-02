// Generated by gencpp from file RoboCompPlaneROS/setNameResponse.msg
// DO NOT EDIT!


#ifndef ROBOCOMPPLANEROS_MESSAGE_SETNAMERESPONSE_H
#define ROBOCOMPPLANEROS_MESSAGE_SETNAMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace RoboCompPlaneROS
{
template <class ContainerAllocator>
struct setNameResponse_
{
  typedef setNameResponse_<ContainerAllocator> Type;

  setNameResponse_()
    : lastName()  {
    }
  setNameResponse_(const ContainerAllocator& _alloc)
    : lastName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _lastName_type;
  _lastName_type lastName;





  typedef boost::shared_ptr< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct setNameResponse_

typedef ::RoboCompPlaneROS::setNameResponse_<std::allocator<void> > setNameResponse;

typedef boost::shared_ptr< ::RoboCompPlaneROS::setNameResponse > setNameResponsePtr;
typedef boost::shared_ptr< ::RoboCompPlaneROS::setNameResponse const> setNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace RoboCompPlaneROS

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_srvs': ['/opt/ros/melodic/share/std_srv/srv'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/msg'], 'RoboCompPlaneROS': ['./src']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25022d832ef9583a13ba22d4ad4a0c6d";
  }

  static const char* value(const ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25022d832ef9583aULL;
  static const uint64_t static_value2 = 0x13ba22d4ad4a0c6dULL;
};

template<class ContainerAllocator>
struct DataType< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RoboCompPlaneROS/setNameResponse";
  }

  static const char* value(const ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string lastName\n\
\n\
";
  }

  static const char* value(const ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lastName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct setNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::RoboCompPlaneROS::setNameResponse_<ContainerAllocator>& v)
  {
    s << indent << "lastName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.lastName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOCOMPPLANEROS_MESSAGE_SETNAMERESPONSE_H
