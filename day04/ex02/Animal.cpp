/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/19 15:05:53 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor\n";
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Parametric Animal constructor\n";
}

Animal::Animal(const Animal &Anml)
{
	*this = Anml;
	std::cout << "Animal copy constructor\n";
}

Animal &Animal::operator=(const Animal &Anml)
{
	this->type = Anml.type;
	std::cout << "Animal copy assignement operator \n";
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}