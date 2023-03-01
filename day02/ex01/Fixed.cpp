/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:17:46 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/01 15:13:29 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	RawBits = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	RawBits = integer * pow(2, Bits);
}

Fixed::Fixed(const float floatingPoint)
{
	std::cout << "Float constructor called\n";
	RawBits = roundf(floatingPoint * pow(2.0, Bits));
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

int	Fixed::getRawBits(void) const { return (RawBits); }

void Fixed::setRawBits(int const raw) { RawBits = raw; }

std::ostream &operator <<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);   
}

float Fixed::toFloat(void) const
{
	float _toFloat = getRawBits() / pow(2, Bits);
	return (_toFloat);
}

int Fixed::toInt(void) const
{
	float _toInt = getRawBits() / pow(2, Bits);
	return (roundf(_toInt));
}

Fixed::~Fixed() { std::cout << "Destructor called\n"; }