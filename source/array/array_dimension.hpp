#ifndef ARRAY_DIMENSION_HPP
#define ARRAY_DIMENSION_HPP


namespace easytype
{
	
namespace array
{

template<int,int,int,int,int,
	     int,int,int,int,int,
		 int,int,int,int,int
>class ArrayDimension;

template<int>class Dimension_1;
template<int>class Dimension_2;
template<int>class Dimension_3;
template<int>class Dimension_4;
template<int>class Dimension_5;
template<int>class Dimension_6;
template<int>class Dimension_7;
template<int>class Dimension_8;
template<int>class Dimension_9;
template<int>class Dimension_10;
template<int>class Dimension_11;
template<int>class Dimension_12;
template<int>class Dimension_13;
template<int>class Dimension_14;
template<int>class Dimension_15;

template<int d>class Dimension_1:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_2:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_3:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_4:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_5:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_6:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_7:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_8:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_9:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_10:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_11:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_12:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_13:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_14:public easytype::basis::ConstInteger<d>{};
template<int d>class Dimension_15:public easytype::basis::ConstInteger<d>{};

template<
		int s1=0 ,int s2=0 ,int s3=0 ,int s4=0 ,int s5=0 ,
		int s6=0 ,int s7=0 ,int s8=0 ,int s9=0 ,int s10=0,
		int s11=0,int s12=0,int s13=0,int s14=0,int s15=0>
class ArrayDimension:
public Dimension_1<s1>,
public Dimension_2<s2>,
public Dimension_3<s3>,
public Dimension_4<s4>,
public Dimension_5<s5>,
public Dimension_6<s6>,
public Dimension_7<s7>,
public Dimension_8<s8>,
public Dimension_9<s9>,
public Dimension_10<s10>,
public Dimension_11<s11>,
public Dimension_12<s12>,
public Dimension_13<s13>,
public Dimension_14<s14>,
public Dimension_15<s15>
{};	
	
}	
	
}


#endif


