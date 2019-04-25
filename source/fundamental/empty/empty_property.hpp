#ifndef EMPTY_PROPERTY_HPP
#define EMPTY_PROPERTY_HPP


namespace easytype
{
	
namespace fundamental
{

namespace empty
{

template<typename T>
class EmptyProperty;

template<typename T>
class EmptyProperty:
public IsVoid<T>,
public IsNull<T>,
public IsEmpty<T>{};	
	
}	
	
}	
	
}


#endif
