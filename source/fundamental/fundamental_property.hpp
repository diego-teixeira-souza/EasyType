#ifndef FUNDAMENTAL_PROPERTY_HPP
#define FUNDAMENTAL_PROPERTY_HPP


namespace easytype
{
	
namespace fundamental
{

template<typename T>	
class FundamentalProperty;

template<typename T>
class FundamentalProperty:
public easytype::fundamental::integer::IntegerProperty<T>,
public easytype::fundamental::character::CharacterProperty<T>,
public easytype::fundamental::floating::FloatingProperty<T>,
public easytype::fundamental::empty::EmptyProperty<T>,
public easytype::fundamental::boolean::BooleanProperty<T>,
public IsSigned<T>,
public IsUnsigned<T>,
public IsFundamental<T>{};
	
}	
	
}


#endif
