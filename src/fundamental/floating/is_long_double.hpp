#ifndef IS_LONG_DOUBLE_HPP
#define IS_LONG_DOUBLE_HPP

namespace easytype
{
	
namespace fundamental
{
	
namespace floating
{
	
// Identifies long double type
template<typename>
class IsLongDouble;

// Specialization
template<>class IsLongDouble<long double>:public easytype::basis::TrueType{};

// Not long double
template<typename T>
class IsLongDouble:public easytype::basis::FalseType{};	
	
}	
	
}
	
}

#endif



