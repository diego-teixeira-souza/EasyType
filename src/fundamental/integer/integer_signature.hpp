#ifndef INTEGER_SIGNATURE_HPP
#define INTEGER_SIGNATURE_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace signature
{


template<typename>
class IntegerSignature;

// Signed Integers
template<>class IntegerSignature<signed char>:
public IntegerSign<1,0>,
public IntegerRangeModifier<1,0,0,0,0>{};

template<>class IntegerSignature< signed short int >:
public IntegerSign<1,0>,
public IntegerRangeModifier<0,1,0,0,0>{};

template<>class IntegerSignature< signed int >:
public IntegerSign<1,0>,
public IntegerRangeModifier<0,0,1,0,0>{};

template<>class IntegerSignature< signed long int >:
public IntegerSign<1,0>,
public IntegerRangeModifier<0,0,0,1,0>{};

template<>class IntegerSignature< signed long long int >:
public IntegerSign<1,0>,
public IntegerRangeModifier<0,0,0,0,1>{};

// Unsigned Integers
template<>class IntegerSignature<unsigned char>:
public IntegerSign<0,1>,
public IntegerRangeModifier<1,0,0,0,0>{};

template<>class IntegerSignature< unsigned short int >:
public IntegerSign<0,1>,
public IntegerRangeModifier<0,1,0,0,0>{};

template<>class IntegerSignature< unsigned int >:
public IntegerSign<0,1>,
public IntegerRangeModifier<0,0,1,0,0>{};

template<>class IntegerSignature< unsigned long int>:
public IntegerSign<0,1>,
public IntegerRangeModifier<0,0,0,1,0>{};

template<>class IntegerSignature< unsigned long long int>:
public IntegerSign<0,1>,
public IntegerRangeModifier<0,0,0,0,1>{};

// Not an integer
template<typename T>
class IntegerSignature:
public IntegerSign<0,0>,
public IntegerRangeModifier<0,0,0,0,0>,
public easytype::basis::TypeAlias<T>{};

}	
	
}	
	
}	
	
}


#endif


