#ifndef ARRAY_OF_HPP
#define ARRAY_OF_HPP

namespace easytype
{

namespace array
{

template<typename>
class ArrayOf;

template<typename T>
class ArrayOf:public easytype::basis::TypeAlias<T>{};

}	
	
}

#endif



