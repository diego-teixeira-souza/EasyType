#ifdef IS_RIGHT_CONST_HPP
#define IS_RIGHT_CONST_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class IsRightConst;

template<typename T>
class IsRightConst:
public easytype::basis::IfThenElse<
    easytype::basis::IsSame<
        T,
        typename easytype::qualifier::constvolatile::signature::ConstVolatileSignature<
            T
        >::RightConstOf::type
    >::value,
    easytype::basis::TrueType,
    easytype::basis::FalseType
>::result_type{};

}

}

}

}

#endif