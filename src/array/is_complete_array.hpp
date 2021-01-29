#ifndef IS_COMPLETE_ARRAY_HPP
#define IS_COMPLETE_ARRAY_HPP

namespace easytype 
{
	
namespace array
{
	
template<typename T>
class IsCompleteArray;

template<typename T,int s1>
class IsCompleteArray<T [s1]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2>
class IsCompleteArray<T [s1] [s2]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3>
class IsCompleteArray<T [s1] [s2] [s3]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4>
class IsCompleteArray<T [s1] [s2] [s3] [s4]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13]>:
public easytype::basis::TrueType{};

template<typename T,int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13 , int s14>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14]>:
public easytype::basis::TrueType{};

template<typename T, int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int s11, int s12, int s13, int s14, int s15>
class IsCompleteArray<T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14] [s15]>:
public easytype::basis::TrueType{};


template<typename T>
class IsCompleteArray:public easytype::basis::FalseType{};

}	
	
}

#endif




