/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:42:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/10 21:51:09 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

int main()
{
	std::time_t time = std::time(0);
	struct tm *loctime = localtime(&time);
	
	std::cout << "[" << loctime->tm_year + 1900;
	std::cout << "0";
	std::cout << loctime->tm_mon + 1;
}