/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:10 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/25 00:31:42 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor\n";
	brain = new Brain;
}

Cat::Cat(std::string _type) : Animal (_type)
{
	std::cout << "Parametric Cat constructor\n";
	brain = new Brain;
}

Cat::Cat(const Cat &Catt)
{
	*this = Catt;
	std::cout << "Cat copy constructor\n";
}

Cat &Cat::operator=(const Cat &Catt)
{
	std::cout << "Cat copy assignement operator \n";
	this->type = Catt.type;
	this->brain = new Brain;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meoooowww ^._.^\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
	if (brain)
		delete(brain);
}