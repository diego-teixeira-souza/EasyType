#ifndef IS_LEFT_VOLATILE_HPP
#define IS_LEFT_VOLATILE_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class IsLeftVolatile;

template<typename T>
class IsLeftVolatile:
public easytype::basis::IfThenElse<
    easytype::basis::IsSame<
        T,
        typename easytype::qualifier::constvolatile::signature::ConstVolatileSignature<
            T
        >::LeftVolatileOf::type
    >::value,
    easytype::basis::TrueType,
    easytype::basis::FalseType
>::result_type{};

}

}

}

}

#endif