#ifndef IS_EXTENDED_INTEGER_HPP
#define IS_EXTENDED_INTEGER_HPP

namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsExtendedInteger;

template<typename T>
class IsExtendedInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::LongLongInteger{};	
	
}
	
}	
	
}	
	
}


#endif


