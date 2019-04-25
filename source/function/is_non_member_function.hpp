#ifndef IS_NON_MEMBER_HPP
#define IS_NON_MEMBER_HPP


namespace easytype
{

namespace function
{

// Identifies when T is an non-member function or an static member function
template<typename T>
class IsNonMemberFunction;

// Pointer to non-member function with 0 parameters
template<typename R >class IsNonMemberFunction<R (*)( )>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (*)( ...)>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* const)( )>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* const)( ...)>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* volatile)( )>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* volatile)( ...)>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* const volatile)( )>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R (* const volatile)( ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 1 parameters
template<typename R , typename p1>class IsNonMemberFunction<R (*)( p1)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (*)( p1 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* const)( p1)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* const)( p1...)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* volatile)( p1)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* volatile)( p1 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* const volatile)( p1)>:public easytype::basis::TrueType{};
template<typename R , typename p1>class IsNonMemberFunction<R (* const volatile)( p1 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 2 parameters
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (*)( p1 , p2)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (*)( p1 , p2 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* const)( p1 , p2)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* const)( p1 , p2...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* volatile)( p1 , p2)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* volatile)( p1 , p2 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* const volatile)( p1 , p2)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2>class IsNonMemberFunction<R (* const volatile)( p1 , p2 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 3 parameters
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (*)( p1 , p2 , p3)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (*)( p1 , p2 , p3 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* const)( p1 , p2 , p3)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* const)( p1 , p2 , p3...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 4 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 5 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 6 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 7 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 8 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 9 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 10 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 11 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 12 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 13 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 14 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14 ...)>:public easytype::basis::TrueType{};

// Pointer to non-member function with 15 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (*)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* const)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15 ...)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15)>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15>class IsNonMemberFunction<R (* const volatile)( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15 ...)>:public easytype::basis::TrueType{};

// Type Function with 0 parameters
template<typename R >class IsNonMemberFunction<R ( )>:public easytype::basis::TrueType{};
template<typename R >class IsNonMemberFunction<R ( ...)>:public easytype::basis::TrueType{};

// Type Function with 1 parameters
template<typename R , typename p1 >class IsNonMemberFunction<R ( p1 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 >class IsNonMemberFunction<R ( p1 ...)>:public easytype::basis::TrueType{};

// Type Function with 2 parameters
template<typename R , typename p1 , typename p2 >class IsNonMemberFunction<R ( p1 , p2 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 >class IsNonMemberFunction<R ( p1 , p2 ...)>:public easytype::basis::TrueType{};

// Type Function with 3 parameters
template<typename R , typename p1 , typename p2 , typename p3 >class IsNonMemberFunction<R ( p1 , p2 , p3 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 >class IsNonMemberFunction<R ( p1 , p2 , p3 ...)>:public easytype::basis::TrueType{};

// Type Function with 4 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 ...)>:public easytype::basis::TrueType{};

// Type Function with 5 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 ...)>:public easytype::basis::TrueType{};

// Type Function with 6 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 ...)>:public easytype::basis::TrueType{};

// Type Function with 7 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 ...)>:public easytype::basis::TrueType{};

// Type Function with 8 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 ...)>:public easytype::basis::TrueType{};

// Type Function with 9 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 ...)>:public easytype::basis::TrueType{};

// Type Function with 10 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10 ...)>:public easytype::basis::TrueType{};

// Type Function with 11 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11 ...)>:public easytype::basis::TrueType{};

// Type Function with 12 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12 ...)>:public easytype::basis::TrueType{};

// Type Function with 13 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13 ...)>:public easytype::basis::TrueType{};

// Type Function with 14 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14 ...)>:public easytype::basis::TrueType{};

// Type Function with 15 parameters
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15 )>:public easytype::basis::TrueType{};
template<typename R , typename p1 , typename p2 , typename p3 , typename p4 , typename p5 , typename p6 , typename p7 , typename p8 , typename p9 , typename p10, typename p11, typename p12, typename p13, typename p14, typename p15 >class IsNonMemberFunction<R ( p1 , p2 , p3 , p4 , p5 , p6 , p7 , p8 , p9 , p10, p11, p12, p13, p14, p15 ...)>:public easytype::basis::TrueType{};


// Is not an non-member function
template<typename T>
class IsNonMemberFunction:public easytype::basis::FalseType{};	
	
}	
	
}

#endif


