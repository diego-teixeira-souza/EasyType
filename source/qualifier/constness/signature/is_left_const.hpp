#ifndef IS_LEFT_CONST_HPP
#define IS_LEFT_CONST_HPP

namespace easytype
{
	
namespace qualifier
{
	
template<typename T>
class IsLeftConst;

template<typename T>
class IsLeftConst_Implementation;

// Single Type
template<typename T>
class IsLeftConst_Implementation;

template<typename T>
class IsLeftConst_Implementation:
public easytype::basis::FalseType,
public LeftConstOf<T>{};

template<typename T>
class IsLeftConst_Implementation<const T>:
public easytype::basis::TrueType,
public LeftConstOf<T>{};

template<typename T>
class IsLeftConst_Implementation<volatile T>:
public easytype::basis::FalseType,
public LeftConstOf<volatile T>{};

template<typename T>
class IsLeftConst_Implementation<const volatile T>:
public easytype::basis::TrueType,
public LeftConstOf<volatile T>{};

// Pointer with 1 level
template<typename T>class IsLeftConst_Implementation<T *>:public easytype::basis::FalseType,public LeftConstOf< T * >{};
template<typename T>class IsLeftConst_Implementation<T * const>:public easytype::basis::FalseType,public LeftConstOf< T * const>{};
template<typename T>class IsLeftConst_Implementation<T * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * >:public easytype::basis::TrueType,public LeftConstOf< T * >{};
template<typename T>class IsLeftConst_Implementation< const T * const>:public easytype::basis::TrueType,public LeftConstOf< T * const>{};
template<typename T>class IsLeftConst_Implementation< const T * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * const volatile>{};

// Pointer with 2 level
template<typename T>class IsLeftConst_Implementation<T * *>:public easytype::basis::FalseType,public LeftConstOf< T * * >{};
template<typename T>class IsLeftConst_Implementation<T * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * >:public easytype::basis::TrueType,public LeftConstOf< T * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * const volatile>{};

// Pointer with 3 level
template<typename T>class IsLeftConst_Implementation<T * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * const volatile>{};

// Pointer with 4 level
template<typename T>class IsLeftConst_Implementation<T * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * const volatile>{};

// Pointer with 5 level
template<typename T>class IsLeftConst_Implementation<T * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * const volatile>{};

// Pointer with 6 level
template<typename T>class IsLeftConst_Implementation<T * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * const volatile>{};

// Pointer with 7 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * const volatile>{};

// Pointer with 8 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * const volatile>{};

// Pointer with 8 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * const volatile>{};

// Pointer with 10 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * const volatile>{};

// Pointer with 11 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * const volatile>{};

// Pointer with 12 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * const volatile>{};

// Pointer with 13 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * const volatile>{};

// Pointer with 14 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * const volatile>{};

// Pointer with 15 level
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<T * * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T * * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const T * * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T * * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation<volatile T * * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * const volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * >{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * const>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * volatile>{};
template<typename T>class IsLeftConst_Implementation< const volatile T * * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T * * * * * * * * * * * * * * * const volatile>{};

// Member Pointer with 1 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::*>:public easytype::basis::FalseType,public LeftConstOf< T C::* >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* const>:public easytype::basis::FalseType,public LeftConstOf< T C::* const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* >:public easytype::basis::TrueType,public LeftConstOf< T C::* >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* const>:public easytype::basis::TrueType,public LeftConstOf< T C::* const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::*>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* const volatile>{};

// Member Pointer with 2 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * const volatile>{};

// Member Pointer with 3 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * const volatile>{};

// Member Pointer with 4 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * const volatile>{};

// Member Pointer with 5 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * const volatile>{};

// Member Pointer with 6 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * const volatile>{};

// Member Pointer with 7 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * const volatile>{};

// Member Pointer with 8 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * const volatile>{};

// Member Pointer with 9 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * const volatile>{};

// Member Pointer with 10 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * const volatile>{};

// Member Pointer with 11 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * const volatile>{};

// Member Pointer with 12 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * const volatile>{};

// Member Pointer with 13 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * const volatile>{};

// Member Pointer with 14 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * const volatile>{};

// Member Pointer with 15 level
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<T C::* * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< T C::* * * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const T C::* * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< T C::* * * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * *>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * * const>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * * volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation<volatile T C::* * * * * * * * * * * * * * * const volatile>:public easytype::basis::FalseType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * const volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * * >:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * >{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * * const>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * const>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * * volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * volatile>{};
template<typename T,typename C>class IsLeftConst_Implementation< const volatile T C::* * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType,public LeftConstOf< volatile T C::* * * * * * * * * * * * * * * const volatile>{};


template<typename T>
class IsLeftConst
{
	private:
		
		typedef IsLValueReference<T> l_ref;
		typedef IsRValueReference<T> r_ref;
		typedef ReferenceOf<T> un_ref;
		typedef IsLeftConst_Implementation< typename un_ref::type > l_c;
		
		typedef typename easytype::basis::IfThenElse<
			l_ref::value,
			typename l_c::LeftConstOf::type &,
			typename easytype::basis::IfThenElse<
				r_ref::value,
				typename l_c::LeftConstOf::type &&,
				typename l_c::LeftConstOf::type
			>::result_type
		>::result_type const_of;
		
		
	public:
		typedef easytype::basis::TypeAlias<const_of> ConstOf;
};


}	
	
}


#endif
