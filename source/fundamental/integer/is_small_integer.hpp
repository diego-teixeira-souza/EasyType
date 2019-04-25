#ifndef IS_SMALL_INTEGER_HPP
#define IS_SMALL_INTEGER_HPP

namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsSmallInteger;

template<typename T>
class IsSmallInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::ShortInteger{};
	
}
	
}	
	
}	
	
}

#endif


