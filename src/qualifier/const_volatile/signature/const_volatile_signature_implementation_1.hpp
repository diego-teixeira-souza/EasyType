#ifndef CONST_VOLATILE_SIGNATURE_IMPLEMENTATION_1_HPP
#define CONST_VOLATILE_SIGNATURE_IMPLEMENTATION_1_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{ 

namespace signature
{

/************************************************************************************************************/
// Normal type
template<typename T>
class ConstVolatileSignature_Implementation:
public LeftConstOf<T>,
public RightConstOf<T>,
public LeftVolatileOf<T>,
public RightVolatileOf<T>{};
template<typename T>
class ConstVolatileSignature_Implementation<const T>:
public LeftConstOf<T>,
public RightConstOf<const T>,
public LeftVolatileOf<const T>,
public RightVolatileOf<const T>{};	
template<typename T>
class ConstVolatileSignature_Implementation<volatile T>:
public LeftConstOf<volatile T>,
public RightConstOf<volatile T>,
public LeftVolatileOf<T>,
public RightVolatileOf<volatile T>{};	
template<typename T>
class ConstVolatileSignature_Implementation<const volatile T>:
public LeftConstOf<volatile T>,
public RightConstOf<const volatile T>,
public LeftVolatileOf<const T>,
public RightVolatileOf<const volatile T>{};	

/************************************************************************************************************/
// Pointer
template<typename T>
class ConstVolatileSignature_Implementation<T*>:
public LeftConstOf<T*>,
public RightConstOf<T*>,
public LeftVolatileOf<T*>,
public RightVolatileOf<T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<T* const>:
public LeftConstOf<T* const>,
public RightConstOf<T*>,
public LeftVolatileOf<T* const>,
public RightVolatileOf<T* const>{};
template<typename T>
class ConstVolatileSignature_Implementation<T* volatile>:
public LeftConstOf<T* volatile>,
public RightConstOf<T* volatile>,
public LeftVolatileOf<T* volatile>,
public RightVolatileOf<T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<T* const volatile>:
public LeftConstOf<T* const volatile>,
public RightConstOf<T* volatile>,
public LeftVolatileOf<T* const volatile>,
public RightVolatileOf<T* const>{};
// Member Pointer
template<typename T,typename U>
class ConstVolatileSignature_Implementation<U T::*>:
public LeftConstOf<U T::*>,
public RightConstOf<U T::*>,
public LeftVolatileOf<U T::*>,
public RightVolatileOf<U T::*>{};
template<typename T,typename U>
class ConstVolatileSignature_Implementation<U T::* const>:
public LeftConstOf<U T::* const>,
public RightConstOf<U T::*>,
public LeftVolatileOf<U T::* const>,
public RightVolatileOf<U T::* const>{};
template<typename T,typename U>
class ConstVolatileSignature_Implementation<U T::* volatile>:
public LeftConstOf<U T::* volatile>,
public RightConstOf<U T::* volatile>,
public LeftVolatileOf<U T::* volatile>,
public RightVolatileOf<U T::*>{};
template<typename T,typename U>
class ConstVolatileSignature_Implementation<U T::* const volatile>:
public LeftConstOf<U T::* const volatile>,
public RightConstOf<U T::* volatile>,
public LeftVolatileOf<U T::* const volatile>,
public RightVolatileOf<U T::* const>{};
/************************************************************************************************************/
// Const Pointer
template<typename T>
class ConstVolatileSignature_Implementation<const T*>:
public LeftConstOf<T*>,
public RightConstOf<const T*>,
public LeftVolatileOf<const T*>,
public RightVolatileOf<const T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<const T* const>:
public LeftConstOf<T* const>,
public RightConstOf<const T*>,
public LeftVolatileOf<const T* const>,
public RightVolatileOf<const T* const>{};
template<typename T>
class ConstVolatileSignature_Implementation<const T* volatile>:
public LeftConstOf<T* volatile>,
public RightConstOf<const T* volatile>,
public LeftVolatileOf<const T* volatile>,
public RightVolatileOf<const T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<const T* const volatile>:
public LeftConstOf<T* const volatile>,
public RightConstOf<const T* volatile>,
public LeftVolatileOf<const T* const volatile>,
public RightVolatileOf<const T* const>{};
// Const Member Pointer
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const U T::*>:
public LeftConstOf<U T::*>,
public RightConstOf<const U T::*>,
public LeftVolatileOf<const U T::*>,
public RightVolatileOf<const U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const U T::* const>:
public LeftConstOf<U T::* const>,
public RightConstOf<const U T::*>,
public LeftVolatileOf<const U T::* const>,
public RightVolatileOf<const U T::* const>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const U T::* volatile>:
public LeftConstOf<U T::* volatile>,
public RightConstOf<const U T::* volatile>,
public LeftVolatileOf<const U T::* volatile>,
public RightVolatileOf<const U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const U T::* const volatile>:
public LeftConstOf<U T::* const volatile>,
public RightConstOf<const U T::* volatile>,
public LeftVolatileOf<const U T::* const volatile>,
public RightVolatileOf<const U T::* const>{};
/************************************************************************************************************/
// Volatile Pointer
template<typename T>
class ConstVolatileSignature_Implementation<volatile T*>:
public LeftConstOf<volatile T*>,
public RightConstOf<volatile T*>,
public LeftVolatileOf<T*>,
public RightVolatileOf<volatile T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<volatile T* const>:
public LeftConstOf<volatile T* const>,
public RightConstOf<volatile T*>,
public LeftVolatileOf<T* const>,
public RightVolatileOf<volatile T* const>{};
template<typename T>
class ConstVolatileSignature_Implementation<volatile T* volatile>:
public LeftConstOf<volatile T* volatile>,
public RightConstOf<volatile T* volatile>,
public LeftVolatileOf<T* volatile>,
public RightVolatileOf<volatile T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<volatile T* const volatile>:
public LeftConstOf<volatile T* const volatile>,
public RightConstOf<volatile T* volatile>,
public LeftVolatileOf<T* const volatile>,
public RightVolatileOf<volatile T* const>{};
// Volatile Member Pointer
template<typename T, typename U>
class ConstVolatileSignature_Implementation<volatile U T::*>:
public LeftConstOf<volatile U T::*>,
public RightConstOf<volatile U T::*>,
public LeftVolatileOf<U T::*>,
public RightVolatileOf<volatile U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<volatile U T::* const>:
public LeftConstOf<volatile U T::* const>,
public RightConstOf<volatile U T::*>,
public LeftVolatileOf<U T::* const>,
public RightVolatileOf<volatile U T::* const>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<volatile U T::* volatile>:
public LeftConstOf<volatile U T::* volatile>,
public RightConstOf<volatile U T::* volatile>,
public LeftVolatileOf<U T::* volatile>,
public RightVolatileOf<volatile U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<volatile U T::* const volatile>:
public LeftConstOf<volatile U T::* const volatile>,
public RightConstOf<volatile U T::* volatile>,
public LeftVolatileOf<U T::* const volatile>,
public RightVolatileOf<volatile U T::* const>{};
/************************************************************************************************************/
// Const Volatile Pointer
template<typename T>
class ConstVolatileSignature_Implementation<const volatile T*>:
public LeftConstOf<volatile T*>,
public RightConstOf<const volatile T*>,
public LeftVolatileOf<const T*>,
public RightVolatileOf<const volatile T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<const volatile T* const>:
public LeftConstOf<volatile T* const>,
public RightConstOf<const volatile T*>,
public LeftVolatileOf<const T* const>,
public RightVolatileOf<const volatile T*const>{};
template<typename T>
class ConstVolatileSignature_Implementation<const volatile T* volatile>:
public LeftConstOf<volatile T* volatile>,
public RightConstOf<const volatile T*>,
public LeftVolatileOf<const T* volatile>,
public RightVolatileOf<const volatile T*>{};
template<typename T>
class ConstVolatileSignature_Implementation<const volatile T* const volatile>:
public LeftConstOf<volatile T* const volatile>,
public RightConstOf<const volatile T* volatile>,
public LeftVolatileOf<const T* const volatile>,
public RightVolatileOf<const volatile T* const>{};
// Const Volatile Member Pointer
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const volatile U T::*>:
public LeftConstOf<volatile U T::*>,
public RightConstOf<const volatile U T::*>,
public LeftVolatileOf<const U T::*>,
public RightVolatileOf<const volatile U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const volatile U T::* const>:
public LeftConstOf<volatile U T::* const>,
public RightConstOf<const volatile U T::*>,
public LeftVolatileOf<const U T::* const>,
public RightVolatileOf<const volatile U T::*const>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const volatile U T::* volatile>:
public LeftConstOf<volatile U T::* volatile>,
public RightConstOf<const volatile U T::*>,
public LeftVolatileOf<const U T::* volatile>,
public RightVolatileOf<const volatile U T::*>{};
template<typename T, typename U>
class ConstVolatileSignature_Implementation<const volatile U T::* const volatile>:
public LeftConstOf<volatile U T::* const volatile>,
public RightConstOf<const volatile U T::* volatile>,
public LeftVolatileOf<const U T::* const volatile>,
public RightVolatileOf<const volatile U T::* const>{};

}	
	
}
	
}	
	
}

#endif