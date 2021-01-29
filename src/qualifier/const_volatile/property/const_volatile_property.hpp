#ifndef CONST_VOLATILE_PROPERTY_HPP
#define CONST_VOLATILE_PROPERTY_HPP

namespace easytype
{

namespace qualifier
{

namespace constvolatile
{

namespace property
{

template<typename>
class ConstVolatileProperty;

template<typename T>
class ConstVolatileProperty:
public IsLeftConst<T>,
public IsRightConst<T>,
public IsLeftVolatile<T>,
public IsRightVolatile<T>,
public IsConst<T>,
public IsVolatile<T>
{};

}

}

}

}

#endif