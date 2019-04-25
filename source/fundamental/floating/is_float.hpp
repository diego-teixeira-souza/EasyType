#ifndef IS_FLOAT_HPP
#define IS_FLOAT_HPP

namespace easytype
{

namespace fundamental
{
	
namespace floating
{

// Identifies float type
template<typename>
class IsFloat;

// Specialization
template<>class IsFloat<float>:public easytype::basis::TrueType{};

// Not float
template<typename T>
class IsFloat:public easytype::basis::FalseType{};	
	
}	
	
}	
	
}


#endif


