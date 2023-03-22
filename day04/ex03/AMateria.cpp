/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:32:39 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/22 18:48:10 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { };

AMateria::AMateria(std::string const &_type) : type(_type) { }

AMateria::AMateria(const AMateria &Materia)
{
	*this = Materia;
}

AMateria &AMateria::operator=(const AMateria &Materia) { };

std::string const	&AMateria::getType() const
{
	return (type);
}

void		AMateria::use(ICharacter& target) { }

AMateria::~AMateria() { };


