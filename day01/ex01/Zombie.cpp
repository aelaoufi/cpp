/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:37 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/02/21 13:34:17 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {std::cout << "default constructor called\n";}

Zombie::Zombie(std::string _name) { std::cout << "parametric constructor called\n"; name = _name; }

std::string Zombie::GetName(void) { return (Zombie::name); }

void Zombie::announce(void) { std::cout << Zombie::GetName() << " : MMMmmmmmm BRAAAAAIIINZ\n"; }

Zombie::~Zombie() { std::cout << name << " : IS DEAAAAD\n"; }
