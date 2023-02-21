#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon      &weaponA;
	std::string nameA;

	public :
		HumanA(std::string _nameA, Weapon _weaponA);
		void        SetNameA(std::string _nameA);
		std::string GetNameA(void); 
		void		attack(void);
};

#endif