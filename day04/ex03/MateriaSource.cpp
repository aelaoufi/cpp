/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:31:15 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/22 17:46:38 by aelaoufi         ###   ########.fr       */
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

MateriaSource::~MateriaSource() = default;

void	MateriaSource::learnMateria(AMateria*)
{
	AMateria *Mat = new *AMateria;
	
}