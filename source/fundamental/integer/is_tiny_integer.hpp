#ifndef IS_TINY_INTEGER_HPP
#define IS_TINY_INTEGER_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsTinyInteger;

template<typename T>
class IsTinyInteger: 
public easytype::fundamental::integer::signature::IntegerSignature<T>::TinyInteger{};	
	
}	
	
}	
	
}	
	
}

#endif