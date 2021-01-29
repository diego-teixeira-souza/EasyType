#ifndef IS_UNSIGNED_HPP
#define IS_UNSIGNED_HPP

namespace easytype
{
	
namespace fundamental
{

template<typename>
class IsUnsigned;

template<typename T>
class IsUnsigned: public easytype::basis::IfThenElse<
	IsSigned<T>::value , 
	easytype::basis::FalseType, easytype::basis::TrueType
>::result_type{};

}
	
}

#endif



