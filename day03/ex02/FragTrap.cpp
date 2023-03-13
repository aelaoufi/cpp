/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:03:05 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/13 16:17:58 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	HitPts = 100;
	EnergyPts = 100;
	AttackDmg = 30;
	std::cout << " FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << " FragTrap parametric constructor called\n";
	Name = _name;
	HitPts = 100;
	EnergyPts = 100;
	AttackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &Frag)
{
	*this = Frag;
	std::cout << " FragTrap Copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &Frag)
{
	this->HitPts = Frag.HitPts;
	this->EnergyPts = Frag.EnergyPts;
	this->AttackDmg = Frag.AttackDmg;
	this->Name = Frag.Name;
	std::cout << " FragTrap assignement operator called\n";
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->getEnergy() > 0)
	{
		this->setEnergy(this->getEnergy() - 1);
		std::cout << " FragTrap " << this->getName() << " Attacks " << target << ", causing " << this->getAttackdmg() << " points of damage!\n";
	}
	else
		std::cout << " You have no energy to do this action\n";
}

FragTrap::~FragTrap()
{
	std::cout << " FragTrap destructor called\n";
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << Name << " is requesting a HighFive (raises his hand)\n";
}