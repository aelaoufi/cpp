/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:43 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/21 17:24:25 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie *Zmb;

	Zmb = zombieHorde(5, "ANASS");
	for (int i = 0; i < 5; i++)
		Zmb[i].announce();
	delete[] Zmb;
}
