#ifndef MAKE_SINGLE_REFERENCE_HPP
#define MAKE_SINGLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{ 	
	
namespace transform
{

template<typename>class MakeSingleReference;

// Explicit specialization for SingleReference
template<typename T>
class MakeSingleReference<T&>:
public easytype::basis::TypeAlias<T&>{};

// Explicit specialization for DoubleReference
template<typename T>
class MakeSingleReference<T&&>:
public easytype::basis::TypeAlias<T&>{};

// When T is not an Single or Double Refeference, make T an single reference
template<typename T>
class MakeSingleReference:
public easytype::basis::TypeAlias<T&>{};

// When T is void
template<>
class MakeSingleReference<void>:
public easytype::basis::TypeAlias<void>{};

	
	
}	
	
}	
	
}	
	
}

#endif