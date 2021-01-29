#ifndef LEFT_VOLATILE_OF_HPP
#define LEFT_VOLATILE_OF_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace signature
{
	
template<typename>
class LeftVolatileOf;

template<typename T>
class LeftVolatileOf:public easytype::basis::TypeAlias<T>{};	
	
}

}	
	
}	
	
}

#endif