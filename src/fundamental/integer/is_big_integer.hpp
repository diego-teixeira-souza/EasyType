#ifndef IS_BIG_INTEGER_HPP
#define IS_BIG_INTEGER_HPP

namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace property
{

template<typename>
class IsBigInteger;

template<typename T>
class IsBigInteger:
public easytype::fundamental::integer::signature::IntegerSignature<T>::LongInteger{};	
	
}

}	
	
}
	
}

#endif



