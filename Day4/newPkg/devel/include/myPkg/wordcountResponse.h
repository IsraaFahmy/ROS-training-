// Generated by gencpp from file myPkg/wordcountResponse.msg
// DO NOT EDIT!


#ifndef MYPKG_MESSAGE_WORDCOUNTRESPONSE_H
#define MYPKG_MESSAGE_WORDCOUNTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace myPkg
{
template <class ContainerAllocator>
struct wordcountResponse_
{
  typedef wordcountResponse_<ContainerAllocator> Type;

  wordcountResponse_()
    : count(0)  {
    }
  wordcountResponse_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef int32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::myPkg::wordcountResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::myPkg::wordcountResponse_<ContainerAllocator> const> ConstPtr;

}; // struct wordcountResponse_

typedef ::myPkg::wordcountResponse_<std::allocator<void> > wordcountResponse;

typedef boost::shared_ptr< ::myPkg::wordcountResponse > wordcountResponsePtr;
typedef boost::shared_ptr< ::myPkg::wordcountResponse const> wordcountResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::myPkg::wordcountResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::myPkg::wordcountResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::myPkg::wordcountResponse_<ContainerAllocator1> & lhs, const ::myPkg::wordcountResponse_<ContainerAllocator2> & rhs)
{
  return lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::myPkg::wordcountResponse_<ContainerAllocator1> & lhs, const ::myPkg::wordcountResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace myPkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::myPkg::wordcountResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myPkg::wordcountResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPkg::wordcountResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPkg::wordcountResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPkg::wordcountResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPkg::wordcountResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::myPkg::wordcountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "602d642babe509c7c59f497c23e716a9";
  }

  static const char* value(const ::myPkg::wordcountResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x602d642babe509c7ULL;
  static const uint64_t static_value2 = 0xc59f497c23e716a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::myPkg::wordcountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "myPkg/wordcountResponse";
  }

  static const char* value(const ::myPkg::wordcountResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::myPkg::wordcountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"int32 count\n"
"\n"
;
  }

  static const char* value(const ::myPkg::wordcountResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::myPkg::wordcountResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct wordcountResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::myPkg::wordcountResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::myPkg::wordcountResponse_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYPKG_MESSAGE_WORDCOUNTRESPONSE_H
