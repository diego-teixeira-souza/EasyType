#ifndef IS_DIFERENT_HPP
#define IS_DIFERENT_HPP


namespace easytype
{
	
namespace basis
{

template<typename,typename>
class IsDiferent;

template<typename A,typename B>class IsDiferent:public TrueType{};
template<typename A>class IsDiferent<A,A>:public FalseType{};	
	
}	
	
}


#endif


