/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:31 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/21 17:24:12 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	if (N < 1 || name.empty())
	{
		std::cout << "You naughty naughty, try again.\n";
		return (0);
	}
	Zombie *Zmb = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		Zmb[i] =  Zombie(name);
	return (Zmb);
}