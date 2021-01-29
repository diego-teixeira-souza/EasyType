#ifndef IS_FUNCTION_HPP
#define IS_FUNCTION_HPP

namespace easytype
{
	
namespace function
{

template<typename T>
class IsFunction;

template<typename T>
class IsFunction:public easytype::basis::IfThenElse<
	IsPointerFunction<T>::value     | 
	IsTypeFunction<T>::value        | 
	IsMemberFunction<T>::value |
	IsEllipsisFunction<T>::value    | 
	IsConstFunction<T>::value       | 
	IsNonMemberFunction<T>::value   |
	IsRValueFunction<T>::value      | 
	IsLValueFunction<T>::value      ,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}

#endif


