/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/30 16:09:46 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	init_containers(char **args, std::vector<int> &vec, std::deque<int> &deq, int ac)
{
	for (int i = 1; i < ac; i++)
	{
		vec.push_back(atoi(args[i]));
		deq.push_back(atoi(args[i]));
	}
}

void	check_args(char **args)
{	
	for (int i = 1; args[i]; i++)
	{
		for (int j = 0; args[i][j]; j++)
		{
			if (!isdigit(args[i][j]) && args[i][j] != '+')
			{
				std::cerr << "Error : enter positive integers only.\n";
				exit(0);
			}
		}
	}
}

void	check_duplicate(std::vector<int> vec)
{
	std::sort(vec.begin(), vec.end());
	if (vec[vec.size() - 2] == vec[vec.size() - 1])
	{
		std::cerr << "Error : duplicated values are not accepted\n";
		exit(0);
	}
	for (size_t i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] == vec[i + 1])
		{
			std::cerr << "Error : duplicated values are not accepted\n";
			exit(0);
		}
	}
}
