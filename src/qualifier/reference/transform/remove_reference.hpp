#ifndef REMOVE_REFERENCE_HPP
#define REMOVE_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace transform
{

template<typename>class RemoveReference;

template<typename T>	
class RemoveReference:
public easytype::basis::TypeAlias<
	typename RemoveSingleReference<
		typename RemoveDoubleReference<
			T
		>::result_type
	>::result_type
>{};
	
}	
	
}	
	
}	
	
}

#endif