/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:39:00 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/28 15:24:41 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	RawBits = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &_fixed) 
{
	std::cout << "Copy constructor called\n"; 
	*this = _fixed;
}

Fixed &Fixed::operator= (const Fixed &_fixed)
{
	std::cout << "Copy assignment operator called\n";
	RawBits = _fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (RawBits);
}

void Fixed::setRawBits(int const raw) { RawBits = raw; }

Fixed::~Fixed() { std::cout << "Destructor called\n"; }