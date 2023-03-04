/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:48 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/04 18:32:28 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap monster1;
	ClapTrap monster2("Anass");
	ClapTrap a("krimo");
	ClapTrap b("smati");

	b = a;
	monster1.setName("simo");
	monster1.attack("Anass");
	monster2.takeDamage(monster1.getAttackdmg());
	monster1.beRepaired(12);
	a.beRepaired(10);
	b.beRepaired(6);
	return (0);
}