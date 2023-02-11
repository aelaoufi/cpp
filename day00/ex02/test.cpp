/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:42:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/11 14:29:21 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

int main()
{
	std::time_t time = std::time(0);
	struct tm *loctime = localtime(&time);
	
	std::cout << "[" << loctime->tm_year + 1900;
	if (loctime->tm_mon + 1 < 9)
		std::cout << "0";
	std::cout << loctime->tm_mon + 1;
	if (loctime->tm_mday < 9)
		std::cout << "0";
	std::cout << loctime->tm_mday << "_";
	if (loctime->tm_hour < 9)
		std::cout << "0";
	std::cout << loctime->tm_hour;
	if (loctime->tm_min < 9)
		std::cout << "0";
	std::cout << loctime->tm_min;
		if (loctime->tm_sec < 9)
		std::cout << "0";
	std::cout << loctime->tm_sec << "] ";
}