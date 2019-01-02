// Generated by gencpp from file RoboCompPlaneROS/setWidthRequest.msg
// DO NOT EDIT!


#ifndef ROBOCOMPPLANEROS_MESSAGE_SETWIDTHREQUEST_H
#define ROBOCOMPPLANEROS_MESSAGE_SETWIDTHREQUEST_H


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
struct setWidthRequest_
{
  typedef setWidthRequest_<ContainerAllocator> Type;

  setWidthRequest_()
    : width(0)  {
    }
  setWidthRequest_(const ContainerAllocator& _alloc)
    : width(0)  {
  (void)_alloc;
    }



   typedef int32_t _width_type;
  _width_type width;





  typedef boost::shared_ptr< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> const> ConstPtr;

}; // struct setWidthRequest_

typedef ::RoboCompPlaneROS::setWidthRequest_<std::allocator<void> > setWidthRequest;

typedef boost::shared_ptr< ::RoboCompPlaneROS::setWidthRequest > setWidthRequestPtr;
typedef boost::shared_ptr< ::RoboCompPlaneROS::setWidthRequest const> setWidthRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace RoboCompPlaneROS

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_srvs': ['/opt/ros/melodic/share/std_srv/srv'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/msg'], 'RoboCompPlaneROS': ['./src']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a215fc695f899f8f0c98c4780274d2f6";
  }

  static const char* value(const ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa215fc695f899f8fULL;
  static const uint64_t static_value2 = 0x0c98c4780274d2f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RoboCompPlaneROS/setWidthRequest";
  }

  static const char* value(const ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 width\n\
";
  }

  static const char* value(const ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.width);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct setWidthRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::RoboCompPlaneROS::setWidthRequest_<ContainerAllocator>& v)
  {
    s << indent << "width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.width);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOCOMPPLANEROS_MESSAGE_SETWIDTHREQUEST_H
