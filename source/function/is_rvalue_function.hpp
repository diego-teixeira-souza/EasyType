#ifndef IS_RVALUE_FUNCTION_HPP
#define IS_RVALUE_FUNCTION_HPP


namespace easytype
{
	
namespace function
{

template<typename T>
class IsRValueFunction;


template<typename R >class IsRValueFunction<R ( ) &&>:public easytype::basis::TrueType{};template<typename R >class IsRValueFunction<R ( ... )&&>:public easytype::basis::TrueType{};template<typename R >class IsRValueFunction<R ( )const && >:public easytype::basis::TrueType{};template<typename R >class IsRValueFunction<R ( ...) const &&>:public easytype::basis::TrueType{};template<typename R,typename C >class IsRValueFunction<R ( C::*)( ) &&>:public easytype::basis::TrueType{};template<typename R,typename C >class IsRValueFunction< R (C::*)( ... )&&>:public easytype::basis::TrueType{};template<typename R,typename C >class IsRValueFunction<R (C::*)( ) const &&>:public easytype::basis::TrueType{};template<typename R,typename C >class IsRValueFunction<R (C::*)( ...) const &&>:public easytype::basis::TrueType{};

template<typename R , typename P1>class IsRValueFunction<R ( P1) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsRValueFunction<R ( P1 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsRValueFunction<R ( P1 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsRValueFunction<R ( P1 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::*)( P1) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction< R (C::*)( P1 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R (C::*)( P1 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R (C::*)( P1 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2>class IsRValueFunction<R ( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsRValueFunction<R ( P1 , P2 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsRValueFunction<R ( P1 , P2 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsRValueFunction<R ( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::*)( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction< R (C::*)( P1 , P2 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R (C::*)( P1 , P2 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R (C::*)( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( P1 , P2 , P3 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( P1 , P2 , P3 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::*)( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction< R (C::*)( P1 , P2 , P3 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R (C::*)( P1 , P2 , P3 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R (C::*)( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( P1 , P2 , P3 , P4 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( P1 , P2 , P3 , P4 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};


template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ... )&&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 )const && >:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction< R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R (C::*)( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};




template<typename R,typename C >class IsRValueFunction<R ( C::* const )( ) &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction< R ( C::* const )( ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* const )( ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* const )( ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const )( P1) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction< R ( C::* const )( P1 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const )( P1 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const )( P1 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const )( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction< R ( C::* const )( P1 , P2 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const )( P1 , P2 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const )( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction< R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};



template<typename R,typename C >class IsRValueFunction<R ( C::* volatile )( ) &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction< R ( C::* volatile )( ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* volatile )( ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* volatile )( ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* volatile )( P1) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction< R ( C::* volatile )( P1 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* volatile )( P1 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* volatile )( P1 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* volatile )( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction< R ( C::* volatile )( P1 , P2 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* volatile )( P1 , P2 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* volatile )( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction< R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};



template<typename R,typename C >class IsRValueFunction<R ( C::* const volatile )( ) &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction< R ( C::* const volatile )( ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* const volatile )( ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C >class IsRValueFunction<R ( C::* const volatile )( ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const volatile )( P1) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction< R ( C::* const volatile )( P1 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const volatile )( P1 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1>class IsRValueFunction<R ( C::* const volatile )( P1 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const volatile )( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};


template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction< R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ... )&&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ) const &&>:public easytype::basis::TrueType{};
template<typename R,typename C , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsRValueFunction<R ( C::* const volatile )( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};


template<typename T>
class IsRValueFunction:public easytype::basis::FalseType{};	
	
}
	
}

#endif