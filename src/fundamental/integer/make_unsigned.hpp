#ifndef MAKE_UNSIGNED_HPP
#define MAKE_UNSIGNED_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{

namespace transform
{

template<typename>class MakeUnsigned;

template<>
class MakeUnsigned<signed char>:
public easytype::basis::TypeAlias<unsigned char>{};

template<>
class MakeUnsigned<signed short int>:
public easytype::basis::TypeAlias<unsigned short int>{};

template<>
class MakeUnsigned<signed int>:
public easytype::basis::TypeAlias<unsigned int>{};

template<>
class MakeUnsigned<signed long int>:
public easytype::basis::TypeAlias<unsigned long int>{};

template<>
class MakeUnsigned<signed long long int>:
public easytype::basis::TypeAlias<unsigned long long int>{};

template<>
class MakeUnsigned<char>:
public easytype::basis::TypeAlias<unsigned char>{};

template<>
class MakeUnsigned<wchar_t>:
public easytype::basis::TypeAlias<unsigned short int>{};

template<typename T>
class MakeUnsigned:
public easytype::basis::TypeAlias<T>{}; 
	
}	
	
}	
	
}	
	
}

#endif