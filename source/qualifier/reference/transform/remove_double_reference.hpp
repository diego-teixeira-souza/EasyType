#ifndef REMOVE_DOUBLE_REFERENCE_HPP
#define REMOVE_DOUBLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace transform
{

template<typename>class RemoveDoubleReference;

// When T is an double reference
template<typename T>
class RemoveDoubleReference<T&&>:
public easytype::basis::TypeAlias<T>{};

// When T is not an double reference
template<typename T>
class RemoveDoubleReference:
public easytype::basis::TypeAlias<T>{};	
	
}	
	
}	
	
}	
	
}

#endif