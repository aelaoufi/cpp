/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:22:32 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/12 17:13:07 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{ 
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "Default ScarvTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{ 
	setName(_name);
	setHit(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "Parametric ScarvTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	setHit(100);
	setEnergy(50);
	setAttack(20);
}