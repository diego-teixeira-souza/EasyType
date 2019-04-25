#ifndef CONST_OF_HPP
#define CONST_OF_HPP

namespace easytype
{

namespace qualifier
{

namespace constness
{
	
namespace signature
{

template<typename>class ConstOf;

template<typename T>
class ConstOf:
public easytype::basis::TypeAlias<T>{};	
	
	
}
	
}	
	
}	
	
}

#endif