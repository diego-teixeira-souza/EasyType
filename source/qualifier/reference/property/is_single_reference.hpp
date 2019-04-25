#ifndef IS_SINGLE_REFERENCE_HPP
#define IS_SINGLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{
	
namespace reference
{

namespace property
{

template<typename>class IsSingleReference;

template<typename T>
class IsSingleReference:
public easytype::basis::IfThenElse<
	easytype::basis::IsSame<
		typename easytype::qualifier::reference::signature::ReferenceSignature<
			T
		>::SingleReference::type,
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