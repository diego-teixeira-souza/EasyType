#ifndef NULL_TYPE_HPP
#define NULL_TYPE_HPP

namespace easytype
{

namespace basis
{

class NullType;

template<>
const char ConstString<NullType>::string[] = {"null"};

class NullType: public ConstInteger<-1>, public ConstString<NullType>{};	
	
}	
	
}

#endif