#ifndef MAKE_DEFAULT_HPP
#define MAKE_DEFAULT_HPP

namespace easytype
{

namespace fundamental
{

namespace integer
{

namespace transform
{

template<typename>class MakeDefault;

// Signeds
template<>
class MakeDefault<signed char>:
public easytype:basis::TypeAlias<signed int>{};

template<>
class MakeDefault<signed short int>:
public easytype::basis::TypeAlias<signed int>{};

template<>
class MakeDefault<signed long int>:
public easytype::basis::TypeAlias<signed int>{};

template<>
class MakeDefault<signed long long int>:
public easytype::basis::TypeAlias<signed int>{};

// Unsigneds
template<>
class MakeDefault<unsigned char>:
public
	
}	
	
}	
	
}
	
}

#endif