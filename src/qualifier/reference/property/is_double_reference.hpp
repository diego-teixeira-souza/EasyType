#ifndef IS_DOUBLE_REFERENCE_HPP
#define IS_DOUBLE_REFERENCE_HPP

namespace easytype
{
	
namespace qualifier
{

namespace reference
{

namespace property
{

template<typename>class IsDoubleReference;

template<typename T>
class IsDoubleReference:
public easytype::basis::IfThenElse<
	easytype::basis::IsSame<
		typename easytype::qualifier::reference::signature::ReferenceSignature<
			T
		>::DoubleReference::type,
		T
	>::value,
	easytype::basis::FalseType,
	easytype::basis::TrueType
>::result_type{};	
	
}	
	
}	
	
}
	
}

#endif