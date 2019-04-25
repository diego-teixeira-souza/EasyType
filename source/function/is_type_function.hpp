#ifndef IS_TYPE_FUNCTION_HPP
#define IS_TYPE_FUNCTION_HPP

namespace easytype
{
	
namespace function
{

template<typename T>
class IsTypeFunction;

// Type Function with 0 parameters
template<typename R >class IsTypeFunction<R ( )>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...)>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( )const>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...) const>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ) &>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...) &>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( )const &>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...) const &>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ) &&>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...) &&>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( )const &&>:public easytype::basis::TrueType{};
template<typename R >class IsTypeFunction<R ( ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 1 parameters
template<typename R , typename P1>class IsTypeFunction<R ( P1)>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1)const>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1) &>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1>class IsTypeFunction<R ( P1 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 2 parameters
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2>class IsTypeFunction<R ( P1 , P2 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 3 parameters
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3>class IsTypeFunction<R ( P1 , P2 , P3 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 4 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4>class IsTypeFunction<R ( P1 , P2 , P3 , P4 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 5 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 6 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 7 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 8 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 9 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 10 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 11 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 12 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 13 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 14 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 ...) const &&>:public easytype::basis::TrueType{};

// Type Function with 15 parameters
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...)>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15)const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15)const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15)const &&>:public easytype::basis::TrueType{};
template<typename R , typename P1 , typename P2 , typename P3 , typename P4 , typename P5 , typename P6 , typename P7 , typename P8 , typename P9 , typename P10 , typename P11 , typename P12 , typename P13 , typename P14 , typename P15>class IsTypeFunction<R ( P1 , P2 , P3 , P4 , P5 , P6 , P7 , P8 , P9 , P10 , P11 , P12 , P13 , P14 , P15 ...) const &&>:public easytype::basis::TrueType{};

// Is not an type function
template<typename T>
class IsTypeFunction:public easytype::basis::FalseType{};	

}	
	
}

#endif



