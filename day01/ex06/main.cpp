/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:02:18 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/25 15:18:36 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	(void)ac;
	Harl comp;
	
	comp.complain(av[1]);
	return (0);
}