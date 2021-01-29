#ifndef DOUBLE_REFERENCE_HPP
#define DOUBLE_REFERENCE_HPP


namespace easytype
{
	
namespace qualifier
{

namespace reference
{

namespace signature
{

template<typename>class DoubleReference;

template<typename T>
class DoubleReference<T&&>:public easytype::basis::TypeAlias<T>{};

template<typename T>
class DoubleReference<T&>:public easytype::basis::TypeAlias<T&>{};
// Explicit specialization for Single References

template<typename T>
class DoubleReference:public easytype::basis::TypeAlias<T>{};	
	
}	
	
}
	
}	
	
}


#endif



