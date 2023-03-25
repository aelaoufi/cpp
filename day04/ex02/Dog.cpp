/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:05 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/25 00:33:05 by aelaoufi         ###   ########.fr       */
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
	std::cout << "Dog copy assignement operator \n";
	this->type = Dogg.type;
	this->brain = new Brain();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woooof Woooof (❍ᴥ❍ʋ)\n";
}

void	Dog::printIdeas(void) const
{
	brain->printSomeIdeas();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor\n";
	if (brain)
		delete(brain);
}