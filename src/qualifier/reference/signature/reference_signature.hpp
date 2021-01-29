#ifndef REFERENCE_SIGNATURE_HPP
#define REFERENCE_SIGNATURE_HPP

namespace easytype
{

namespace qualifier
{

namespace reference
{

namespace signature
{

template<typename T>class ReferenceSignature;

template<typename T>
class ReferenceSignature:
public SingleReference<T>,
public DoubleReference<T>,
public ReferenceOf<
	typename SingleReference<
		typename DoubleReference<T>::type
	>::type
>{};	
	
}	
	
}	
	
}	
	
}

#endif