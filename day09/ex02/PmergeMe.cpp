/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/29 18:52:04 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
template <typename T>
void	insert_sort(T &container)
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

void	init_containers(char **args, std::vector<int> &vec, std::deque<int> &deq, int ac)
{
	for (int i = 1; i < ac; i++)
	{
		vec.push_back(atoi(args[i]));
		deq.push_back(atoi(args[i]));
	}
}

template <typename T>
void	merge(T &cont, T &left, T &right)
{
	
}

template <typename T>
void	merge_insert(T &cont)
{
	if (cont.size() < SPLIT_LIMIT)
		insert_sort(cont);
	else
	{
		int mid = cont.size() / 2;
		T left;
		T right;
		left.assign(cont.begin(), mid);
		left.assign(mid , cont.end());
		merge_insert(left);
		merge_insert(right);
		
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