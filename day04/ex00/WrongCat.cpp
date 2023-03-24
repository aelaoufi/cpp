/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:46:38 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 21:49:10 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor\n";
}

WrongCat::WrongCat(std::string _type) : WrongAnimal (_type)
{
	std::cout << "Parametric WrongCat constructor\n";
}

WrongCat::WrongCat(const WrongCat &WrongCatt)
{
	*this = WrongCatt;
	std::cout << "WrongCat copy constructor\n";
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCatt)
{
	this->type = WrongCatt.type;
	std::cout << "WrongCat copy assignement operator \n";
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meoooowww ^._.^\n";
}

WrongCat::~WrongCat()
{
	std::cout << "Cat Destructor\n";
}