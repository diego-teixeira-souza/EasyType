#ifndef IS_VOLATILE_HPP
#define IS_VOLATILE_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class IsVolatile;

template<typename T>
class IsVolatile:
public easytype::basis::IfThenElse<
    IsLeftVolatile<T>::value | IsRightVolatile<T>::value, 
    easytype::basis::TrueType,
    easytype::basis::FalseType
>::result_type{};

}

}

}

}

#endif