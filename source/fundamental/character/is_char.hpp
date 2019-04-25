#ifndef IS_CHAR_HPP
#define IS_CHAR_HPP

namespace easytype
{

namespace fundamental
{

namespace character
{

// Identifies normal char
template<typename>
class IsChar;

// Specialization
template<>class IsChar<char>:public easytype::basis::TrueType{};	

// Not an char
template<typename T>
class IsChar:public easytype::basis::FalseType{};
	
}	
	
}

}

#endif



