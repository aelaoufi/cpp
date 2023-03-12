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
		void setHit(unsigned int	_HitPts);
		void setEnergy(unsigned int	_EnergyPts);
		void setAttack(unsigned int	_AttackDmg);
		std::string getName(void) const ;
		unsigned int getHit(void);
		unsigned int getEnergy(void);
		unsigned int getAttackdmg(void) const;
};

#endif