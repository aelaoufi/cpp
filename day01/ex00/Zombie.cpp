/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 02:06:58 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/20 19:16:21 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name) { name = _name; }

std::string Zombie::GetName(void) { return(name); }

Zombie::~Zombie(){ std::cout << GetName() << ": HAAAZ DIEEEEED\n";}

void Zombie::announce(void) {std::cout << GetName() <<": BraiiiiiiinnnzzzZ...\n";}