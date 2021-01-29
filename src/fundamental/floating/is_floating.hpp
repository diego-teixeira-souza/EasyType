#ifndef IS_FLOATING_HPP
#define IS_FLOATING_HPP

namespace easytype
{
	
namespace fundamental
{

namespace floating
{

// Identifies when T is floating type
template<typename T>
class IsFloating;

// Implementation, verify if T is some floating type
template<typename T>
class IsFloating:public easytype::basis::IfThenElse<
	IsFloat<T>::value     | 
	IsDouble<T>::value    | 
	IsLongDouble<T>::value,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}	
	
}

#endif




