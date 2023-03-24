/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:31:15 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 18:26:30 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &MatSource)
{
	*this = MatSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &MatSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete this->slots[i];
	}
	for (int i = 0; i < 4; i++)
		this->slots[i] = MatSource.slots[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
		for (int i = 0; i < 4; i++)
		if (this->slots[i])
			delete slots[i];
};

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!slots[i])
		{
			slots[i] = mat->clone();
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria *mat = NULL;
	
	for (int i = 3; i >= 0; i--)
	{
		if (slots[i])
		{
			if (slots[i]->getType().compare(type) == 0)
				mat = slots[i]->clone();
		}
	}
	return (mat);
}