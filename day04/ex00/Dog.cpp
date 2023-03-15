/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:01:05 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/15 19:56:57 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor\n";
}

Dog::Dog(std::string _type) : Animal (_type)
{
	std::cout << "Parametric Dog constructor\n";
}

Dog::Dog(const Dog &Dogg)
{
	*this = Dogg;
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &Dogg)
{
	this->type = Dogg.type;
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
}