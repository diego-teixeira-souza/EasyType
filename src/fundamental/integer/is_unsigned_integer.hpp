#ifndef IS_UNSIGNED_INTEGER_HPP
#define IS_UNSIGNED_INTEGER_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsUnsignedInteger;

template<typename T>
class IsUnsignedInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::UnsignedInteger{};	
	
}	
	
}	
	
}	
	
}


#endif


