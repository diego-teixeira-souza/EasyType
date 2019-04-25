#ifndef INTEGER_PROPERTY_HPP
#define INTEGER_PROPERTY_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IntegerProperty;

template<typename T>
class IntegerProperty:
public IsTinyInteger<T>,
public IsSmallInteger<T>,
public IsMediumInteger<T>,
public IsBigInteger<T>,
public IsExtendedInteger<T>,
public IsSignedInteger<T>,
public IsUnsignedInteger<T>,
public IsInteger<T>{};	
	
}
	
}	
	
}	
	
}


#endif
