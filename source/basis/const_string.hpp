#ifndef CONST_STRING_HPP
#define CONST_STRING_HPP

namespace easytype
{
	
namespace basis
{
	
template<typename>class ConstString;

// ConstString
// Associate an type with an string
template<typename T>class ConstString
{
	public:
		static const char string[];
};

// default string value
template<typename T>
const char ConstString<T>::string[]={"value not defined"};
	
}	
	
}

#endif

