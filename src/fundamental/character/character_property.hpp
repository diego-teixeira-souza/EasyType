#ifndef CHARACTER_PROPERTY_HPP
#define CHARACTER_PROPERTY_HPP


namespace easytype
{
	
namespace fundamental
{

namespace character
{

template<typename T>
class CharacterProperty;

template<typename T>
class CharacterProperty:
public IsChar<T>,
public IsWchar<T>,
public IsChar16<T>,
public IsChar32<T>,
public IsCharacter<T>{};	
	
}	
	
}	
	
}


#endif


/**** History **********************
*Date / Version / Description*******
************************************
*	 
************************************
*			    
************************************/


