/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:05 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/17 19:58:09 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor\n";
	brain = new Brain;
}

Dog::Dog(std::string _type) : Animal (_type)
{
	std::cout << "Parametric Dog constructor\n";
	brain = new Brain;
}

Dog::Dog(const Dog &Dogg)
{
	*this = Dogg;
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &Dogg)
{
	this->type = Dogg.type;
	this->brain = Dogg.brain;
	std::cout << "Dog copy assignement operator \n";
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woooof Woooof (❍ᴥ❍ʋ)\n";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
	delete(brain);
}