#ifndef IS_BOOL_HPP
#define IS_BOOL_HPP

namespace easytype
{

namespace fundamental
{
	
namespace boolean
{

// Identifies bool type
template<typename>
class IsBool;

template<>class IsBool<bool>:public easytype::basis::TrueType{};

// Not bool
template<typename T>
class IsBool:public easytype::basis::FalseType{};	
	
}
	
}
	
}

#endif




