#ifndef IS_ARRAY_HPP
#define IS_ARRAY_HPP

namespace easytype
{
	
namespace array
{

template<typename T>
class IsArray;

template<typename T>
class IsArray:public easytype::basis::IfThenElse<
	IsCompleteArray<T>::value | IsIncompleteArray<T>::value,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}

#endif


