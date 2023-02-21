/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:31 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/20 19:40:08 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	Zombie *Zmb = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		Zmb[i] =  Zombie(name);
	return (Zmb);
}