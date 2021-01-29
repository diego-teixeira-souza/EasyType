#ifndef POINTER_LEVEL_HPP
#define POINTER_LEVEL_HPP

namespace easytype
{

namespace pointer
{

template<int n>
class PointerLevel;

template<int n>
class PointerLevel:public easytype::basis::ConstInteger<n>{};	
	
}	
	
}

#endif

