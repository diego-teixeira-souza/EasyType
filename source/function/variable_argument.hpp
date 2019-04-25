#ifndef VARIABLE_ARGUMENT_HPP
#define VARIABLE_ARGUMENT_HPP

namespace easytype
{

namespace function
{

template<typename T>
class VariableArgument;

template<typename T>
class VariableArgument:public easytype::basis::TypeAlias<T>{};
	
}	
	
}

#endif



