/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:43 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/20 20:09:17 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie *Zmb;
	int N;
	std::string name;

	std::cout << "Enter the number of Zombies you wanna create : ";
	std::cin >> N;
	while (N < 1)
	{
		std::cin.clear();
		std::cout << "That was nasty from you, try what we call a shower.\nTry again :";
		std::cin >> N;
	}
	std::cout << "Enter their names : ";
	std::cin >> name;
	while (name.empty())
	{
		std::cout << "Again ????? Pfffff you're lame\nTry agaaaain :";
		std::cin >> name;
	}
	Zmb = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		Zmb[i].announce();
	delete[] Zmb;
}
