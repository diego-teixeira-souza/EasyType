#ifndef IS_VOID_HPP
#define IS_VOID_HPP

namespace easytype
{

namespace fundamental
{
	
namespace empty
{
	
// Identifies void type
template<typename>
class IsVoid;

template<>class IsVoid<void>:public easytype::basis::TrueType{};

// Not an void
template<typename T>
class IsVoid:public easytype::basis::FalseType{};	
	
}	
	
}	
	
}

#endif




