#ifndef IS_DOUBLE_HPP
#define IS_DOUBLE_HPP

namespace easytype
{
	
namespace fundamental
{
	
namespace floating
{

// Identifies double type
template<typename>
class IsDouble;

// Specialization
template<>class IsDouble<double>:public easytype::basis::TrueType{};

// Not and double
template<typename T>
class IsDouble:public easytype::basis::FalseType{};	
	
}	
	
}	
	
}

#endif




