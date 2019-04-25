#ifndef SINGLE_REFERENCE_HPP
#define SINGLE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace signature
{

template<typename>class SingleReference;	

template<typename T>
class SingleReference<T&>:public easytype::basis::TypeAlias<T>{};

template<typename T>
class SingleReference<T&&>:public easytype::basis::TypeAlias<T&&>{};

template<typename T>
class SingleReference:public easytype::basis::TypeAlias<T>{};
	
}	
	
}	
	
}
	
}

#endif



