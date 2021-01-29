#ifndef RIGHT_VOLATILE_OF_HPP
#define RIGHT_VOLATILE_OF_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace signature
{

template<typename>
class RightVolatileOf;

template<typename T>
class RightVolatileOf:public easytype::basis::TypeAlias<T>{};	
	
}	
	
}	
	
}	
	
}

#endif