#ifndef IS_SAME_HPP
#define IS_SAME_HPP


namespace easytype
{
	
namespace basis
{

template<typename,typename>
class IsSame;

template<typename A>class IsSame<A,A>:public TrueType{};	
template<typename A,typename B>class IsSame:public FalseType{};
	
}	
	
}


#endif


