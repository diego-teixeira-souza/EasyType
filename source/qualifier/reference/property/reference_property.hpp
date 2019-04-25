#ifndef REFERENCE_PROPERTY_HPP
#define REFERENCE_PROPERTY_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace property
{

template<typename>class ReferenceProperty;

template<typename T>
class ReferenceProperty:
public IsSingleReference<T>,
public IsDoubleReference<T>,
public IsReference<T>{};
	
}	
	
}	
	
}	
	
}

#endif