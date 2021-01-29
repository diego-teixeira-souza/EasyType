#ifndef IS_REFERENCE_HPP
#define IS_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace property
{

template<typename>class IsReference;

template<typename T>
class IsReference:
public easytype::basis::IfThenElse<
	IsSingleReference<T>::boolean_value |
	IsDoubleReference<T>::boolean_value ,
	easytype::basis::TrueType,
	easytype::basis::FalseType
>::result_type{};	
	
}	
	
}	
	
}	
	
}

#endif