/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:57:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/05/01 18:09:48 by aelaoufi         ###   ########.fr       */
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
	float time = gettime_ms();
	merge_insert(vec);
	std::cout << "Time to process a range of 5 elements with std::vector: " << gettime_ms() - time << " us\n";
	time = gettime_ms();
	merge_insert(deq);
	std::cout << "Time to process a range of 5 elements with std::deque: " << gettime_ms() - time << " us\n";
	
	return (0);
}