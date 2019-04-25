#ifndef LEFT_CONST_HPP
#define LEFT_CONST_HPP

namespace easytype
{

namespace qualifier
{

namespace constness
{

namespace signature
{

template<typename>class LeftConst;

template<typename T>
class LeftConst<const T***const>:public ConstOf<const T***const>{};



/*
template<typename T>class LeftConst:
public ConstOf< 
	typename easytype::qualifier::ConstVolatileSignature<
		T
	>::LeftConstOf::result_type
>{};
*/

}
	
}	
	
}	
	
}

#endif