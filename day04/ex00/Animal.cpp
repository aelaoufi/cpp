/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/15 16:18:49 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor\n";
}

Animal::Animal(std::string _type) : type { _type }
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

void	Animal::makeSound(void)
{
	std::cout << "(Complete Silence...)\n";
}

std::string		Animal::getName(void)
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor\n";
}