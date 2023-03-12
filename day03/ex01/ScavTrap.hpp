#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &Scav);
		ScavTrap &operator=(const ScavTrap &Scav);
		~ScavTrap();

		void guardGate(void);
		void attack(const std::string& target);
};

#endif