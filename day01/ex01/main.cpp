/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:43 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/21 13:09:02 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie *Zmb;
	// int N;
	// std::string name;

	// std::cout << "Enter the number of Zombies you wanna create : ";
	// std::cin >> N;
	// while (N < 1)
	// {
	// 	std::cin.clear();
	// 	std::cout << "That was nasty from you, try what we call a shower.\nTry again :";
	// 	std::cin >> N;
	// }
	// std::cout << "Enter their names : ";
	// std::cin >> name;
	// while (name.empty())
	// {
	// 	std::cout << "Again ????? Pfffff you're lame\nTry agaaaain :";
	// 	std::cin >> name;
	// }
	Zmb = zombieHorde(5, "ANASS");
	for (int i = 0; i < 5; i++)
		Zmb[i].announce();
	delete[] Zmb;
}
