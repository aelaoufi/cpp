/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:48:02 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 21:48:27 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
	std::cout << "Parametric WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Anml)
{
	*this = Anml;
	std::cout << "WrongAnimal copy constructor\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Anml)
{
	this->type = Anml.type;
	std::cout << "WrongAnimal copy assignement operator \n";
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "(Complete Silence...)\n";
}

std::string		WrongAnimal::getType(void) const
{
	return (type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor\n";
}