#ifndef MAKE_DOUBLE_REFERENCE_HPP
#define MAKE_DOUBLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace transform
{
/*
 * This class receive an Type
*/
template<typename T>class MakeDoubleReference;

// Explicit specialization for single reference
template<typename T>
class MakeDoubleReference<T&>:
public easytype::basis::TypeAlias<T&&>{};

// Explicit specialization for double reference
template<typename T>
class MakeDoubleReference<T&&>:
public easytype::basis::TypeAlias<T&&>{};

// When is not an reference, make T an Double Reference
template<typename T>
class MakeDoubleReference:
public easytype::basis::TypeAlias<T&&>{};

// When T is void
template<>
class MakeDoubleReference<void>:
public easytype::basis::TypeAlias<void>{};


	
}

}
	
}	
	
}

#endif