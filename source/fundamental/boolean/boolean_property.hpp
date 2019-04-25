#ifndef BOOLEAN_PROPERTY_HPP
#define BOOLEAN_PROPERTY_HPP


namespace easytype
{

namespace fundamental
{

namespace boolean
{

template<typename T>
class BooleanProperty;

template<typename T>
class BooleanProperty:
public IsBool<T>,
public IsBoolean<T>{};	
	
}	
	
}	
	
}


#endif
