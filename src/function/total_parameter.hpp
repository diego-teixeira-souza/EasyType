#ifndef TOTAL_PARAMETER_HPP
#define TOTAL_PARAMETER_HPP

namespace easytype
{
	
namespace function
{

template<int>
class TotalParameter;

template<int total>
class TotalParameter:public easytype::basis::ConstInteger< total >{};	
	
}	
	
}

#endif




