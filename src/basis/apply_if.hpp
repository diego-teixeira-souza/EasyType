#ifndef APPLY_IF_HPP
#define APPLY_IF_HPP


namespace easytype
{
	
namespace basis
{

template<bool,typename,template<typename>typename>
class ApplyIf;

template<typename T,template<typename>typename Predicate>
class ApplyIf<true,T,Predicate >:
public TypeAlias< typename Predicate<T>::result_type >{};

template<bool,typename T,template<typename>typename>
class ApplyIf:
	public TypeAlias<T>{};	
	
}	
	
}


#endif


