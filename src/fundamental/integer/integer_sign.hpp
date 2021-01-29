#ifndef INTEGER_SIGN_HPP
#define INTEGER_SIGN_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace signature
{

template<int,int>class IntegerSign;
template<int>class SignedInteger;
template<int>class UnsignedInteger;

template<int n>class SignedInteger:public easytype::basis::BooleanType<n>{};
template<int n>class UnsignedInteger:public easytype::basis::BooleanType<n>{};

template<int s,int u>class IntegerSign:public SignedInteger<s>,public UnsignedInteger<u>{};
	
}	
	
}	
	
}	
	
}


#endif


