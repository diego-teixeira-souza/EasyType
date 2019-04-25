#ifndef IS_WCHAR_HPP
#define IS_WCHAR_HPP

namespace easytype
{
	
namespace fundamental
{

namespace character
{

// Identifies wchar_t type
template<typename>
class IsWchar;

// Specialization
template<>class IsWchar<wchar_t>:public easytype::basis::TrueType{};

// Not an wchar_t
template<typename T>
class IsWchar:public easytype::basis::FalseType{};	
	
}	
	
}	
	
}


#endif



