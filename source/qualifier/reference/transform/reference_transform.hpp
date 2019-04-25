#ifndef REFERENCE_TRANSFORM_HPP
#define REFERENCE_TRANSFORM_HPP

namespace easytype
{

namespace qualifier
{

namespace reference	
{

namespace transform
{

template<typename>class ReferenceTransform;

template<typename T>
class ReferenceTransform:
public MakeSingleReference<T>,
public MakeDoubleReference<T>,	
public RemoveSingleReference<T>,
public RemoveDoubleReference<T>,
public RemoveReference<T>
{};
	
}	
	
}
	
}	
	
}

#endif