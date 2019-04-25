#ifndef MAKE_SMALL_HPP
#define MAKE_SMALL_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{

namespace transform
{

template<typename>class MakeSmall;

// Signeds
template<>
class MakeSmall<signed char>:
public easytype::basis::TypeAlias<signed short int>{};

template<>
class MakeSmall<signed int>:
public easytype::basis::TypeAlias<signed short int>{};

template<>
class MakeSmall<signed long int>:
public easytype::basis::TypeAlias<signed short int>{};

template<>
class MakeSmall<signed long long int>:
public easytype::basis::TypeAlias<signed short int>{};

// Unsigneds
template<>
class MakeSmall<unsigned char>:
public easytype::basis::TypeAlias<unsigned short int>{};

template<>
class MakeSmall<unsigned int>:
public easytype::basis::TypeAlias<unsigned short int>{};

template<>
class MakeSmall<unsigned long int>:
public easytype::basis::TypeAlias<unsigned short int>{};

template<>
class MakeSmall<unsigned long long int>:
public easytype::basis::TypeAlias<unsigned short int>{};

// Not an integer, or char and wchar_t
template<typename T>
class MakeSmall:
public easytype::basis::TypeAlias<T>{};
	
}	
	
}	
	
}	
	
}

#endif