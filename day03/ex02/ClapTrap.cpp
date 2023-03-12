/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:40:03 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/12 18:13:53 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	EnergyPts = 10;
	HitPts = 10;
	AttackDmg = 0;
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	EnergyPts = 10;
	HitPts = 10;
	AttackDmg = 0;
	Name = _name;
	std::cout << "Parametric constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &Clap)
{
	*this = Clap;
	std::cout << "Copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Clap)
{
	Name = Clap.Name;
	HitPts = Clap.HitPts;
	AttackDmg = Clap.AttackDmg;
	EnergyPts = Clap.EnergyPts;
	std::cout << "Copy Assignement operator called\n";
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPts > 0)
	{
		this->EnergyPts -= 1;
		std::cout << "ClapTrap " << this->Name << " Attacks " << target << ", causing " << this->AttackDmg << " points of damage!\n";
	}
	else
		std::cout << "You have no energy to do this action\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPts <= amount && this->AttackDmg != 0)
	{
		//this->HitPts = 0;
		std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage\n" << this->Name << " is dead\n";
	}
	else
	{
		//this->HitPts -= amount;
		std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " Regenerated " << amount << " Hit points to go from " << HitPts << " to " <<  HitPts + amount << "\n";
	HitPts += amount;
}

void ClapTrap::setName(std::string _name) { Name = _name; }

void ClapTrap::setHit(unsigned int	_HitPts) { HitPts = _HitPts;}

void ClapTrap::setEnergy(unsigned int	_EnergyPts) { EnergyPts = _EnergyPts; }

void ClapTrap::setAttack(unsigned int	_AttackDmg) { AttackDmg = _AttackDmg; }

std::string ClapTrap::getName(void) const { return (Name); }

unsigned int ClapTrap::getHit(void) { return (HitPts);}
		
unsigned int ClapTrap::getEnergy(void){ return (EnergyPts); }

unsigned int ClapTrap::getAttackdmg(void) const { return (AttackDmg); }

ClapTrap::~ClapTrap() { std::cout << "Destructor Called\n"; }