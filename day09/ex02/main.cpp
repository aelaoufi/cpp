/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:57:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/05/03 14:12:52 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
		std::cout << "Enter more than one positive integer to sort.\n";
	else
	{
		std::vector<int> vec;
		std::deque<int> deq;
		clock_t	time;
		
		check_args(av);
		init_containers(av ,vec, deq, ac);
		check_duplicate(vec);
		std::cout << "Before : ";
		print_values(vec);
		time = clock();
		merge_insert(vec);
		time = clock() - time;
		std::cout << "After  : ";
		print_values(vec);
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << (double)time << " us\n";
		time = clock();
		merge_insert(deq);
		time = clock() - time;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << (double)time << " us\n";
	}
	
	return (0);
}