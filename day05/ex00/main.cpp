/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:52:39 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/29 01:56:28 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

int main()
{
	Bureaucrat Bureau("biro 9rray", 5);
	Bureaucrat tabla("tbla kasola", 200);
	Bureaucrat charjam("charjam 9ray bzf", -1);

	std::cout << Bureau;
	std::cout << tabla;
	std::cout << charjam;
}