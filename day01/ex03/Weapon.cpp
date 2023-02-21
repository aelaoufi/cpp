/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:39:37 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/21 20:03:13 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { std::cout << "default contructor called\n"; }

Weapon::Weapon(std::string _type) { type = _type; }

void Weapon::setType(std::string _type) { type = _type; }

const std::string &Weapon::getType() { return (type); }