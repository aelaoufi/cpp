/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:37 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/20 19:59:41 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string _name) { name = _name; }

std::string Zombie::GetName(void) { return (Zombie::name); }

void Zombie::announce(void) { std::cout << Zombie::GetName() << " : MMMmmmmmm BRAAAAAIIINZ\n"; }

Zombie::~Zombie() { std::cout << name << " IS DEAAAAD\n"; }
