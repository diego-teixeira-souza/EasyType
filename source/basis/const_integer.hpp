#ifndef CONST_INTEGER_HPP
#define CONST_INTEGER_HPP


namespace easytype
{

namespace basis
{
	

template<int>
class ConstInteger;

// ConstInteger
template<int N>
class ConstInteger
{
	public:
		enum
		{
			value         = N,
			integer_value = N,
			boolean_value = (N <=0) ? false: true
		};
};
	
}	
	
}

#endif




