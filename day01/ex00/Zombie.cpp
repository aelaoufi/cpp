/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:06:58 by anass_elaou       #+#    #+#             */
/*   Updated: 2022/12/23 02:16:50 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {};

std::string Zombie::GetName(void) {return(name);}

Zombie::~Zombie(){ std::cout << GetName() << ": HAAAZ DIEEEEED\n";}

void Zombie::announce(void) {std::cout << GetName() <<": BraiiiiiiinnnzzzZ...\n";}