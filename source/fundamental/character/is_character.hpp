#ifndef IS_CHARACTER_HPP
#define IS_CHARACTER_HPP

namespace easytype
{

namespace fundamental
{

namespace character
{

// IsCharacter
template<typename T>
class IsCharacter;

// Implementation, verifiy if T is some type of character
template<typename T>
class IsCharacter:public easytype::basis::IfThenElse<
	IsChar<T>::value   |
	IsWchar<T>::value  |
	IsChar16<T>::value |
	IsChar32<T>::value ,
	easytype::basis::TrueType , easytype::basis::FalseType
>::result_type{};

}

}

}
#endif



