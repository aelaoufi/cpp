/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:46:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/24 15:22:16 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		std::cout << "Enter a file name as argument.\n";
// 	else
// 		InFile_parsing(av[1]);
// 	return (0);
// }

int main()
{
	std::string str = "2011-01-03";
	std::string str2 = "2011-01-10,0.3";
	int i = str.compare(str2.substr(0, 10));
	std::cout << i << "\n";
}
