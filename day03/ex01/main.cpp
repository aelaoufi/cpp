/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:48 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/13 16:02:21 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap monster1;
	ScavTrap monster2("Anass");
	ScavTrap a("simo");
	ScavTrap b("smati");

	b = a;
	monster1.setName("simo");
	monster1.attack("Anass");
	monster2.takeDamage(monster1.getAttackdmg());
	monster1.beRepaired(12);
	a.beRepaired(10);
	monster1.guardGate();
	return (0);
}