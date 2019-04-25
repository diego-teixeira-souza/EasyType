#ifndef IS_BOOLEAN_HPP
#define IS_BOOLEAN_HPP

namespace easytype
{

namespace fundamental
{

namespace boolean
{

// Identifies when T is an boolean type
template<typename T>
class IsBoolean;

template<typename T>
class IsBoolean:public easytype::basis::IfThenElse<
	IsBool<T>::value , 
	easytype::basis::TrueType , easytype::basis::FalseType
>::result_type{};	
	
}	
	
}	
	
}

#endif




