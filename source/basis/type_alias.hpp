#ifndef TYPE_ALIAS_HPP
#define TYPE_ALIAS_HPP


namespace easytype
{
	
namespace basis
{

template<typename>
class TypeAlias;

template<typename T>
class TypeAlias
{
	public:
	
		typedef T type;
		typedef T result_type;
};
	
	
}	
	
}

#endif




