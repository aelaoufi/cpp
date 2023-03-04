/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:39:48 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/04 16:46:33 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap monster1;
	ClapTrap monster2("Anass");

	monster1.setName("simo");
	monster1.attack("Anass");
	monster2.takeDamage(monster1.getAttackdmg());
	monster2.beRepaired(12);
	
	return (0);
}