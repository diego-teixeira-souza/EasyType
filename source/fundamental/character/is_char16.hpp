#ifndef IS_CHAR16_HPP
#define IS_CHAR16_HPP

namespace easytype
{

namespace fundamental
{
	
namespace character
{

// Identifies C++ 11 version of char16_t type
template<typename>
class IsChar16;

// Specialization
template<>class IsChar16<char16_t>:public easytype::basis::TrueType{};

// Not and char16_t
template<typename T>
class IsChar16:public easytype::basis::FalseType{};
	
}
	
}	
	
}


#endif





