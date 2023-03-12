#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap() : ClapTrap(){};
		ScavTrap(std::string _name) : ClapTrap(_name){};
		ScavTrap(const ScavTrap &Scav);
		ScavTrap &operator=(const ScavTrap &Scav);
		~ScavTrap();

		void guardGate();
};

#endif