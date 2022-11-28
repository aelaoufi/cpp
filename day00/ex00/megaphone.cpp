/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:34:59 by anass_elaou       #+#    #+#             */
/*   Updated: 2022/11/28 19:56:53 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << "\n";
		return (0);
	}
	else   
	{
		for (int i = 1; i < ac ; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
		}
		std::cout << "\n";
	}
	return (0);
}

