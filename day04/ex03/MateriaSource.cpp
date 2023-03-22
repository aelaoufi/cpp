/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:31:15 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/22 18:47:22 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

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
		this->slots[i] = MatSource.slots[i];
	return (*this);
}

MateriaSource::~MateriaSource() { };

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!slots[i])
			slots[i] = mat->clone();
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria *mat = NULL;
	
	for (int i = 4; i > 0; i--)
	{
		if (slots[i] && slots[i]->getType().compare(type) == 0)
			mat = slots[i]->clone();
	}
	return (mat);
}