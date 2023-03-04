/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:17:46 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/03 13:31:09 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	RawBits = 0;
}

Fixed::Fixed(const int integer)
{
	RawBits = integer * pow(2, Bits);
}

Fixed::Fixed(const float floatingPoint)
{
	RawBits = roundf(floatingPoint * pow(2.0, Bits));
}

Fixed::Fixed(const Fixed &_fixed) 
{
	*this = _fixed;
}

Fixed &Fixed::operator= (const Fixed &_fixed)
{
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

bool Fixed::operator < (const Fixed &fixed)
{
	return (this->RawBits < fixed.RawBits);
}

bool Fixed::operator > (const Fixed &fixed)
{
	return (this->RawBits > fixed.RawBits);
}

bool Fixed::operator <= (const Fixed &fixed)
{
	return (this->RawBits <= fixed.RawBits);
}

bool Fixed::operator >= (const Fixed &fixed)
{
	return (this->RawBits >= fixed.RawBits);
}

bool Fixed::operator == (const Fixed &fixed)
{
	return (this->RawBits == fixed.RawBits);
}

bool Fixed::operator != (const Fixed &fixed)
{
	return (this->RawBits != fixed.RawBits);
}

Fixed Fixed::operator + (const Fixed &fixed)
{
	Fixed fx;
	
	fx = this->toFloat() + fixed.toFloat();
	return (fx);
}

Fixed Fixed::operator - (const Fixed &fixed)
{
	Fixed fx;
	
	fx = this->toFloat() - fixed.toFloat();
	return (fx);
}

Fixed Fixed::operator * (const Fixed &fixed)
{
	Fixed fx;
	
	fx = this->toFloat() * fixed.toFloat();
	return (fx);
}

Fixed Fixed::operator / (const Fixed &fixed)
{
	Fixed fx;
	
	fx = this->toFloat() / fixed.toFloat();
	return (fx);
}

Fixed Fixed::operator ++ (int)
{
	Fixed fx = *this;
	
	this->RawBits++;
	return (fx);
}

Fixed Fixed::operator ++ ()
{
	this->RawBits++;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed fx = *this;
	
	this->RawBits--;
	return (fx);
}

Fixed Fixed::operator -- ()
{
	this->RawBits--;
	return (*this);
}

Fixed	Fixed::min(Fixed &Fp1, Fixed &Fp2)
{
	return (Fp1 < Fp2 ? Fp1 : Fp2);
}

Fixed	Fixed::min(const Fixed &Fp1, const Fixed &Fp2)
{
	return (Fp1.RawBits < Fp2.RawBits ? Fp1 : Fp2);
}

Fixed	Fixed::max(Fixed &Fp1, Fixed &Fp2)
{
	return (Fp1 > Fp2 ? Fp1 : Fp2);
}

Fixed	Fixed::max(const Fixed &Fp1, const Fixed &Fp2)
{
	return (Fp1.RawBits > Fp2.RawBits ? Fp1 : Fp2);
}

Fixed::~Fixed() {}