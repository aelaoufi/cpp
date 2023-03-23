/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:32:42 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/23 19:47:55 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::Cure (const Cure &dwa)
{
	*this = dwa;
}

Cure &Cure::operator=(const Cure &dwa)
{
	this->type = dwa.type;
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds*\n";
}

Cure *Cure::clone() const
{
	Cure *cure = new Cure;
	cure->type = this->type;
	return (cure);
}

Cure::~Cure() { };