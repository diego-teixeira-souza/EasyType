#ifndef IS_INTEGER_HPP
#define IS_INTEGER_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{ 

namespace property
{

template<typename>
class IsInteger;

template<typename T>
class IsInteger:
public easytype::basis::IfThenElse<
	IsTinyInteger<T>::value     ||
	IsSmallInteger<T>::value    ||
	IsMediumInteger<T>::value   ||
	IsBigInteger<T>::value      ||
	IsExtendedInteger<T>::value ,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}

}	
	
}	
	
}
#endif



