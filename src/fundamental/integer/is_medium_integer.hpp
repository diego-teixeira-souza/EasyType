#ifndef IS_MEDIUM_INTEGER_HPP
#define IS_MEDIUM_INTEGER_HPP

namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsMediumInteger;

template<typename T>
class IsMediumInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::DefaultInteger{};	
	
}
	
}	
	
}	
	
}


#endif


