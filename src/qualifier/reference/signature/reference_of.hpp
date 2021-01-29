#ifndef REFERENCE_OF_HPP
#define REFERENCE_OF_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{
	
namespace signature
{

// Reference Of
template<typename>class ReferenceOf;

template<typename T>
class ReferenceOf:public easytype::basis::TypeAlias<T>{};

}
	
}	
	
}
	
}

#endif