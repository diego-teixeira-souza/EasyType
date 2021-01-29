#ifndef REMOVE_SINGLE_REFERENCE_HPP
#define REMOVE_SINGLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace transform
{

template<typename>class RemoveSingleReference;

// When T is an single reference
template<typename T>	
class RemoveSingleReference<T&>:
public easytype::basis::TypeAlias<T>{};

// When T is not an single reference
template<typename T>
class RemoveSingleReference:
public easytype::basis::TypeAlias<T>{};
	
}	
	
}	
	
}	
	
}

#endif