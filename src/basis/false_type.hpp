#ifndef FALSE_TYPE_HPP
#define FALSE_TYPE_HPP

namespace easytype
{

namespace basis
{

class FalseType;

template<>
const char ConstString<FalseType>::string[] = {"false"};

class FalseType: public ConstInteger<0>, public ConstString<FalseType>{};	
	
}	
	
}

#endif