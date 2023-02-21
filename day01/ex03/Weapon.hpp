#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string type;

	public :
		Weapon();
		Weapon(std::string _type);
		const std::string	&getType();
		void				setType(std:: string _type);
};

#endif