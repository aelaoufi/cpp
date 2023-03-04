/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:40:03 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/04 16:51:04 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	EnergyPts = 10;
	HitPts = 20;
	AttackDmg = 0;
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string _name)
{
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
	this->Name = Clap.Name;
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
		std::cout << "ClapTrap " << this->Name << " took " << amount << " Damage\n" << this->Name << "is dead\n";
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
	this->HitPts += amount;
}

void ClapTrap::setName(std::string _name) { Name = _name; }

unsigned int ClapTrap::getAttackdmg(void) const { return (AttackDmg); }

ClapTrap::~ClapTrap() { std::cout << "Destructor Called\n"; }