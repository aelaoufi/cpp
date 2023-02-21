#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string type;

	public :
		Weapon();
		const std::string	&getType();
		void				setType(std:: string _type);
};

#endif