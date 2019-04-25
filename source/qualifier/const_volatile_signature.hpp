#ifndef CONST_VOLATILE_SIGNATURE_HPP
#define CONST_VOLATILE_SIGNATURE_HPP

namespace easytype
{

namespace qualifier
{

template<typename>class LeftConstOf;	
template<typename>class RightConstOf;
template<typename>class LeftVolatileOf;
template<typename>class RightVolatileOf;
template<typename>class ConstVolatileSignature;

// Single type
template<typename T>class ConstVolatileSignature<const T>:
public LeftConstOf<T>,
public RightConstOf<const T>,
public LeftVolatileOf<const T>,
public RightVolatileOf<const T>{};
template<typename T>class ConstVolatileSignature<volatile T>:
public LeftConstOf<volatile T>,
public RightConstOf<volatile T>,
public LeftVolatileOf<T>,
public RightVolatileOf<volatile T>{};
template<typename T>class ConstVolatileSignature<const volatile T>:
public LeftConstOf<volatile T>,
public RightConstOf<const volatile T>,
public LeftVolatileOf<const T>,
public RightVolatileOf<const volatile T>{};

// Pointer types
#define PTR( TYPE ) \
template<typename T>\
class ConstVolatileSignature< TYPE >:\
public LeftConstOf<TYPE >,\
public RightConstOf<TYPE >,\
public LeftVolatileOf< TYPE >,\
public RightVolatileOf< TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature< TYPE const>:\
public LeftConstOf<TYPE const>,\
public RightConstOf<TYPE >,\
public LeftVolatileOf< TYPE const>,\
public RightVolatileOf< TYPE const>{};\
\
\
template<typename T>\
class ConstVolatileSignature< TYPE volatile>:\
public LeftConstOf<TYPE volatile>,\
public RightConstOf<TYPE volatile>,\
public LeftVolatileOf< TYPE volatile>,\
public RightVolatileOf< TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature< TYPE const volatile>:\
public LeftConstOf<TYPE const volatile>,\
public RightConstOf<TYPE volatile>,\
public LeftVolatileOf< TYPE const volatile>,\
public RightVolatileOf< TYPE const >{};\
\
\
\
\
\
template<typename T>\
class ConstVolatileSignature<const TYPE>:\
public LeftConstOf< TYPE >,\
public RightConstOf< const TYPE >,\
public LeftVolatileOf<const TYPE >,\
public RightVolatileOf<const TYPE>{};\
\
\
template<typename T>\
class ConstVolatileSignature<const TYPE const >:\
public LeftConstOf< TYPE const>,\
public RightConstOf< const TYPE >,\
public LeftVolatileOf<const TYPE const>,\
public RightVolatileOf<const TYPE const >{};\
\
\
template<typename T>\
class ConstVolatileSignature<const TYPE volatile >:\
public LeftConstOf< TYPE volatile>,\
public RightConstOf< const TYPE volatile>,\
public LeftVolatileOf<const TYPE volatile>,\
public RightVolatileOf<const TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature<const TYPE const volatile >:\
public LeftConstOf< TYPE const volatile>,\
public RightConstOf< const TYPE volatile>,\
public LeftVolatileOf<const TYPE const volatile>,\
public RightVolatileOf<const TYPE const>{};\
\
\
\
\
\
template<typename T>\
class ConstVolatileSignature<volatile TYPE >:\
public LeftConstOf< volatile TYPE >,\
public RightConstOf< volatile TYPE >,\
public LeftVolatileOf< TYPE >,\
public RightVolatileOf< volatile TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature<volatile TYPE const>:\
public LeftConstOf< volatile TYPE const>,\
public RightConstOf< volatile TYPE >,\
public LeftVolatileOf< TYPE const>,\
public RightVolatileOf< volatile TYPE const>{};\
\
\
template<typename T>\
class ConstVolatileSignature<volatile TYPE volatile>:\
public LeftConstOf< volatile TYPE volatile>,\
public RightConstOf< volatile TYPE volatile>,\
public LeftVolatileOf< TYPE volatile >,\
public RightVolatileOf< volatile TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature<volatile TYPE const volatile>:\
public LeftConstOf< volatile TYPE const volatile>,\
public RightConstOf< volatile TYPE  volatile>,\
public LeftVolatileOf< TYPE const volatile >,\
public RightVolatileOf< volatile TYPE const>{};\
\
\
\
\
\
template<typename T>\
class ConstVolatileSignature<const volatile TYPE >:\
public LeftConstOf< volatile TYPE >,\
public RightConstOf< const volatile TYPE >,\
public LeftVolatileOf< const TYPE >,\
public RightVolatileOf< const volatile TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature<const volatile TYPE const>:\
public LeftConstOf< volatile TYPE const>,\
public RightConstOf< const volatile TYPE >,\
public LeftVolatileOf< const TYPE const>,\
public RightVolatileOf< const volatile TYPE const>{};\
\
\
template<typename T>\
class ConstVolatileSignature<const volatile TYPE volatile>:\
public LeftConstOf< volatile TYPE volatile>,\
public RightConstOf< const volatile TYPE volatile>,\
public LeftVolatileOf< const TYPE volatile >,\
public RightVolatileOf< const volatile TYPE >{};\
\
\
template<typename T>\
class ConstVolatileSignature<const volatile TYPE const volatile>:\
public LeftConstOf< volatile TYPE const volatile>,\
public RightConstOf< const volatile TYPE  volatile>,\
public LeftVolatileOf< const TYPE const volatile >,\
public RightVolatileOf< const volatile TYPE const>{};\
\
\
\
\
\


#define MAKE_1( TYPE ) PTR( TYPE *)

#define MAKE_2( TYPE ) PTR( TYPE *)\
MAKE_1( TYPE *) MAKE_1( TYPE *const) MAKE_1( TYPE *volatile) MAKE_1( TYPE *const volatile)

#define MAKE_3( TYPE ) PTR( TYPE *)\
MAKE_2( TYPE *) MAKE_2( TYPE *const) MAKE_2( TYPE *volatile) MAKE_2( TYPE *const volatile)

#define MAKE_4( TYPE ) PTR( TYPE *)\
MAKE_3( TYPE *) MAKE_3( TYPE *const) MAKE_3( TYPE *volatile) MAKE_3( TYPE *const volatile)

#define MAKE_5( TYPE ) PTR( TYPE *)\
MAKE_4( TYPE *) MAKE_4( TYPE *const) MAKE_4( TYPE *volatile) MAKE_4( TYPE *const volatile)

#define MAKE_6( TYPE ) PTR( TYPE *)\
MAKE_5( TYPE *) MAKE_5( TYPE *const) MAKE_5( TYPE *volatile) MAKE_5( TYPE *const volatile)

#define MAKE_7( TYPE ) PTR( TYPE *)\
MAKE_6( TYPE *) MAKE_6( TYPE *const) MAKE_6( TYPE *volatile) MAKE_6( TYPE *const volatile)

#define MAKE_8( TYPE ) PTR( TYPE *)\
MAKE_7( TYPE *) MAKE_7( TYPE *const) MAKE_7( TYPE *volatile) MAKE_7( TYPE *const volatile)

MAKE_6(T);


// Not const, volatile or both
template<typename T>class ConstVolatileSignature:
public LeftConstOf<T>,public RightConstOf<T>,
public LeftVolatileOf<T>,public RightVolatileOf<T>{};

template<typename T>class LeftConstOf:public easytype::basis::TypeAlias<T>{};	
template<typename T>class RightConstOf:public easytype::basis::TypeAlias<T>{};
template<typename T>class LeftVolatileOf:public easytype::basis::TypeAlias<T>{};
template<typename T>class RightVolatileOf:public easytype::basis::TypeAlias<T>{};
	
}	
	
}

#endif