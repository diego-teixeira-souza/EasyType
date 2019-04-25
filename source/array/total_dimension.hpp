#ifndef TOTAL_DIMENSION_HPP
#define TOTAL_DIMENSION_HPP

namespace easytype
{

namespace array
{

template<int n>
class TotalDimension;

template<int n>
class TotalDimension:public easytype::basis::ConstInteger<n>{};	
	
}	
	
}

#endif



