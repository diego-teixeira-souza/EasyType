#ifndef FUNCTION_PROPERTY_HPP
#define FUNCTION_PROPERTY_HPP


namespace easytype
{
	
namespace function
{

template<typename T>
class FunctionProperty;

template<typename T>
class FunctionProperty:
public FunctionSignature<T>,

public IsPointerFunction<T>,
public IsTypeFunction<T>,
public IsEllipsisFunction<T>,

public IsNonMemberFunction<T>,

public IsMemberFunction<T>,
public IsLValueFunction<T>,
public IsRValueFunction<T>,
public IsConstFunction<T>,

public IsFunction<T>{};
	
}	
	
}


#endif
