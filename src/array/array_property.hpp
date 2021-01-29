
#ifndef ARRAY_PROPERTY_HPP
#define ARRAY_PROPERTY_HPP


namespace easytype
{
	
namespace array
{

template<typename T>
class ArrayProperty;

template<typename T>
class ArrayProperty:
public ArraySignature<T>,
public IsCompleteArray<T>,
public IsIncompleteArray<T>,
public IsArray<T>{};
	
}	
	
}


#endif

