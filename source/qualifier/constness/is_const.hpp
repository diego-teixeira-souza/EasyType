#ifndef IS_CONST_HPP
#define IS_CONST_HPP

namespace easytype
{
	
namespace qualifier
{

template<typename>
class IsConst;

template<typename T>
class IsConst:
public easytype::basis::IfThenElse<
	IsLeftConst<T>::value | 
	IsRightConst<T>::value,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}

#endif