#ifndef IS_NULL_HPP
#define IS_NULL_HPP

namespace easytype
{
	
namespace fundamental
{
	
namespace empty
{

// Identifies library implementation of Null type	
template<typename>
class IsNull;

template<>class IsNull<easytype::basis::NullType>:public easytype::basis::TrueType{};

// Not null
template<typename T>
class IsNull:public easytype::basis::FalseType{};	
	
}	
	
}	
	
}
#endif




