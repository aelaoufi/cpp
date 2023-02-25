/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:17:06 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/25 14:57:35 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}

void    Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level)
{
	typedef void (Harl::*func)(void);
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	func functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(msg[i]) == 0)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "This level is not supported by Harl.\n";
}