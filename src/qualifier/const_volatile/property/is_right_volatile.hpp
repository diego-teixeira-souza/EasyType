#ifndef IS_RIGHT_VOLATILE_HPP
#define IS_RIGHT_VOLATILE_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class IsRightVolatile;

template<typename T>
class IsRightVolatile:
public easytype::basis::IfThenElse<
    easytype::basis::IsSame<
        T,
        typename easytype::qualifier::constvolatile::signature::ConstVolatileSignature<
            T
        >::RightVolatileOf::type
    >::value,
    easytype::basis::TrueType,
    easytype::basis::FalseType
>::result_type{};

}

}

}

}

#endif