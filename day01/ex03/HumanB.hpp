#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon      weaponB;
	std::string nameB;

	public :
		HumanB(Weapon _weaponB);
		void        SetNameB(std::string _nameB);
		std::string GetNameB(void); 
		void		attack(void);
};

#endif