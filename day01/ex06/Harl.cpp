/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:02:51 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/25 15:20:39 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void    Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level)
{
	int i = 0;
	
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (level.compare(msg[i]) == 0)
			break;
	}
	switch (i)
	{
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}