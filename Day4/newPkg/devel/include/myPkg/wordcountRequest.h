// Generated by gencpp from file myPkg/wordcountRequest.msg
// DO NOT EDIT!


#ifndef MYPKG_MESSAGE_WORDCOUNTREQUEST_H
#define MYPKG_MESSAGE_WORDCOUNTREQUEST_H


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
struct wordcountRequest_
{
  typedef wordcountRequest_<ContainerAllocator> Type;

  wordcountRequest_()
    : mywords()  {
    }
  wordcountRequest_(const ContainerAllocator& _alloc)
    : mywords(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mywords_type;
  _mywords_type mywords;





  typedef boost::shared_ptr< ::myPkg::wordcountRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::myPkg::wordcountRequest_<ContainerAllocator> const> ConstPtr;

}; // struct wordcountRequest_

typedef ::myPkg::wordcountRequest_<std::allocator<void> > wordcountRequest;

typedef boost::shared_ptr< ::myPkg::wordcountRequest > wordcountRequestPtr;
typedef boost::shared_ptr< ::myPkg::wordcountRequest const> wordcountRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::myPkg::wordcountRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::myPkg::wordcountRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::myPkg::wordcountRequest_<ContainerAllocator1> & lhs, const ::myPkg::wordcountRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mywords == rhs.mywords;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::myPkg::wordcountRequest_<ContainerAllocator1> & lhs, const ::myPkg::wordcountRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace myPkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::myPkg::wordcountRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::myPkg::wordcountRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPkg::wordcountRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::myPkg::wordcountRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPkg::wordcountRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::myPkg::wordcountRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::myPkg::wordcountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "536f99f60f14735a61b512ce326b9c73";
  }

  static const char* value(const ::myPkg::wordcountRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x536f99f60f14735aULL;
  static const uint64_t static_value2 = 0x61b512ce326b9c73ULL;
};

template<class ContainerAllocator>
struct DataType< ::myPkg::wordcountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "myPkg/wordcountRequest";
  }

  static const char* value(const ::myPkg::wordcountRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::myPkg::wordcountRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string mywords \n"
"\n"
;
  }

  static const char* value(const ::myPkg::wordcountRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::myPkg::wordcountRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mywords);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct wordcountRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::myPkg::wordcountRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::myPkg::wordcountRequest_<ContainerAllocator>& v)
  {
    s << indent << "mywords: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mywords);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYPKG_MESSAGE_WORDCOUNTREQUEST_H
