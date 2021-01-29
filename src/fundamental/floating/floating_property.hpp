#ifndef FLOATING_PROPERTY_HPP
#define FLOATING_PROPERTY_HPP


namespace easytype
{
	
namespace fundamental
{

namespace floating
{

template<typename T>
class FloatingProperty;

template<typename T>
class FloatingProperty:
public IsFloat<T>,
public IsDouble<T>,
public IsLongDouble<T>,
public IsFloating<T>{};	
	
}	
	
}	
	
}


#endif



