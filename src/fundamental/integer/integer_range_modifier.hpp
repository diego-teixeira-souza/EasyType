#ifndef INTEGER_RANGE_MODIFIER_HPP
#define INTEGER_RANGE_MODIFIER_HPP


namespace easytype
{
	
namespace fundamental
{

namespace integer
{

namespace signature
{

template<int,int,int,int,int>
class IntegerRangeModifier;

template<int>class TinyInteger;
template<int>class ShortInteger;
template<int>class DefaultInteger;
template<int>class LongInteger;
template<int>class LongLongInteger;

template<int n>class TinyInteger:public easytype::basis::BooleanType<n>{};
template<int n>class ShortInteger:public easytype::basis::BooleanType<n>{};
template<int n>class DefaultInteger:public easytype::basis::BooleanType<n>{};
template<int n>class LongInteger:public easytype::basis::BooleanType<n>{};
template<int n>class LongLongInteger:public easytype::basis::BooleanType<n>{};

template<int tiny_i, int short_i, int default_i, int long_i, int long_long_i>
class IntegerRangeModifier:
public TinyInteger    < tiny_i >    ,
public ShortInteger   < short_i>    ,
public DefaultInteger < default_i>  ,
public LongInteger    < long_i>     ,
public LongLongInteger< long_long_i>
{};

	
}	
	
}	
	
}	
	
}


#endif


