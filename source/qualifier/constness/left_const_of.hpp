#ifndef LEFT_CONST_OF_HPP
#define LEFT_CONST_OF_HPP


namespace easytype
{
	
namespace qualifier
{

// Left const of
template<typename>
class LeftConstOf;

template<typename T>
class LeftConstOf:public easytype::basis::TypeAlias<T>{};	
	
}	
	
}


#endif


