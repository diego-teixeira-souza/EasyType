#ifndef MEMBER_FUNCTION_OF_HPP
#define MEMBER_FUNCTION_OF_HPP

namespace easytype
{
	
namespace function
{

template<typename T>
class MemberFunctionOf;


template<typename T>
class MemberFunctionOf:public easytype::basis::TypeAlias<T>{};
	
}
	
}

#endif



