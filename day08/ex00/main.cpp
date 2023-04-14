/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:15:43 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/14 22:32:41 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include<iostream>
#include <deque>

int main()
{
	srand(time(NULL));
	std::deque<int> find;
	for (int i = 0; i < 10; i++)
	{
		const int value = rand() % 9 + 1;
		find.push_back(value);
		std::cout << value << "\n";
	}
	std::cout << easyfind(find, 5) << "\n";
	return (0);
}