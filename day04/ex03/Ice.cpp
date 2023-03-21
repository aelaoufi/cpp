/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:45:49 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/21 19:03:20 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){	}

Ice::Ice(std::string type) : AMateria(type) { }

Ice::Ice (const Ice &Spice)
{
	*this = Spice;
}

Ice &Ice::operator=(const Ice &Spice)
{
	this->type = Spice.type;
	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice() = default;