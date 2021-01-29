#ifndef SIZE_OF_HPP
#define SIZE_OF_HPP


namespace easytype
{
	
namespace basis
{

template<typename>
class SizeOf;

template<>class SizeOf<NullType>:public ConstInteger<0>{};
template<>class SizeOf<void>:public ConstInteger<0>{};

template<typename T>class SizeOf:public ConstInteger< sizeof(T)>{};
	
}	
	
}


#endif


