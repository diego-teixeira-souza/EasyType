#ifndef IS_MEMBER_POINTER_HPP
#define IS_MEMBER_POINTER_HPP

namespace easytype 
{

namespace pointer
{

// Identifies when T is an member pointer
template<typename T>
class IsMemberPointer;
// Member Pointer with 1 level
template<typename T,typename C>class IsNonMemberPointer< T C::* >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 2 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 3 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 4 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 5 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 6 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 7 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 8 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 9 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 10 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 11 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 12 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 13 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 14 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};

// Member Pointer with 15 level
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * * >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * * const >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * * volatile >:public easytype::basis::TrueType{};
template<typename T,typename C>class IsNonMemberPointer< T C::* * * * * * * * * * * * * * * const volatile>:public easytype::basis::TrueType{};


// Not an member pointer
template<typename T>
class IsMemberPointer:public easytype::basis::FalseType,public MemberPointerOf<easytype::basis::NullType>{};	
	
}	
	
}
#endif


