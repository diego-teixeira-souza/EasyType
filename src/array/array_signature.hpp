#ifndef ARRAY_SIGNATURE_HPP
#define ARRAY_SIGNATURE_HPP

namespace easytype
{

namespace array
{

template<typename T>
class ArraySignature;


template<typename T , int s1>
class ArraySignature< T [s1]>:
public ArrayDimension< s1>,
public TotalDimension< 1 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2>
class ArraySignature< T [s1] [s2]>:
public ArrayDimension< s1 , s2>,
public TotalDimension< 2 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3>
class ArraySignature< T [s1] [s2] [s3]>:
public ArrayDimension< s1 , s2 , s3>,
public TotalDimension< 3 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4>
class ArraySignature< T [s1] [s2] [s3] [s4]>:
public ArrayDimension< s1 , s2 , s3 , s4>,
public TotalDimension< 4 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5>,
public TotalDimension< 5 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6>,
public TotalDimension< 6 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7>,
public TotalDimension< 7 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8>,
public TotalDimension< 8 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9>,
public TotalDimension< 9 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10>,
public TotalDimension< 10 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11>,
public TotalDimension< 11 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12>,
public TotalDimension< 12 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13>,
public TotalDimension< 13 >,
public ArrayOf<T>{};

template<typename T , int s1 , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13 , int s14>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14>,
public TotalDimension< 14 >,
public ArrayOf<T>{};

template<typename T, int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9, int s10, int s11, int s12, int s13, int s14, int s15>
class ArraySignature< T [s1] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14] [s15]>:
public ArrayDimension< s1 , s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14 , s15>,
public TotalDimension< 15 >,
public ArrayOf<T>{};

template<typename T >
class ArraySignature< T []>:
public ArrayDimension< >,
public TotalDimension< 1 >,
public ArrayOf<T>{};

template<typename T , int s2>
class ArraySignature< T [] [s2]>:
public ArrayDimension< 0,s2>,
public TotalDimension< 2 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3>
class ArraySignature< T [] [s2] [s3]>:
public ArrayDimension< 0,s2 , s3>,
public TotalDimension< 3 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4>
class ArraySignature< T [] [s2] [s3] [s4]>:
public ArrayDimension< 0,s2 , s3 , s4>,
public TotalDimension< 4 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5>
class ArraySignature< T [] [s2] [s3] [s4] [s5]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5>,
public TotalDimension< 5 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6>,
public TotalDimension< 6 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7>,
public TotalDimension< 7 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8]>:
public ArrayDimension<  0,s2 , s3 , s4 , s5 , s6 , s7 , s8>,
public TotalDimension< 8 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9]>:
public ArrayDimension<  0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9>,
public TotalDimension< 9 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10>,
public TotalDimension< 10 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11>,
public TotalDimension< 11 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12>,
public TotalDimension< 12 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13>,
public TotalDimension< 13 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13 , int s14>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14>,
public TotalDimension< 14 >,
public ArrayOf<T>{};

template<typename T , int s2 , int s3 , int s4 , int s5 , int s6 , int s7 , int s8 , int s9 , int s10 , int s11 , int s12 , int s13 , int s14 , int s15>
class ArraySignature< T [] [s2] [s3] [s4] [s5] [s6] [s7] [s8] [s9] [s10] [s11] [s12] [s13] [s14] [s15]>:
public ArrayDimension< 0,s2 , s3 , s4 , s5 , s6 , s7 , s8 , s9 , s10 , s11 , s12 , s13 , s14 , s15>,
public TotalDimension< 15 >,
public ArrayOf<T>{};

// Is not an array
template<typename T>
class ArraySignature:
public ArrayDimension<>,
public TotalDimension<0>,
public ArrayOf<T>{};
	
}	
	
}

#endif




