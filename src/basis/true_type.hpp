#ifndef TRUE_TYPE_HPP
#define TRUE_TYPE_HPP

namespace easytype
{

namespace basis
{

class TrueType;

template<>
const char ConstString<TrueType>::string[] = {"true"};

class TrueType: public ConstInteger<1>, public ConstString<TrueType>{};	
	
}	
	
}

#endif