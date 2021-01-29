#ifndef IS_CHAR32_HPP
#define IS_CHAR32_HPP

namespace easytype
{
	
namespace fundamental
{

namespace character
{

// IsChar32	
template<typename>
class IsChar32;

// Specialization
template<>class IsChar32<char32_t>:public easytype::basis::TrueType{};

// Not char32_t
template<typename T>
class IsChar32:public easytype::basis::FalseType{};

	
}	
	
}	
	
}


#endif




