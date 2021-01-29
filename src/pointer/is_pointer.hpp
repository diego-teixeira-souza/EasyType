#ifndef IS_POINTER_HPP
#define IS_POINTER_HPP

namespace easytype
{

namespace pointer
{

// Identifies when T is an pointer
template<typename T>
class IsPointer;

template<typename T>
class IsPointer:
public easytype::basis::IfThenElse<
	IsNonMemberPointer<T>::value | IsMemberPointer<T>::value ,
	easytype::basis::TrueType , easytype::basis::FalseType
>::type{};	
	
}	
	
}

#endif





