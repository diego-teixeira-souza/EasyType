#ifndef IS_LEFT_CONST_HPP
#define IS_LEFT_CONST_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class IsLeftConst;

template<typename T>
class IsLeftConst:
public easytype::basis::IfThenElse<
    easytype::basis::IsSame<
        T, typename easytype::qualifier::constvolatile::signature::ConstVolatileSignature<
            T
        >::LeftConstOf::type
    >::value,
    easytype::basis::TrueType,
    easytype::basis::FalseType
>::result_type{};

}

}

}

}

#endif