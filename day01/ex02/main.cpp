/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:28:19 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/21 16:27:25 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string Zombie;
	std::string *stringPTR;
	std::string &stringREF = Zombie;

	Zombie = "HI THIS IS BRAIN";
	stringPTR = &Zombie;
	std::cout << "string adress is :" << &Zombie << "\n";
	std::cout << "PTR adress is :" << stringPTR << "\n";
	std::cout << "REF adress is :" << &stringREF << "\n";
	return (0);
}