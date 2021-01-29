#ifndef MAKE_TINY_HPP
#define MAKE_TINY_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{

namespace transform
{

template<typename>class MakeTiny;

// Signeds
template<>
class MakeTiny<signed short int>:
public easytype::basis::TypeAlias<signed char>{};

template<>
class MakeTiny<signed int>:
public easytype::basis::TypeAlias<signed char>{};

template<>
class MakeTiny<signed long int>:
public easytype::basis::TypeAlias<signed char>{};

template<>
class MakeTiny<signed long long int>:
public easytype::basis::TypeAlias<signed char>{};

// Unsigneds
template<>
class MakeTiny<unsigned short int>:
public easytype::basis::TypeAlias<unsigned char>{};

template<>
class MakeTiny<unsigned int>:
public easytype::basis::TypeAlias<unsigned char>{};

template<>
class MakeTiny<unsigned long int>:
public easytype::basis::TypeAlias<unsigned char>{};

template<>
class MakeTiny<unsigned long long int>:
public easytype::basis::TypeAlias<unsigned char>{};

// Not an integer or char or wchar
template<typename T>
class MakeTiny:public easytype::basis::TypeAlias<T>{};
	
}	
	
}	
	
}	
	
}

#endif