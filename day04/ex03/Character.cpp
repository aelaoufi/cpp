/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:30:47 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 00:07:31 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	for (int i = 0; i < 5; i++)
		slots[i] = NULL;
};

Character::Character(std::string _Name) : Name(_Name)
{
	for (int i = 0; i < 5; i++)
		slots[i] = NULL;
}

Character::Character(const Character &Charact)
{
	*this = Charact;
}

Character &Character::operator=(const Character &Charact)
{
	this->Name = Charact.Name;
	for (int i = 0; i < 5; i++)
		this->slots[i] = Charact.slots[i];
	return (*this);
}

Character::~Character() { };

std::string const &Character::getName() const
{
	return (Name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!slots[i])
		{
			slots[i] = m->clone();
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		return ;
	if (slots[4])
	{
		delete slots[4];
		slots[4] = NULL;
		slots[4] = slots[idx];
	}
	else
		slots[4] = slots[idx];
	slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (slots[idx] && (idx >= 0 && idx <= 3))
	{
		slots[idx]->use(target);
	}
}
