#ifndef IS_SIGNED_INTEGER_HPP
#define IS_SIGNED_INTEGER_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsSignedInteger;

template<typename T>
class IsSignedInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::SignedInteger{};	
	
}	
	
}	
	
}	
	
}


#endif


