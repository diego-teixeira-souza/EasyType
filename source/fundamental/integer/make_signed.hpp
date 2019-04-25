#ifndef MAKE_SIGNED_HPP
#define MAKE_SIGNED_HPP


namespace easytype
{
	
namespace fundamental
{
	
namespace integer
{

namespace transform
{

template<typename>class MakeSigned;	

template<>
class MakeSigned<unsigned char>:
public easytype::basis::TypeAlias<signed char>{};

template<>
class MakeSigned<unsigned short int>:
public easytype::basis::TypeAlias<signed short int>{};

template<>
class MakeSigned<unsigned int>:
public easytype::basis::TypeAlias<signed int>{};

template<>
class MakeSigned<unsigned long int>:
public easytype::basis::TypeAlias<signed long int>{};

template<>
class MakeSigned<unsigned long long int>:
public easytype::basis::TypeAlias<signed long long int>{};

template<>
class MakeSigned<char>:
public easytype::basis::TypeAlias<signed char>{};

template<>
class MakeSigned<wchar_t>:
public easytype::basis::TypeAlias<signed wchar_t>{};

template<typename T>
class MakeSigned:
public easytype::basis::TypeAlias<T>{};

}	
	
}	
	
}	
	
}


#endif


