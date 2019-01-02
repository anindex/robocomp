// Generated by gencpp from file RoboCompPlaneROS/addPointResponse.msg
// DO NOT EDIT!


#ifndef ROBOCOMPPLANEROS_MESSAGE_ADDPOINTRESPONSE_H
#define ROBOCOMPPLANEROS_MESSAGE_ADDPOINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <RoboCompPlaneROS/PointXY.h>

namespace RoboCompPlaneROS
{
template <class ContainerAllocator>
struct addPointResponse_
{
  typedef addPointResponse_<ContainerAllocator> Type;

  addPointResponse_()
    : pts()  {
    }
  addPointResponse_(const ContainerAllocator& _alloc)
    : pts(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::RoboCompPlaneROS::PointXY_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::RoboCompPlaneROS::PointXY_<ContainerAllocator> >::other >  _pts_type;
  _pts_type pts;





  typedef boost::shared_ptr< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct addPointResponse_

typedef ::RoboCompPlaneROS::addPointResponse_<std::allocator<void> > addPointResponse;

typedef boost::shared_ptr< ::RoboCompPlaneROS::addPointResponse > addPointResponsePtr;
typedef boost::shared_ptr< ::RoboCompPlaneROS::addPointResponse const> addPointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3c1bb42132eaeff2f180582b2996933";
  }

  static const char* value(const ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3c1bb42132eaeffULL;
  static const uint64_t static_value2 = 0x2f180582b2996933ULL;
};

template<class ContainerAllocator>
struct DataType< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RoboCompPlaneROS/addPointResponse";
  }

  static const char* value(const ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "PointXY[] pts\n\
\n\
\n\
================================================================================\n\
MSG: RoboCompPlaneROS/PointXY\n\
int32 x\n\
int32 y\n\
";
  }

  static const char* value(const ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addPointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::RoboCompPlaneROS::addPointResponse_<ContainerAllocator>& v)
  {
    s << indent << "pts[]" << std::endl;
    for (size_t i = 0; i < v.pts.size(); ++i)
    {
      s << indent << "  pts[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::RoboCompPlaneROS::PointXY_<ContainerAllocator> >::stream(s, indent + "    ", v.pts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOCOMPPLANEROS_MESSAGE_ADDPOINTRESPONSE_H
