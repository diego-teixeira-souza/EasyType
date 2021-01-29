#ifndef IF_THEN_ELSE_HPP
#define IF_THEN_ELSE_HPP


namespace easytype
{

namespace basis
{

template<bool,typename,typename>
class IfThenElse;

template<typename T1,typename T2>
class IfThenElse<true, T1, T2>:public TypeAlias<T1>{};

template<typename T1,typename T2>
class IfThenElse<false, T1, T2>:public TypeAlias<T2>{};

template<bool expression,typename T>
class IfThenElse<expression, T, T>:public TypeAlias<T>{};

}	
	
}

#endif


