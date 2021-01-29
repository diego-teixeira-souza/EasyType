#ifndef RETURN_TYPE_HPP
#define RETURN_TYPE_HPP

namespace easytype
{
	
namespace function
{

template<typename>
class ReturnType;

template<typename T>
class ReturnType:public easytype::basis::TypeAlias<T>{};
	
}	
	
}

#endif


