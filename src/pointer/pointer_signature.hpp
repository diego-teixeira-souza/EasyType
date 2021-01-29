#ifndef POINTER_SIGNATURE_HPP
#define POINTER_SIGNATURE_HPP


namespace easytype
{
	
namespace pointer
{

template<typename T>
class PointerSignature;

// Non-Member Pointer with 1 levels
template<typename T>class PointerSignature< T * >:public PointerOf< T >,public PointerLevel< 1>{};
template<typename T>class PointerSignature< T * const>:public PointerOf< T >,public PointerLevel< 1>{};
template<typename T>class PointerSignature< T * volatile>:public PointerOf< T >,public PointerLevel< 1>{};
template<typename T>class PointerSignature< T * const volatile>:public PointerOf< T >,public PointerLevel< 1>{};

// Non-Member Pointer with 2 levels
template<typename T>class PointerSignature< T * * >:public PointerOf< T * >,public PointerLevel< 2>{};
template<typename T>class PointerSignature< T * * const>:public PointerOf< T * >,public PointerLevel< 2>{};
template<typename T>class PointerSignature< T * * volatile>:public PointerOf< T * >,public PointerLevel< 2>{};
template<typename T>class PointerSignature< T * * const volatile>:public PointerOf< T * >,public PointerLevel< 2>{};

// Non-Member Pointer with 3 levels
template<typename T>class PointerSignature< T * * * >:public PointerOf< T * * >,public PointerLevel< 3>{};
template<typename T>class PointerSignature< T * * * const>:public PointerOf< T * * >,public PointerLevel< 3>{};
template<typename T>class PointerSignature< T * * * volatile>:public PointerOf< T * * >,public PointerLevel< 3>{};
template<typename T>class PointerSignature< T * * * const volatile>:public PointerOf< T * * >,public PointerLevel< 3>{};

// Non-Member Pointer with 4 levels
template<typename T>class PointerSignature< T * * * * >:public PointerOf< T * * * >,public PointerLevel< 4>{};
template<typename T>class PointerSignature< T * * * * const>:public PointerOf< T * * * >,public PointerLevel< 4>{};
template<typename T>class PointerSignature< T * * * * volatile>:public PointerOf< T * * * >,public PointerLevel< 4>{};
template<typename T>class PointerSignature< T * * * * const volatile>:public PointerOf< T * * * >,public PointerLevel< 4>{};

// Non-Member Pointer with 5 levels
template<typename T>class PointerSignature< T * * * * * >:public PointerOf< T * * * * >,public PointerLevel< 5>{};
template<typename T>class PointerSignature< T * * * * * const>:public PointerOf< T * * * * >,public PointerLevel< 5>{};
template<typename T>class PointerSignature< T * * * * * volatile>:public PointerOf< T * * * * >,public PointerLevel< 5>{};
template<typename T>class PointerSignature< T * * * * * const volatile>:public PointerOf< T * * * * >,public PointerLevel< 5>{};

// Non-Member Pointer with 6 levels
template<typename T>class PointerSignature< T * * * * * * >:public PointerOf< T * * * * * >,public PointerLevel< 6>{};
template<typename T>class PointerSignature< T * * * * * * const>:public PointerOf< T * * * * * >,public PointerLevel< 6>{};
template<typename T>class PointerSignature< T * * * * * * volatile>:public PointerOf< T * * * * * >,public PointerLevel< 6>{};
template<typename T>class PointerSignature< T * * * * * * const volatile>:public PointerOf< T * * * * * >,public PointerLevel< 6>{};

// Non-Member Pointer with 7 levels
template<typename T>class PointerSignature< T * * * * * * * >:public PointerOf< T * * * * * * >,public PointerLevel< 7>{};
template<typename T>class PointerSignature< T * * * * * * * const>:public PointerOf< T * * * * * * >,public PointerLevel< 7>{};
template<typename T>class PointerSignature< T * * * * * * * volatile>:public PointerOf< T * * * * * * >,public PointerLevel< 7>{};
template<typename T>class PointerSignature< T * * * * * * * const volatile>:public PointerOf< T * * * * * * >,public PointerLevel< 7>{};

// Non-Member Pointer with 8 levels
template<typename T>class PointerSignature< T * * * * * * * * >:public PointerOf< T * * * * * * * >,public PointerLevel< 8>{};
template<typename T>class PointerSignature< T * * * * * * * * const>:public PointerOf< T * * * * * * * >,public PointerLevel< 8>{};
template<typename T>class PointerSignature< T * * * * * * * * volatile>:public PointerOf< T * * * * * * * >,public PointerLevel< 8>{};
template<typename T>class PointerSignature< T * * * * * * * * const volatile>:public PointerOf< T * * * * * * * >,public PointerLevel< 8>{};

// Non-Member Pointer with 9 levels
template<typename T>class PointerSignature< T * * * * * * * * * >:public PointerOf< T * * * * * * * * >,public PointerLevel< 9>{};
template<typename T>class PointerSignature< T * * * * * * * * * const>:public PointerOf< T * * * * * * * * >,public PointerLevel< 9>{};
template<typename T>class PointerSignature< T * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * >,public PointerLevel< 9>{};
template<typename T>class PointerSignature< T * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * >,public PointerLevel< 9>{};

// Non-Member Pointer with 10 levels
template<typename T>class PointerSignature< T * * * * * * * * * * >:public PointerOf< T * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T>class PointerSignature< T * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T>class PointerSignature< T * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T>class PointerSignature< T * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * >,public PointerLevel< 10>{};

// Non-Member Pointer with 11 levels
template<typename T>class PointerSignature< T * * * * * * * * * * * >:public PointerOf< T * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * * >,public PointerLevel< 11>{};

// Non-Member Pointer with 12 levels
template<typename T>class PointerSignature< T * * * * * * * * * * * * >:public PointerOf< T * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * * * >,public PointerLevel< 12>{};

// Non-Member Pointer with 13 levels
template<typename T>class PointerSignature< T * * * * * * * * * * * * * >:public PointerOf< T * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * * * * >,public PointerLevel< 13>{};

// Non-Member Pointer with 14 levels
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * >:public PointerOf< T * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * * * * * >,public PointerLevel< 14>{};

// Non-Member Pointer with 15 levels
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * * >:public PointerOf< T * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * * const>:public PointerOf< T * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * * volatile>:public PointerOf< T * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T>class PointerSignature< T * * * * * * * * * * * * * * * const volatile>:public PointerOf< T * * * * * * * * * * * * * * >,public PointerLevel< 15>{};

// Member Pointer with 1 levels
template<typename T,typename C>class PointerSignature< T C::*>:public PointerOf<T>,public PointerLevel<1>{};
template<typename T,typename C>class PointerSignature< T C::* const>:public PointerOf<T>,public PointerLevel<1>{};
template<typename T,typename C>class PointerSignature< T C::* volatile>:public PointerOf<T>,public PointerLevel<1>{};
template<typename T,typename C>class PointerSignature< T C::* const volatile>:public PointerOf<T>,public PointerLevel<1>{};

// Member Pointer with 2 levels
template<typename T, typename C>class PointerSignature< T C:: * * >:public PointerOf< T C:: * >,public PointerLevel< 2>{};
template<typename T, typename C>class PointerSignature< T C:: * * const>:public PointerOf< T C:: * >,public PointerLevel< 2>{};
template<typename T, typename C>class PointerSignature< T C:: * * volatile>:public PointerOf< T C:: * >,public PointerLevel< 2>{};
template<typename T, typename C>class PointerSignature< T C:: * * const volatile>:public PointerOf< T C:: * >,public PointerLevel< 2>{};

// Member Pointer with 3 levels
template<typename T, typename C>class PointerSignature< T C:: * * * >:public PointerOf< T C:: * * >,public PointerLevel< 3>{};
template<typename T, typename C>class PointerSignature< T C:: * * * const>:public PointerOf< T C:: * * >,public PointerLevel< 3>{};
template<typename T, typename C>class PointerSignature< T C:: * * * volatile>:public PointerOf< T C:: * * >,public PointerLevel< 3>{};
template<typename T, typename C>class PointerSignature< T C:: * * * const volatile>:public PointerOf< T C:: * * >,public PointerLevel< 3>{};

// Member Pointer with 4 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * >:public PointerOf< T C:: * * * >,public PointerLevel< 4>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * const>:public PointerOf< T C:: * * * >,public PointerLevel< 4>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * volatile>:public PointerOf< T C:: * * * >,public PointerLevel< 4>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * const volatile>:public PointerOf< T C:: * * * >,public PointerLevel< 4>{};

// Member Pointer with 5 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * >:public PointerOf< T C:: * * * * >,public PointerLevel< 5>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * const>:public PointerOf< T C:: * * * * >,public PointerLevel< 5>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * volatile>:public PointerOf< T C:: * * * * >,public PointerLevel< 5>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * const volatile>:public PointerOf< T C:: * * * * >,public PointerLevel< 5>{};

// Member Pointer with 6 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * >:public PointerOf< T C:: * * * * * >,public PointerLevel< 6>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * const>:public PointerOf< T C:: * * * * * >,public PointerLevel< 6>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * volatile>:public PointerOf< T C:: * * * * * >,public PointerLevel< 6>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * const volatile>:public PointerOf< T C:: * * * * * >,public PointerLevel< 6>{};

// Member Pointer with 7 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * >:public PointerOf< T C:: * * * * * * >,public PointerLevel< 7>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * const>:public PointerOf< T C:: * * * * * * >,public PointerLevel< 7>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * volatile>:public PointerOf< T C:: * * * * * * >,public PointerLevel< 7>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * >,public PointerLevel< 7>{};

// Member Pointer with 8 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * >:public PointerOf< T C:: * * * * * * * >,public PointerLevel< 8>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * const>:public PointerOf< T C:: * * * * * * * >,public PointerLevel< 8>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * >,public PointerLevel< 8>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * >,public PointerLevel< 8>{};

// Member Pointer with 9 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * >,public PointerLevel< 9>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * >,public PointerLevel< 9>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * >,public PointerLevel< 9>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * >,public PointerLevel< 9>{};

// Member Pointer with 10 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * >,public PointerLevel< 10>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * >,public PointerLevel< 10>{};

// Member Pointer with 11 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * * >,public PointerLevel< 11>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * * >,public PointerLevel< 11>{};

// Member Pointer with 12 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * * * >,public PointerLevel< 12>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * * * >,public PointerLevel< 12>{};

// Member Pointer with 13 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * * * * >,public PointerLevel< 13>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * * * * >,public PointerLevel< 13>{};

// Member Pointer with 14 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * * * * * >,public PointerLevel< 14>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * * * * * >,public PointerLevel< 14>{};

// Member Pointer with 15 levels
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * * >:public PointerOf< T C:: * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * * const>:public PointerOf< T C:: * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * * volatile>:public PointerOf< T C:: * * * * * * * * * * * * * * >,public PointerLevel< 15>{};
template<typename T, typename C>class PointerSignature< T C:: * * * * * * * * * * * * * * * const volatile>:public PointerOf< T C:: * * * * * * * * * * * * * * >,public PointerLevel< 15>{};

// Not an Pointer
template<typename T>
class PointerSignature:public PointerOf<T>,public PointerLevel<0>{};
	
}
	
}

#endif



