/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:22:32 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/13 15:23:12 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{ 
	HitPts = 100;
	EnergyPts = 50;
	AttackDmg = 20;
	std::cout << " ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{ 
	Name = _name;
	HitPts = 100;
	EnergyPts = 50;
	AttackDmg = 20;
	std::cout << " ScavTrap parametric constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	*this = Scav;
	std::cout << " ScavTrap Copy constructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergy() > 0)
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << " ScavTrap " << this->getName() << " Attacks " << target << ", causing " << this->getAttackdmg() << " points of damage!\n";
	}
	else
		std::cout << " You have no energy to do this action\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Scav)
{
	this->HitPts = Scav.HitPts;
	this->EnergyPts = Scav.EnergyPts;
	this->AttackDmg = Scav.AttackDmg;
	this->Name = Scav.Name;
	std::cout << " ScavTrap Copy Assignement operator called\n";
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << " ScavTrap : " << getName() << " is in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Destructor Called\n"; 
}