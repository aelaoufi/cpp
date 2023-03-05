#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private :
		std::string		Name;
		unsigned int	HitPts;
		unsigned int	EnergyPts;
		unsigned int	AttackDmg;

	public :
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &Clap);
		ClapTrap &operator=(const ClapTrap &Clap);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(std::string _name);		
		unsigned int getAttackdmg(void) const;
};

#endif