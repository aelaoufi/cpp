/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:39:48 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/21 19:45:34 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon _weaponA) : weaponA{_weaponA} {}
void        HumanA::SetNameA(std::string _nameA) { nameA = _nameA ;}
std::string HumanA::GetNameA(void) { return (nameA); }
void        HumanA::attack() { std::cout << GetNameA() << "attacks with their" << weaponA.getType() << "\n"; }