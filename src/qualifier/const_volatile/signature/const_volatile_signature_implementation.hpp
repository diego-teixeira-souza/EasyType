#ifndef CONST_VOLATILE_SIGNATURE_IMPLEMENTATION_HPP
#define CONST_VOLATILE_SIGNATURE_IMPLEMENTATION_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace signature
{

template<typename>
class ConstVolatileSignature_Implementation;

#define GENERATE( TYPE )\
template<typename T>\
class ConstVolatileSignature_Implementation<TYPE>:\
public LeftConstOf<TYPE>,\
public RightConstOf<TYPE>,\
public LeftVolatileOf<TYPE>,\
public RightVolatileOf<TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<TYPE const>:\
public LeftConstOf<TYPE const>,\
public RightConstOf<TYPE>,\
public LeftVolatileOf<TYPE const>,\
public RightVolatileOf<TYPE const>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<TYPE volatile>:\
public LeftConstOf<TYPE volatile>,\
public RightConstOf<TYPE volatile>,\
public LeftVolatileOf<TYPE volatile>,\
public RightVolatileOf<TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<TYPE const volatile>:\
public LeftConstOf<TYPE const volatile>,\
public RightConstOf<TYPE volatile>,\
public LeftVolatileOf<TYPE const volatile>,\
public RightVolatileOf<TYPE const>\
{};\
\
\
\
\
\
\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const TYPE>:\
public LeftConstOf<TYPE>,\
public RightConstOf<const TYPE>,\
public LeftVolatileOf<const TYPE>,\
public RightVolatileOf<const TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const TYPE const>:\
public LeftConstOf<TYPE const>,\
public RightConstOf<const TYPE>,\
public LeftVolatileOf<const TYPE const>,\
public RightVolatileOf<const TYPE const>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const TYPE volatile>:\
public LeftConstOf<TYPE volatile>,\
public RightConstOf<const TYPE volatile>,\
public LeftVolatileOf<const TYPE volatile>,\
public RightVolatileOf<const TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const TYPE const volatile>:\
public LeftConstOf<TYPE const volatile>,\
public RightConstOf<const TYPE volatile>,\
public LeftVolatileOf<const TYPE const volatile>,\
public RightVolatileOf<const TYPE const>\
{};\
\
\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<volatile TYPE>:\
public LeftConstOf<volatile TYPE>,\
public RightConstOf<volatile TYPE>,\
public LeftVolatileOf<TYPE>,\
public RightVolatileOf<volatile TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<volatile TYPE const>:\
public LeftConstOf<volatile TYPE const>,\
public RightConstOf<volatile TYPE>,\
public LeftVolatileOf<TYPE const>,\
public RightVolatileOf<volatile TYPE const>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<volatile TYPE volatile>:\
public LeftConstOf<volatile TYPE volatile>,\
public RightConstOf<volatile TYPE volatile>,\
public LeftVolatileOf<TYPE volatile>,\
public RightVolatileOf<volatile TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<volatile TYPE const volatile>:\
public LeftConstOf<volatile TYPE const volatile>,\
public RightConstOf<volatile TYPE volatile>,\
public LeftVolatileOf<TYPE const volatile>,\
public RightVolatileOf<volatile TYPE const>\
{};\
\
\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const volatile TYPE>:\
public LeftConstOf<volatile TYPE>,\
public RightConstOf<const volatile TYPE>,\
public LeftVolatileOf<const TYPE>,\
public RightVolatileOf<const volatile TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const volatile TYPE const>:\
public LeftConstOf<volatile TYPE const>,\
public RightConstOf<const volatile TYPE>,\
public LeftVolatileOf<const TYPE const>,\
public RightVolatileOf<const volatile TYPE const>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const volatile TYPE volatile>:\
public LeftConstOf<volatile TYPE volatile>,\
public RightConstOf<const volatile TYPE>,\
public LeftVolatileOf<const TYPE volatile>,\
public RightVolatileOf<const volatile TYPE>\
{};\
\
\
template<typename T>\
class ConstVolatileSignature_Implementation<const volatile TYPE const volatile>:\
public LeftConstOf<volatile TYPE const volatile>,\
public RightConstOf<const volatile TYPE volatile>,\
public LeftVolatileOf<const TYPE const volatile>,\
public RightVolatileOf<const volatile TYPE const>\
{};\
\
\
\
\



	
}	
	
}	
	
}	
	
}

#endif