/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:57:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/29 15:38:21 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> vec;
	std::deque<int> deq;

	check_args(av);
	init_containers(av ,vec, deq, ac);
	merge_insert(av, vec, deq);
	// for (size_t i = 0; i < vec.size(); i++)
	// {
	// 	std::cout << "vec :" << vec[i] << "\t";
	// 	std::cout << "deq :" << deq[i] << "\n";
	// }
	return (0);
}