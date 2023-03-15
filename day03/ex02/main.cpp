/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:48 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/14 15:33:36 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap monster1;
	FragTrap monster2("Anass");
	FragTrap a("simo");
	FragTrap b("smati");

	b = a;
	monster1.setName("simo");
	monster1.attack("Anass");
	monster2.takeDamage(monster1.getAttackdmg());
	std::cout << monster2.getName() << " Has " << monster2.getHit() << " Hit points\n";
	monster1.beRepaired(12);
	a.beRepaired(10);
	monster1.highFiveGuys();
	return (0);
}