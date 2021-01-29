#ifndef BOOLEAN_TYPE_HPP
#define BOOLEAN_TYPE_HPP


namespace easytype
{
	

namespace basis
{
	
template<int>
class BooleanType;

class TrueType;
class FalseType;
class NullType;

template<>class BooleanType<1>:public TrueType{};
template<>class BooleanType<0>:public FalseType{};
template<>class BooleanType<-1>:public NullType{};

}	
	
}


#endif



