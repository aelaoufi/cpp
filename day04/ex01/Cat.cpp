/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:10 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/19 16:09:56 by anass_elaou      ###   ########.fr       */
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
	this->type = Catt.type;
	this->brain = Catt.brain;
	std::cout << "Cat copy assignement operator \n";
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meoooowww ^._.^\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor\n";
	delete(brain);
}