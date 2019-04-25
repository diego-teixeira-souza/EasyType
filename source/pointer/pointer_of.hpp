#ifndef POINTER_OF_HPP
#define POINTER_OF_HPP


namespace easytype
{
	
namespace pointer
{

template<typename T>
class PointerOf;

template<typename T>
class PointerOf:public easytype::basis::TypeAlias<T>{};	
	
}	
	
}


#endif