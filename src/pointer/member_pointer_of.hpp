#ifndef MEMBER_POINTER_OF_HPP
#define MEMBER_POINTER_OF_HPP

namespace easytype
{
	
namespace pointer
{

template<typename T>
class MemberPointerOf;	
	
template<typename T>
class MemberPointerOf:public easytype::basis::TypeAlias<T>{};	
	
}	
	
}

#endif


