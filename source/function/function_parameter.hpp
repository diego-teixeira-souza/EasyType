#ifndef FUNCTION_PARAMETER_HPP
#define FUNCTION_PARAMETER_HPP


namespace easytype
{
	
namespace function
{

template<typename,typename,typename,typename,typename,
		 typename,typename,typename,typename,typename,
		 typename,typename,typename,typename,typename
>class FunctionParameter;

template<typename>class Parameter_1;
template<typename>class Parameter_2;
template<typename>class Parameter_3;
template<typename>class Parameter_4;
template<typename>class Parameter_5;
template<typename>class Parameter_6;
template<typename>class Parameter_7;
template<typename>class Parameter_8;
template<typename>class Parameter_9;
template<typename>class Parameter_10;
template<typename>class Parameter_11;
template<typename>class Parameter_12;
template<typename>class Parameter_13;
template<typename>class Parameter_14;
template<typename>class Parameter_15;


template<typename T>class Parameter_1:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_2:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_3:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_4:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_5:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_6:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_7:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_8:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_9:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_10:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_11:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_12:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_13:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_14:public easytype::basis::TypeAlias<T>{};
template<typename T>class Parameter_15:public easytype::basis::TypeAlias<T>{};

template<
typename p1=easytype::basis::NullType,typename p2=easytype::basis::NullType,typename p3=easytype::basis::NullType,typename p4=easytype::basis::NullType,typename p5=easytype::basis::NullType,
typename p6=easytype::basis::NullType,typename p7=easytype::basis::NullType,typename p8=easytype::basis::NullType,typename p9=easytype::basis::NullType,typename p10=easytype::basis::NullType,
typename p11=easytype::basis::NullType,typename p12=easytype::basis::NullType,typename p13=easytype::basis::NullType,typename p14=easytype::basis::NullType,typename p15=easytype::basis::NullType
>class FunctionParameter:
public Parameter_1<p1>,
public Parameter_2<p2>,
public Parameter_3<p3>,
public Parameter_4<p4>,
public Parameter_5<p5>,
public Parameter_6<p6>,
public Parameter_7<p7>,
public Parameter_8<p8>,
public Parameter_9<p9>,
public Parameter_10<p10>,
public Parameter_11<p11>,
public Parameter_12<p12>,
public Parameter_13<p13>,
public Parameter_14<p14>,
public Parameter_15<p15>
{};
	
}	
	
}


#endif

