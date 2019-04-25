#ifndef IS_FUNDAMENTAL_HPP
#define IS_FUNDAMENTAL_HPP

namespace easytype
{
	
namespace fundamental
{

template<typename T>
class IsFundamental;

template<typename T>
class IsFundamental:public easytype::basis::IfThenElse<
	easytype::fundamental::integer::IsInteger<T>::value     |
	easytype::fundamental::character::IsCharacter<T>::value |
	easytype::fundamental::floating::IsFloating<T>::value   |
	easytype::fundamental::boolean::IsBoolean<T>::value     |
	easytype::fundamental::empty::IsEmpty<T>::value         ,
	easytype::basis::TrueType, easytype::basis::FalseType
>::result_type{};	
	
}	
	
}
#endif
