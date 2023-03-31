/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:52:39 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/29 21:49:33 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

int main()
{
	Bureaucrat Bureau("biro 9rray", 1);
	Bureaucrat tabla("tbla kasola", 200);
	Bureaucrat charjam("charjam 9ray bzf", -1);

	std::cout << Bureau;
	std::cout << tabla;
	std::cout << charjam;

	Bureau.IncrmntGrade();
	std::cout << Bureau;
}