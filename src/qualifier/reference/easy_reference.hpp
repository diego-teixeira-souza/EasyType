#ifndef EASY_REFERENCE_HPP
#define EASY_REFERENCE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

template<typename>class EasyReference;

template<typename T>
class EasyReference:
public easytype::qualifier::reference::signature::ReferenceSignature<T>,
public easytype::qualifier::reference::property::ReferenceProperty<T>,
public easytype::qualifier::reference::transform::ReferenceTransform<T>
{};
	
}	
	
}	
	
}

#endif