#ifndef IS_EMPTY_HPP
#define IS_EMPTY_HPP

namespace easytype
{

namespace fundamental
{

namespace empty
{

// Identifies when T is an empty type or absence of value
template<typename T>
class IsEmpty;

template<typename T>
class IsEmpty:public easytype::basis::IfThenElse<
	IsVoid<T>::value | 
	IsNull<T>::value , 
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}	
	
}

#endif




