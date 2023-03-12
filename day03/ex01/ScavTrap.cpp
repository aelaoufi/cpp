/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:22:32 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/12 18:11:18 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{ 
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "Default ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{ 
	setName(_name);
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "Parametric ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	*this = Scav;
	std::cout << "Copy constructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPts > 0)
	{
		this->EnergyPts -= 1;
		std::cout << "ScavTrap " << this->Name << " Attacks " << target << ", causing " << this->AttackDmg << " points of damage!\n";
	}
	else
		std::cout << "You have no energy to do this action\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Scav)
{
	this->setHit(100);
	this->setEnergy(50);
	this->setAttack(20);
	this->setName(Scav.getName());
	std::cout << "Copy Assignement operator called\n";
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << getName() << " is in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Destructor Called\n"; 
}