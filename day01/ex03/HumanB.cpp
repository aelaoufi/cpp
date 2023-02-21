/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:39:45 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/21 19:47:53 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(Weapon _weaponB){ weaponB = _weaponB; }
void        HumanB::SetNameB(std::string _nameB) { nameB = _nameB ;}
std::string HumanB::GetNameB(void) { return (nameB); }
void        HumanB::attack() { std::cout << GetNameB() << "attacks with their" << weaponB.getType() << "\n"; }