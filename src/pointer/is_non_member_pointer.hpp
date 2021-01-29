#ifndef IS_NON_MEMBER_POINTER_HPP
#define IS_NON_MEMBER_POINTER_HPP

namespace easytype
{
	
namespace pointer
{

// Identifies when T is an non-member pointer
template<typename T>
class IsNonMemberPointer;

// Non Member Pointer with 1 level
template<typename T>class IsNonMemberPointer< T * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 2 level
template<typename T>class IsNonMemberPointer< T * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 3 level
template<typename T>class IsNonMemberPointer< T * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 4 level
template<typename T>class IsNonMemberPointer< T * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 5 level
template<typename T>class IsNonMemberPointer< T * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 6 level
template<typename T>class IsNonMemberPointer< T * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 7 level
template<typename T>class IsNonMemberPointer< T * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 8 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 9 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 10 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 11 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 12 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 13 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 14 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Non Member Pointer with 15 level
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T>class IsNonMemberPointer< T * * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Not an non member pointer
template<typename T>
class IsNonMemberPointer:public easytype::basis::FalseType{};	
	
}	
	
}


#endif




