#ifndef POINTER_PROPERTY_HPP
#define POINTER_PROPERTY_HPP


namespace easytype
{
	
namespace pointer
{
	
template<typename T>
class PointerProperty;

template<typename T>
class PointerProperty:
public PointerSignature<T>,
public IsNonMemberPointer<T>,
public IsMemberPointer<T>,
public IsPointer<T>{};
	
}	
	
}


#endif


