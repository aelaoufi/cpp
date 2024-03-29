#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
		int                 RawBits;
		static const int    Bits = 8;
	public :
		Fixed();
		Fixed(const int integer);
		Fixed(const float floating_point);
		Fixed(const Fixed &_fixed);
		Fixed &operator= (const Fixed &_fixed);
		bool operator < (const Fixed &fixed);
		bool operator > (const Fixed &fixed);
		bool operator <= (const Fixed &fixed);
		bool operator >= (const Fixed &fixed);
		bool operator == (const Fixed &fixed);
		bool operator != (const Fixed &fixed);
		Fixed operator + (const Fixed &fixed);
		Fixed operator - (const Fixed &fixed);
		Fixed operator * (const Fixed &fixed);
		Fixed operator / (const Fixed &fixed);
		Fixed operator ++ (int);
		Fixed operator ++ ();
		Fixed operator -- (int);
		Fixed operator -- ();
		~Fixed();

		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		static Fixed	min(Fixed &Fp1, Fixed &Fp2);
		static Fixed	min(const Fixed &Fp1, const Fixed &Fp2);
		static Fixed	max(Fixed &Fp1, Fixed &Fp2);
		static Fixed	max(const Fixed &Fp1, const Fixed &Fp2);
};
std::ostream &operator <<( std::ostream &output, const Fixed &fixed);


#endif