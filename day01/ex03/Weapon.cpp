/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:39:37 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/21 17:21:31 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { std::cout << "default contructor called\n"; }

void Weapon::setType(std::string _type) { type = _type; }

const std::string &Weapon::getType() { return (type); }