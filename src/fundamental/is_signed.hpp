#ifndef IS_SIGNED_HPP
#define IS_SIGNED_HPP

namespace easytype
{
	
namespace fundamental
{

template<typename>
class IsSigned;

template<>class IsSigned< signed char>:public easytype::basis::TrueType{};
template<>class IsSigned< signed short int>:public easytype::basis::TrueType{};
template<>class IsSigned< signed int>:public easytype::basis::TrueType{};
template<>class IsSigned< signed long int>:public easytype::basis::TrueType{};
template<>class IsSigned< signed long long int>:public easytype::basis::TrueType{};
template<>class IsSigned< float>:public easytype::basis::TrueType{};
template<>class IsSigned< double>:public easytype::basis::TrueType{};
template<>class IsSigned< long double>:public easytype::basis::TrueType{};

// Not signed
template<typename T>
class IsSigned:public easytype::basis::FalseType{};

}	
	
}

#endif



