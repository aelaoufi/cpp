/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:57:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/05/01 15:17:04 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> vec;
	std::deque<int> deq;

	check_args(av);
	init_containers(av ,vec, deq, ac);
	check_duplicate(vec);
	merge_insert(vec);
	merge_insert(deq);
	
	return (0);
}