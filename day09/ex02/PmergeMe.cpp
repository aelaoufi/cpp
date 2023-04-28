/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/28 21:20:23 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
template <typename T>
void	insert_sort(T container)
{
	for (int i = 0; container[i]; i++)
	{
		for (int j = i + 1; container[j]; j++)
		{
			if (container[i] < container[j])
			{
				int temp = container[i];
				container[i] = container[j];
				container[j] = temp;
			}
		}
	}
}

void	init_containers(char **args, std::vector<int> &vec, std::deque<int> &deq)
{
	for (int i = 1; args[i]; i++)
	{
		vec[i - 1] = atoi(args[i]);
		deq[i - 1] = atoi(args[i]);
	}
}

void	sort_them(char **args, std::vector<int> &vec, std::deque<int> &deq)
{
	init_containers(args, vec, deq);
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